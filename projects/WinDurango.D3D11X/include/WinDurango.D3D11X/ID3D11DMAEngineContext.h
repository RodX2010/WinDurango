#pragma once
#include "d3d11_x.g.h"

template <abi_t ABI> class D3D11DMAEngineContextX : public gfx::ID3D11DMAEngineContextX<ABI>
{
  public:
    //
    // IUnknown
    //
    HRESULT QueryInterface(REFIID riid, void **ppvObject);
    ULONG AddRef();
    ULONG Release();

    //
    // ID3D11DeviceChild
    //
    void GetDevice(gfx::ID3D11Device<ABI> **ppDevice);
    HRESULT GetPrivateData(_GUID const &guid, uint32_t *pDataSize, void *pData);
    HRESULT SetPrivateData(_GUID const &guid, uint32_t DataSize, void const *pData);
    HRESULT SetPrivateDataInterface(_GUID const &guid, IUnknown const *pData);
    HRESULT SetPrivateDataInterfaceGraphics(_GUID const &guid, xbox::IGraphicsUnknown<ABI> const *pData);

    //
    // ID3D11DMAEngineContextX
    //
    D3D11_DEVICE_CONTEXT_TYPE GetType();
    void CopyResource(gfx::ID3D11Resource<ABI> *v1, gfx::ID3D11Resource<ABI> *v2, uint32_t v3);
    void CopySubresourceRegion(gfx::ID3D11Resource<ABI> *v1, uint32_t v2, uint32_t v3, uint32_t v4, uint32_t v5,
                               gfx::ID3D11Resource<ABI> *v6, uint32_t v7, D3D11_BOX const *v8, uint32_t v9);
    HRESULT LZDecompressBuffer(gfx::ID3D11Buffer<ABI> *v1, uint32_t v2, gfx::ID3D11Buffer<ABI> *v3, uint32_t v4,
                               uint32_t v5, uint32_t v6);
    HRESULT LZDecompressTexture(gfx::ID3D11Resource<ABI> *v1, uint32_t v2, uint32_t v3, uint32_t v4, uint32_t v5,
                                gfx::ID3D11Buffer<ABI> *v6, uint32_t v7);
    HRESULT LZCompressBuffer(gfx::ID3D11Buffer<ABI> *v1, uint32_t v2, gfx::ID3D11Buffer<ABI> *v3, uint32_t v4,
                             uint32_t v5, uint32_t v6);
    HRESULT LZCompressTexture(gfx::ID3D11Buffer<ABI> *v1, gfx::ID3D11Resource<ABI> *v2, uint32_t v3,
                              D3D11_BOX const *v4, uint32_t v5);
    HRESULT JPEGDecode(gfx::ID3D11Resource<ABI> *v1, uint32_t v2, uint32_t v3, uint32_t v4, uint32_t v5,
                       gfx::ID3D11Buffer<ABI> *v6, uint32_t v7);
    uint64_t InsertFence(uint32_t v1);
    void InsertWaitOnFence(uint32_t v1, uint64_t v2);
    HRESULT Submit();
    void CopyLastErrorCodeToMemory(void *v1);
    void CopyLastErrorCodeToBuffer(gfx::ID3D11Buffer<ABI> *v1, uint32_t v2);
    void CopyMemoryToMemory(void *v1, void *v2, uint64_t v3);
    void FillMemoryWithValue(void *v1, uint64_t v2, uint32_t v3);
    void FillResourceWithValue(gfx::ID3D11Resource<ABI> *v1, uint32_t v2);
    HRESULT LZDecompressMemory(void *v1, void *v2, uint32_t v3, uint32_t v4);
    HRESULT LZCompressMemory(void *v1, void *v2, uint32_t v3, uint32_t v4);
    void WriteTimestampToMemory(void *v1);
    void WriteTimestampToBuffer(gfx::ID3D11Buffer<ABI> *v1, uint32_t v2);
    void WriteValueBottomOfPipe(void *v1, uint32_t v2);
    void InsertWaitOnMemory(void const *v1, uint32_t v2, D3D11_COMPARISON_FUNC v3, uint32_t v4, uint32_t v5);
};

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11DMAEngineContextX<ABI>
D3D11_DECLARE_ABI_TEMPLATES(extern);
