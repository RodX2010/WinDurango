#include "ID3D11View.h"

//
// IUnknown
//
template <abi_t ABI> HRESULT D3D11View<ABI>::QueryInterface(REFIID riid, void **ppvObject)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> ULONG D3D11View<ABI>::AddRef()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> ULONG D3D11View<ABI>::Release()
{
    IMPLEMENT_STUB();
    return {};
}

//
// ID3D11DeviceChild
//
template <abi_t ABI> void D3D11View<ABI>::GetDevice(gfx::ID3D11Device<ABI> **ppDevice)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> HRESULT D3D11View<ABI>::GetPrivateData(_GUID const &guid, uint32_t *pDataSize, void *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11View<ABI>::SetPrivateData(_GUID const &guid, uint32_t DataSize, void const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11View<ABI>::SetPrivateDataInterface(_GUID const &guid, IUnknown const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11View<ABI>::SetPrivateDataInterfaceGraphics(_GUID const &guid, xbox::IGraphicsUnknown<ABI> const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11View
//
template <abi_t ABI> void D3D11View<ABI>::GetResource(gfx::ID3D11Resource<ABI> **ppResource)
{
    IMPLEMENT_STUB();
}

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11View<ABI>
D3D11_DECLARE_ABI_TEMPLATES();


//
// IUnknown
//
template <abi_t ABI> HRESULT D3D11ShaderResourceView<ABI>::QueryInterface(REFIID riid, void **ppvObject)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> ULONG D3D11ShaderResourceView<ABI>::AddRef()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> ULONG D3D11ShaderResourceView<ABI>::Release()
{
    IMPLEMENT_STUB();
    return {};
}

//
// ID3D11DeviceChild
//
template <abi_t ABI> void D3D11ShaderResourceView<ABI>::GetDevice(gfx::ID3D11Device<ABI> **ppDevice)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11ShaderResourceView<ABI>::GetPrivateData(_GUID const &guid, uint32_t *pDataSize, void *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11ShaderResourceView<ABI>::SetPrivateData(_GUID const &guid, uint32_t DataSize, void const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11ShaderResourceView<ABI>::SetPrivateDataInterface(_GUID const &guid, IUnknown const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11ShaderResourceView<ABI>::SetPrivateDataInterfaceGraphics(_GUID const &guid,
                                                                      xbox::IGraphicsUnknown<ABI> const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11View
//
template <abi_t ABI> void D3D11ShaderResourceView<ABI>::GetResource(gfx::ID3D11Resource<ABI> **ppResource)
{
    IMPLEMENT_STUB();
}

//
// ID3D11ShaderResourceView
//
template <abi_t ABI> void D3D11ShaderResourceView<ABI>::GetDesc(D3D11_SHADER_RESOURCE_VIEW_DESC *pDesc)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11ShaderResourceView<ABI>::GetFormatX(gfx::D3D11X_SRV_FORMAT* pFormatX)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> int32_t D3D11ShaderResourceView<ABI>::SetFormatX(gfx::D3D11X_SRV_FORMAT const *pFormatX)
{
    IMPLEMENT_STUB();
    return {};
}

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11ShaderResourceView<ABI>
D3D11_DECLARE_ABI_TEMPLATES();


//
// IUnknown
//
template <abi_t ABI> HRESULT D3D11RenderTargetView<ABI>::QueryInterface(REFIID riid, void **ppvObject)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> ULONG D3D11RenderTargetView<ABI>::AddRef()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> ULONG D3D11RenderTargetView<ABI>::Release()
{
    IMPLEMENT_STUB();
    return {};
}

//
// ID3D11DeviceChild
//
template <abi_t ABI> void D3D11RenderTargetView<ABI>::GetDevice(gfx::ID3D11Device<ABI> **ppDevice)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11RenderTargetView<ABI>::GetPrivateData(_GUID const &guid, uint32_t *pDataSize, void *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11RenderTargetView<ABI>::SetPrivateData(_GUID const &guid, uint32_t DataSize, void const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11RenderTargetView<ABI>::SetPrivateDataInterface(_GUID const &guid, IUnknown const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11RenderTargetView<ABI>::SetPrivateDataInterfaceGraphics(_GUID const &guid,
                                                                    xbox::IGraphicsUnknown<ABI> const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11View
//
template <abi_t ABI> void D3D11RenderTargetView<ABI>::GetResource(gfx::ID3D11Resource<ABI> **ppResource)
{
    IMPLEMENT_STUB();
}

//
// ID3D11RenderTargetView
//
template <abi_t ABI> void D3D11RenderTargetView<ABI>::GetDesc(D3D11_RENDER_TARGET_VIEW_DESC *pDesc)
{
    IMPLEMENT_STUB();
}

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11RenderTargetView<ABI>
D3D11_DECLARE_ABI_TEMPLATES();


//
// IUnknown
//
template <abi_t ABI> HRESULT D3D11DepthStencilView<ABI>::QueryInterface(REFIID riid, void **ppvObject)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> ULONG D3D11DepthStencilView<ABI>::AddRef()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> ULONG D3D11DepthStencilView<ABI>::Release()
{
    IMPLEMENT_STUB();
    return {};
}

//
// ID3D11DeviceChild
//
template <abi_t ABI> void D3D11DepthStencilView<ABI>::GetDevice(gfx::ID3D11Device<ABI> **ppDevice)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DepthStencilView<ABI>::GetPrivateData(_GUID const &guid, uint32_t *pDataSize, void *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DepthStencilView<ABI>::SetPrivateData(_GUID const &guid, uint32_t DataSize, void const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DepthStencilView<ABI>::SetPrivateDataInterface(_GUID const &guid, IUnknown const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DepthStencilView<ABI>::SetPrivateDataInterfaceGraphics(_GUID const &guid,
                                                                    xbox::IGraphicsUnknown<ABI> const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11View
//
template <abi_t ABI> void D3D11DepthStencilView<ABI>::GetResource(gfx::ID3D11Resource<ABI> **ppResource)
{
    IMPLEMENT_STUB();
}

//
// ID3D11DepthStencilView
//
template <abi_t ABI> void D3D11DepthStencilView<ABI>::GetDesc(D3D11_DEPTH_STENCIL_VIEW_DESC *pDesc)
{
    IMPLEMENT_STUB();
}

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11DepthStencilView<ABI>
D3D11_DECLARE_ABI_TEMPLATES();


//
// IUnknown
//
template <abi_t ABI> HRESULT D3D11UnorderedAccessView<ABI>::QueryInterface(REFIID riid, void **ppvObject)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> ULONG D3D11UnorderedAccessView<ABI>::AddRef()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> ULONG D3D11UnorderedAccessView<ABI>::Release()
{
    IMPLEMENT_STUB();
    return {};
}

//
// ID3D11DeviceChild
//
template <abi_t ABI> void D3D11UnorderedAccessView<ABI>::GetDevice(gfx::ID3D11Device<ABI> **ppDevice)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11UnorderedAccessView<ABI>::GetPrivateData(_GUID const &guid, uint32_t *pDataSize, void *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11UnorderedAccessView<ABI>::SetPrivateData(_GUID const &guid, uint32_t DataSize, void const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11UnorderedAccessView<ABI>::SetPrivateDataInterface(_GUID const &guid, IUnknown const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11UnorderedAccessView<ABI>::SetPrivateDataInterfaceGraphics(_GUID const &guid,
                                                                       xbox::IGraphicsUnknown<ABI> const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11View
//
template <abi_t ABI> void D3D11UnorderedAccessView<ABI>::GetResource(gfx::ID3D11Resource<ABI> **ppResource)
{
    IMPLEMENT_STUB();
}

//
// ID3D11UnorderedAccessView
//
template <abi_t ABI> void D3D11UnorderedAccessView<ABI>::GetDesc(D3D11_UNORDERED_ACCESS_VIEW_DESC *pDesc)
{
    IMPLEMENT_STUB();
}

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11UnorderedAccessView<ABI>
D3D11_DECLARE_ABI_TEMPLATES();
