#pragma once
#include "ID3D11Device.h"
#include "ID3D11DeviceContext.h"
#include "IDXGISwapChain.h"

static ID3D11Device2 *pDev2 = nullptr;
static ID3D11DeviceContext2 *pCtx2 = nullptr;

struct ID3D11Runtime
{
    virtual HRESULT CreateDevice(void **ppDevice, void **ppContext) = 0;
};

template <abi_t ABI> struct D3D11Runtime : public ID3D11Runtime
{
    HRESULT CreateDevice(void **ppDevice, void **ppContext) override
    {
        ID3D11Device *pDevice = nullptr;
        ID3D11DeviceContext *pContext = nullptr;

        D3D_FEATURE_LEVEL FeatureLevels[] = {D3D_FEATURE_LEVEL_11_1, D3D_FEATURE_LEVEL_11_0};

        auto hr = D3D11CreateDevice(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, 0, FeatureLevels, 2, D3D11_SDK_VERSION,
                                    &pDevice, nullptr, &pContext);

        if (FAILED(hr))
        {
            MessageBoxA(nullptr, "Failed to create the D3D11 Device!", "Error!", MB_OK);
        }

        ID3D11Device2 *pDevice2 = nullptr;
        ID3D11DeviceContext2 *pContext2 = nullptr;

        pDevice->QueryInterface(IID_PPV_ARGS(&pDevice2));
        pContext->QueryInterface(IID_PPV_ARGS(&pContext2));
        pDev2 = pDevice2;
        pCtx2 = pContext2;

        pDevice->Release();
        pContext->Release();

        *ppDevice = new D3D11DeviceX<ABI>(pDevice2);
        *ppContext = new D3D11DeviceContextX<ABI>(pContext2);

        return hr;
    };
};


struct IDXGIXPresentArrayHelper
{
    virtual void PresentArray(void **ppSwapChains, UINT NumSwapChains, UINT SyncInterval) = 0;
};

template <abi_t ABI> struct DXGIXPresentArrayHelper : public IDXGIXPresentArrayHelper
{
    void PresentArray(void **ppSwapChains, UINT NumSwapChains, UINT SyncInterval) override
    {
        for (UINT SwapChainIndex = 0; SwapChainIndex < NumSwapChains; SwapChainIndex++)
        {
            DXGISwapChain1<ABI> *SwapChain = static_cast<DXGISwapChain1<ABI> *>(ppSwapChains[SwapChainIndex]);
            SwapChain->Present(SyncInterval, 0);
        }
    }

};

static IDXGIXPresentArrayHelper *g_PresentArrayHelper = nullptr;