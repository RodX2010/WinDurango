#include "ID3D11State.h"

//
// IUnknown
//
template <abi_t ABI> HRESULT D3D11SamplerState<ABI>::QueryInterface(REFIID riid, void **ppvObject)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> ULONG D3D11SamplerState<ABI>::AddRef()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> ULONG D3D11SamplerState<ABI>::Release()
{
    IMPLEMENT_STUB();
    return {};
}

//
// ID3D11DeviceChild
//
template <abi_t ABI> void D3D11SamplerState<ABI>::GetDevice(gfx::ID3D11Device<ABI> **ppDevice)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> HRESULT D3D11SamplerState<ABI>::GetPrivateData(_GUID const &guid, uint32_t *pDataSize, void *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11SamplerState<ABI>::SetPrivateData(_GUID const &guid, uint32_t DataSize, void const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11SamplerState<ABI>::SetPrivateDataInterface(_GUID const &guid, IUnknown const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11SamplerState<ABI>::SetPrivateDataInterfaceGraphics(_GUID const &guid,
                                                                xbox::IGraphicsUnknown<ABI> const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11SamplerState
//
template <abi_t ABI> void D3D11SamplerState<ABI>::GetDesc(D3D11_SAMPLER_DESC *pDesc)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11SamplerState<ABI>::GetDescX(gfx::D3D11X_SAMPLER_DESC *pDesc)
{
    IMPLEMENT_STUB();
}

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11SamplerState<ABI>
D3D11_DECLARE_ABI_TEMPLATES();


//
// IUnknown
//
template <abi_t ABI> HRESULT D3D11RasterizerState<ABI>::QueryInterface(REFIID riid, void **ppvObject)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> ULONG D3D11RasterizerState<ABI>::AddRef()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> ULONG D3D11RasterizerState<ABI>::Release()
{
    IMPLEMENT_STUB();
    return {};
}

//
// ID3D11DeviceChild
//
template <abi_t ABI> void D3D11RasterizerState<ABI>::GetDevice(gfx::ID3D11Device<ABI> **ppDevice)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11RasterizerState<ABI>::GetPrivateData(_GUID const &guid, uint32_t *pDataSize, void *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11RasterizerState<ABI>::SetPrivateData(_GUID const &guid, uint32_t DataSize, void const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11RasterizerState<ABI>::SetPrivateDataInterface(_GUID const &guid, IUnknown const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11RasterizerState<ABI>::SetPrivateDataInterfaceGraphics(_GUID const &guid,
                                                                   xbox::IGraphicsUnknown<ABI> const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11RasterizerState
//
template <abi_t ABI> void D3D11RasterizerState<ABI>::GetDesc(D3D11_RASTERIZER_DESC *pDesc)
{
    IMPLEMENT_STUB();
}

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11RasterizerState<ABI>
D3D11_DECLARE_ABI_TEMPLATES();


//
// IUnknown
//
template <abi_t ABI> HRESULT D3D11BlendState<ABI>::QueryInterface(REFIID riid, void **ppvObject)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> ULONG D3D11BlendState<ABI>::AddRef()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> ULONG D3D11BlendState<ABI>::Release()
{
    IMPLEMENT_STUB();
    return {};
}

//
// ID3D11DeviceChild
//
template <abi_t ABI> void D3D11BlendState<ABI>::GetDevice(gfx::ID3D11Device<ABI> **ppDevice)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> HRESULT D3D11BlendState<ABI>::GetPrivateData(_GUID const &guid, uint32_t *pDataSize, void *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11BlendState<ABI>::SetPrivateData(_GUID const &guid, uint32_t DataSize, void const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11BlendState<ABI>::SetPrivateDataInterface(_GUID const &guid, IUnknown const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11BlendState<ABI>::SetPrivateDataInterfaceGraphics(_GUID const &guid,
                                                              xbox::IGraphicsUnknown<ABI> const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11BlendState
//
template <abi_t ABI> void D3D11BlendState<ABI>::GetDesc(D3D11_BLEND_DESC *pDesc)
{
    IMPLEMENT_STUB();
}

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11BlendState<ABI>
D3D11_DECLARE_ABI_TEMPLATES();


//
// IUnknown
//
template <abi_t ABI> HRESULT D3D11DepthStencilState<ABI>::QueryInterface(REFIID riid, void **ppvObject)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> ULONG D3D11DepthStencilState<ABI>::AddRef()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> ULONG D3D11DepthStencilState<ABI>::Release()
{
    IMPLEMENT_STUB();
    return {};
}

//
// ID3D11DeviceChild
//
template <abi_t ABI> void D3D11DepthStencilState<ABI>::GetDevice(gfx::ID3D11Device<ABI> **ppDevice)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DepthStencilState<ABI>::GetPrivateData(_GUID const &guid, uint32_t *pDataSize, void *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DepthStencilState<ABI>::SetPrivateData(_GUID const &guid, uint32_t DataSize, void const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DepthStencilState<ABI>::SetPrivateDataInterface(_GUID const &guid, IUnknown const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DepthStencilState<ABI>::SetPrivateDataInterfaceGraphics(_GUID const &guid,
                                                                     xbox::IGraphicsUnknown<ABI> const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11DepthStencilState
//
template <abi_t ABI> void D3D11DepthStencilState<ABI>::GetDesc(D3D11_DEPTH_STENCIL_DESC *pDesc)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DepthStencilState<ABI>::GetDescX(D3D11_DEPTH_STENCIL_DESC *pDesc)
{
    IMPLEMENT_STUB();
}

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11DepthStencilState<ABI>
D3D11_DECLARE_ABI_TEMPLATES();
