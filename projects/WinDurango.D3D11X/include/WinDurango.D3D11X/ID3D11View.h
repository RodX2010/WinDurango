#pragma once
#include "d3d11_x.g.h"

template <abi_t ABI> class D3D11View : public gfx::ID3D11View<ABI>
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
    // ID3D11View
    //
    void GetResource(gfx::ID3D11Resource<ABI> **ppResource);
};

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11View<ABI>
D3D11_DECLARE_ABI_TEMPLATES(extern);


template <abi_t ABI> class D3D11ShaderResourceView : public gfx::ID3D11ShaderResourceView<ABI>
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
    // ID3D11View
    //
    void GetResource(gfx::ID3D11Resource<ABI> **ppResource);

    //
    // ID3D11ShaderResourceView
    //
    void GetDesc(D3D11_SHADER_RESOURCE_VIEW_DESC *pDesc);
    void GetFormatX(gfx::D3D11X_SRV_FORMAT*);
    int32_t SetFormatX(gfx::D3D11X_SRV_FORMAT const *);
};

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11ShaderResourceView<ABI>
D3D11_DECLARE_ABI_TEMPLATES(extern);


template <abi_t ABI> class D3D11RenderTargetView : public gfx::ID3D11RenderTargetView<ABI>
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
    // ID3D11View
    //
    void GetResource(gfx::ID3D11Resource<ABI> **ppResource);

    //
    // ID3D11RenderTargetView
    //
    void GetDesc(D3D11_RENDER_TARGET_VIEW_DESC *pDesc);
};

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11RenderTargetView<ABI>
D3D11_DECLARE_ABI_TEMPLATES(extern);


template <abi_t ABI> class D3D11DepthStencilView : public gfx::ID3D11DepthStencilView<ABI>
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
    // ID3D11View
    //
    void GetResource(gfx::ID3D11Resource<ABI> **ppResource);

    //
    // ID3D11DepthStencilView
    //
    void GetDesc(D3D11_DEPTH_STENCIL_VIEW_DESC *pDesc);
};

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11DepthStencilView<ABI>
D3D11_DECLARE_ABI_TEMPLATES(extern);


template <abi_t ABI> class D3D11UnorderedAccessView : public gfx::ID3D11UnorderedAccessView<ABI>
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
    // ID3D11View
    //
    void GetResource(gfx::ID3D11Resource<ABI> **ppResource);

    //
    // ID3D11UnorderedAccessView
    //
    void GetDesc(D3D11_UNORDERED_ACCESS_VIEW_DESC *pDesc);
};

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11UnorderedAccessView<ABI>
D3D11_DECLARE_ABI_TEMPLATES(extern);