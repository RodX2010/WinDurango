#pragma once
#include "d3d11_x.g.h"

template <abi_t ABI> class D3D11VertexShader : public gfx::ID3D11VertexShader<ABI>
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
};

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11VertexShader<ABI>
D3D11_DECLARE_ABI_TEMPLATES(extern);


template <abi_t ABI> class D3D11PixelShader : public gfx::ID3D11PixelShader<ABI>
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
};

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11PixelShader<ABI>
D3D11_DECLARE_ABI_TEMPLATES(extern);


template <abi_t ABI> class D3D11ComputeShader : public gfx::ID3D11ComputeShader<ABI>
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
};

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11ComputeShader<ABI>
D3D11_DECLARE_ABI_TEMPLATES(extern);


template <abi_t ABI> class D3D11GeometryShader : public gfx::ID3D11GeometryShader<ABI>
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
};

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11GeometryShader<ABI>
D3D11_DECLARE_ABI_TEMPLATES(extern);


template <abi_t ABI> class D3D11HullShader : public gfx::ID3D11HullShader<ABI>
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
};

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11HullShader<ABI>
D3D11_DECLARE_ABI_TEMPLATES(extern);


template <abi_t ABI> class D3D11DomainShader : public gfx::ID3D11DomainShader<ABI>
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
};

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11DomainShader<ABI>
D3D11_DECLARE_ABI_TEMPLATES(extern);
