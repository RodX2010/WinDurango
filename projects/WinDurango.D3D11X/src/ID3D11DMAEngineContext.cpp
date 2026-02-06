#include "ID3D11DMAEngineContext.h"

//
// IUnknown
//
template <abi_t ABI> HRESULT D3D11DMAEngineContextX<ABI>::QueryInterface(REFIID riid, void **ppvObject)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> ULONG D3D11DMAEngineContextX<ABI>::AddRef()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> ULONG D3D11DMAEngineContextX<ABI>::Release()
{
    IMPLEMENT_STUB();
    return {};
}

//
// ID3D11DeviceChild
//
template <abi_t ABI> void D3D11DMAEngineContextX<ABI>::GetDevice(gfx::ID3D11Device<ABI> **ppDevice)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DMAEngineContextX<ABI>::GetPrivateData(_GUID const &guid, uint32_t *pDataSize, void *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DMAEngineContextX<ABI>::SetPrivateData(_GUID const &guid, uint32_t DataSize, void const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DMAEngineContextX<ABI>::SetPrivateDataInterface(_GUID const &guid, IUnknown const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DMAEngineContextX<ABI>::SetPrivateDataInterfaceGraphics(_GUID const &guid,
                                                                     xbox::IGraphicsUnknown<ABI> const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11DMAEngineContextX
//
template <abi_t ABI> D3D11_DEVICE_CONTEXT_TYPE D3D11DMAEngineContextX<ABI>::GetType()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI>
void D3D11DMAEngineContextX<ABI>::CopyResource(gfx::ID3D11Resource<ABI> *v1, gfx::ID3D11Resource<ABI> *v2, uint32_t v3)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DMAEngineContextX<ABI>::CopySubresourceRegion(gfx::ID3D11Resource<ABI> *v1, uint32_t v2, uint32_t v3,
                                                        uint32_t v4, uint32_t v5, gfx::ID3D11Resource<ABI> *v6,
                                                        uint32_t v7, D3D11_BOX const *v8, uint32_t v9)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DMAEngineContextX<ABI>::LZDecompressBuffer(gfx::ID3D11Buffer<ABI> *v1, uint32_t v2,
                                                        gfx::ID3D11Buffer<ABI> *v3, uint32_t v4, uint32_t v5,
                                                        uint32_t v6)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DMAEngineContextX<ABI>::LZDecompressTexture(gfx::ID3D11Resource<ABI> *v1, uint32_t v2, uint32_t v3,
                                                         uint32_t v4, uint32_t v5, gfx::ID3D11Buffer<ABI> *v6,
                                                         uint32_t v7)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DMAEngineContextX<ABI>::LZCompressBuffer(gfx::ID3D11Buffer<ABI> *v1, uint32_t v2,
                                                      gfx::ID3D11Buffer<ABI> *v3, uint32_t v4, uint32_t v5, uint32_t v6)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DMAEngineContextX<ABI>::LZCompressTexture(gfx::ID3D11Buffer<ABI> *v1, gfx::ID3D11Resource<ABI> *v2,
                                                       uint32_t v3, D3D11_BOX const *v4, uint32_t v5)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DMAEngineContextX<ABI>::JPEGDecode(gfx::ID3D11Resource<ABI> *v1, uint32_t v2, uint32_t v3, uint32_t v4,
                                                uint32_t v5, gfx::ID3D11Buffer<ABI> *v6, uint32_t v7)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> uint64_t D3D11DMAEngineContextX<ABI>::InsertFence(uint32_t v1)
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> void D3D11DMAEngineContextX<ABI>::InsertWaitOnFence(uint32_t v1, uint64_t v2)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> HRESULT D3D11DMAEngineContextX<ABI>::Submit()
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> void D3D11DMAEngineContextX<ABI>::CopyLastErrorCodeToMemory(void *v1)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DMAEngineContextX<ABI>::CopyLastErrorCodeToBuffer(gfx::ID3D11Buffer<ABI> *v1, uint32_t v2)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DMAEngineContextX<ABI>::CopyMemoryToMemory(void *v1, void *v2, uint64_t v3)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DMAEngineContextX<ABI>::FillMemoryWithValue(void *v1, uint64_t v2, uint32_t v3)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DMAEngineContextX<ABI>::FillResourceWithValue(gfx::ID3D11Resource<ABI> *v1, uint32_t v2)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DMAEngineContextX<ABI>::LZDecompressMemory(void *v1, void *v2, uint32_t v3, uint32_t v4)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11DMAEngineContextX<ABI>::LZCompressMemory(void *v1, void *v2, uint32_t v3, uint32_t v4)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> void D3D11DMAEngineContextX<ABI>::WriteTimestampToMemory(void *v1)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DMAEngineContextX<ABI>::WriteTimestampToBuffer(gfx::ID3D11Buffer<ABI> *v1, uint32_t v2)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DMAEngineContextX<ABI>::WriteValueBottomOfPipe(void *v1, uint32_t v2)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DMAEngineContextX<ABI>::InsertWaitOnMemory(void const *v1, uint32_t v2, D3D11_COMPARISON_FUNC v3, uint32_t v4,
                                                     uint32_t v5)
{
    IMPLEMENT_STUB();
}

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11DMAEngineContextX<ABI>
D3D11_DECLARE_ABI_TEMPLATES();