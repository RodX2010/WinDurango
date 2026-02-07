#pragma once
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "version.lib")
#include "unknown.g.h"
#include "xcom/base.h"
#include <Windows.h>
#include <bitset>
#include <d3d11_4.h>
#include <dxgi1_6.h>
#include <map>
#include <mutex>
#include <algorithm>
#include <cstdint>

// We use that to know the OS version.
abi_t g_ABI{};

// Immediate Context fence object.
BOOL m_Fence = TRUE;

// Multimap for placement update
std::multimap<void *, void *> g_ResourceMap;
std::mutex g_ResourceMapMutex;

#pragma comment(lib, "onecore.lib")
#pragma comment(lib, "kernel32.lib")

void GetCombaseVersion()
{
    DWORD FileVersionSize = GetFileVersionInfoSizeW(L".\\EmbeddedXvd\\Windows\\System32\\combase.dll", NULL);
    if (!FileVersionSize)
    {
        MessageBoxW(nullptr,
                    L"Couldn't get the combase version info size! Make sure you have EmbeddedXvd in the game "
                    L"root/Mount folder.",
                    L"D3D11.X Error!", MB_OK);
    }

    BYTE *Data = new BYTE[FileVersionSize];
    BOOL ret = GetFileVersionInfoW(L".\\EmbeddedXvd\\Windows\\System32\\combase.dll", NULL, FileVersionSize, Data);
    if (!ret)
    {
        MessageBoxW(
            nullptr,
            L"Couldn't get the combase version info! Make sure you have EmbeddedXvd in the game root/Mount folder.",
            L"D3D11.X Error!", MB_OK);
        delete[] Data;
    }

    VS_FIXEDFILEINFO *pFixedFileInfo{};
    UINT Length = 0;

    VerQueryValueW(Data, L"\\", (LPVOID *)&pFixedFileInfo, &Length);
    if (!pFixedFileInfo)
    {
        MessageBoxW(
            nullptr,
            L"Couldn't get the combase version value! Make sure you have EmbeddedXvd in the game root/Mount folder.",
            L"D3D11.X Error!", MB_OK);
        delete[] Data;
    }

    DWORD major = HIWORD(pFixedFileInfo->dwProductVersionMS);
    DWORD minor = LOWORD(pFixedFileInfo->dwProductVersionMS);
    DWORD build = HIWORD(pFixedFileInfo->dwProductVersionLS);
    DWORD revision = LOWORD(pFixedFileInfo->dwProductVersionLS);

    g_ABI.Major = major;
    g_ABI.Minor = minor;
    g_ABI.Build = build;
    g_ABI.Revision = revision;
}

inline bool IsBlockCompressed(DXGI_FORMAT format)
{
    switch (format)
    {
    case DXGI_FORMAT_BC1_TYPELESS:
    case DXGI_FORMAT_BC1_UNORM:
    case DXGI_FORMAT_BC1_UNORM_SRGB:
    case DXGI_FORMAT_BC2_TYPELESS:
    case DXGI_FORMAT_BC2_UNORM:
    case DXGI_FORMAT_BC2_UNORM_SRGB:
    case DXGI_FORMAT_BC3_TYPELESS:
    case DXGI_FORMAT_BC3_UNORM:
    case DXGI_FORMAT_BC3_UNORM_SRGB:
    case DXGI_FORMAT_BC4_TYPELESS:
    case DXGI_FORMAT_BC4_UNORM:
    case DXGI_FORMAT_BC4_SNORM:
    case DXGI_FORMAT_BC5_TYPELESS:
    case DXGI_FORMAT_BC5_UNORM:
    case DXGI_FORMAT_BC5_SNORM:
    case DXGI_FORMAT_BC6H_TYPELESS:
    case DXGI_FORMAT_BC6H_UF16:
    case DXGI_FORMAT_BC6H_SF16:
    case DXGI_FORMAT_BC7_TYPELESS:
    case DXGI_FORMAT_BC7_UNORM:
    case DXGI_FORMAT_BC7_UNORM_SRGB:
        return true;
    default:
        return false;
    }
}

inline uint32_t BytesPerBlock(DXGI_FORMAT format)
{
    switch (format)
    {
    case DXGI_FORMAT_BC1_TYPELESS:
    case DXGI_FORMAT_BC1_UNORM:
    case DXGI_FORMAT_BC1_UNORM_SRGB:
    case DXGI_FORMAT_BC4_TYPELESS:
    case DXGI_FORMAT_BC4_UNORM:
    case DXGI_FORMAT_BC4_SNORM:
        return 8;

    default:
        return 16;
    }
}

inline uint32_t BytesPerPixel(DXGI_FORMAT format)
{
    switch (format)
    {
    case DXGI_FORMAT_R8_UNORM:
        return 1;
    case DXGI_FORMAT_R8G8_UNORM:
        return 2;
    case DXGI_FORMAT_R8G8B8A8_UNORM:
        return 4;
    case DXGI_FORMAT_B8G8R8A8_UNORM:
        return 4;
    case DXGI_FORMAT_R16_FLOAT:
        return 2;
    case DXGI_FORMAT_R16G16_FLOAT:
        return 4;
    case DXGI_FORMAT_R16G16B16A16_FLOAT:
        return 8;
    case DXGI_FORMAT_R32_FLOAT:
        return 4;
    case DXGI_FORMAT_R32G32_FLOAT:
        return 8;
    case DXGI_FORMAT_R32G32B32A32_FLOAT:
        return 16;
    default:
        return 0;
    }
}

inline void CalculatePitch(uint32_t Width, uint32_t Height, DXGI_FORMAT Format, uint32_t* pRowPitch, uint32_t* pSlicePitch)
{;
    if (IsBlockCompressed(Format))
    {
        uint32_t BlocksWide = (Width + 3) / 4;
        uint32_t BlocksHigh = (Height + 3) / 4;
        uint32_t BlockSize = BytesPerBlock(Format);

        (*pRowPitch) = BlocksWide * BlockSize;
        (*pSlicePitch) = (*pRowPitch) * BlocksHigh;
    }
    else
    {
        uint32_t bpp = BytesPerPixel(Format);

        (*pRowPitch) = Width * bpp;
        (*pSlicePitch) = (*pRowPitch) * Height;
    }
}
