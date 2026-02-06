#include "ID3D11Device.h"

//
// IUnknown
//
template <abi_t ABI> HRESULT D3D11DeviceX<ABI>::QueryInterface(REFIID riid, void **ppvObject)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> ULONG D3D11DeviceX<ABI>::AddRef()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> ULONG D3D11DeviceX<ABI>::Release()
{
    IMPLEMENT_STUB();
    return {};
}

//
// ID3D11Device
//
template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateBuffer(D3D11_BUFFER_DESC const *pDesc, D3D11_SUBRESOURCE_DATA const *pData,
                                        gfx::ID3D11Buffer<ABI> **ppBuffer)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateTexture1D(D3D11_TEXTURE1D_DESC const *pDesc, D3D11_SUBRESOURCE_DATA const *pData,
                                           gfx::ID3D11Texture1D<ABI> **ppTexture1D)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateTexture2D(D3D11_TEXTURE2D_DESC const *pDesc, D3D11_SUBRESOURCE_DATA const *pData,
                                           gfx::ID3D11Texture2D<ABI> **ppTexture2D)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateTexture3D(D3D11_TEXTURE3D_DESC const *pDesc, D3D11_SUBRESOURCE_DATA const *pData,
                                           gfx::ID3D11Texture3D<ABI> **ppTexture3D)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateShaderResourceView(gfx::ID3D11Resource<ABI> *pResource,
                                                    D3D11_SHADER_RESOURCE_VIEW_DESC const *pDesc,
                                                    gfx::ID3D11ShaderResourceView<ABI> **ppSRV)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateUnorderedAccessView(gfx::ID3D11Resource<ABI> *pResource,
                                                     D3D11_UNORDERED_ACCESS_VIEW_DESC const *pDesc,
                                                     gfx::ID3D11UnorderedAccessView<ABI> **ppUAV)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateRenderTargetView(gfx::ID3D11Resource<ABI> *pResource,
                                                  D3D11_RENDER_TARGET_VIEW_DESC const *pDesc,
                                                  gfx::ID3D11RenderTargetView<ABI> **ppRTV)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateDepthStencilView(gfx::ID3D11Resource<ABI> *pResource,
                                                  D3D11_DEPTH_STENCIL_VIEW_DESC const *pDesc,
                                                  gfx::ID3D11DepthStencilView<ABI> **ppDSV)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateInputLayout(D3D11_INPUT_ELEMENT_DESC const *pDesc, uint32_t NumElements,
                                             void const *pShaderBytecodeWithInputSignature, uint64_t BytecodeLength,
                                             ID3D11InputLayout **ppInputLayout)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateVertexShader(void const *pBytecode, uint64_t BytecodeLength,
                                              ID3D11ClassLinkage *pClassLinkage, gfx::ID3D11VertexShader<ABI> **ppVS)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateGeometryShader(void const *pBytecode, uint64_t BytecodeLentgh,
                                                ID3D11ClassLinkage *pClassLinkage,
                                                gfx::ID3D11GeometryShader<ABI> **ppGS)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateGeometryShaderWithStreamOutput(void const *pBytecode, uint64_t BytecodeLentgh,
                                                                D3D11_SO_DECLARATION_ENTRY const *pSODeclaration,
                                                                uint32_t NumEntries, uint32_t const *pStrides,
                                                                uint32_t NumStides, uint32_t RasterizedStream,
                                                                ID3D11ClassLinkage *pClassLinkage,
                                                                gfx::ID3D11GeometryShader<ABI> **ppGS)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreatePixelShader(void const *pBytecode, uint64_t BytecodeLentgh,
                                             ID3D11ClassLinkage *pClassLinkage, gfx::ID3D11PixelShader<ABI> **ppPS)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateHullShader(void const *pBytecode, uint64_t BytecodeLentgh,
                                            ID3D11ClassLinkage *pClassLinkage, gfx::ID3D11HullShader<ABI> **ppHS)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateDomainShader(void const *pBytecode, uint64_t BytecodeLentgh,
                                              ID3D11ClassLinkage *pClassLinkage, gfx::ID3D11DomainShader<ABI> **ppDS)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateComputeShader(void const *pBytecode, uint64_t BytecodeLentgh,
                                               ID3D11ClassLinkage *pClassLinkage, gfx::ID3D11ComputeShader<ABI> **ppCS)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11DeviceX<ABI>::CreateClassLinkage(ID3D11ClassLinkage **ppClassLinkage)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateBlendState(D3D11_BLEND_DESC const *pDesc, gfx::ID3D11BlendState<ABI> **ppBlendState)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateDepthStencilState(D3D11_DEPTH_STENCIL_DESC const *pDesc,
                                                   gfx::ID3D11DepthStencilState<ABI> **ppDepthStencilState)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateRasterizerState(D3D11_RASTERIZER_DESC const *pDesc,
                                                 gfx::ID3D11RasterizerState<ABI> **ppRasterizerState)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateSamplerState(D3D11_SAMPLER_DESC const *pDesc,
                                              gfx::ID3D11SamplerState<ABI> **ppSamplerState)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11DeviceX<ABI>::CreateQuery(D3D11_QUERY_DESC const *pDesc, ID3D11Query **ppQuery)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreatePredicate(D3D11_QUERY_DESC const *pDesc, ID3D11Predicate **ppPrediticate)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateCounter(D3D11_COUNTER_DESC const *pDesc, ID3D11Counter **ppCounter)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateDeferredContext(uint32_t Flags, gfx::ID3D11DeviceContext<ABI> **ppDeferredContext)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::OpenSharedResource(void *pResource, _GUID const &retInterface, void **ppResource)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11DeviceX<ABI>::CheckFormatSupport(DXGI_FORMAT Format, uint32_t *pFormatSupport)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CheckMultisampleQualityLevels(DXGI_FORMAT Format, uint32_t SampleCount,
                                                         uint32_t *pNumQualityLevels)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> void D3D11DeviceX<ABI>::CheckCounterInfo(D3D11_COUNTER_INFO *pCounterInfo)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CheckCounter(D3D11_COUNTER_DESC const *pDesc, D3D11_COUNTER_TYPE *pCounterType,
                                        uint32_t *pActiveCounters, char *szName, uint32_t *pNameLength, char *szUnits,
                                        uint32_t *pUnitsLength, char *szDescription, uint32_t *pDescriptionLength)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CheckFeatureSupport(D3D11_FEATURE Feature, void *pFeatureSupportData,
                                               uint32_t FeatureSupportDataSize)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11DeviceX<ABI>::GetPrivateData(_GUID const &guid, uint32_t *pDataSize, void *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11DeviceX<ABI>::SetPrivateData(_GUID const &guid, uint32_t DataSize, void const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11DeviceX<ABI>::SetPrivateDataInterface(_GUID const &guid, IUnknown const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::SetPrivateDataInterfaceGraphics(_GUID const &guid, xbox::IGraphicsUnknown<ABI> const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> D3D_FEATURE_LEVEL D3D11DeviceX<ABI>::GetFeatureLevel()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> uint32_t D3D11DeviceX<ABI>::GetCreationFlags()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> HRESULT D3D11DeviceX<ABI>::GetDeviceRemovedReason()
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> void D3D11DeviceX<ABI>::GetImmediateContext(gfx::ID3D11DeviceContext<ABI> **ppImmediateContext)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> HRESULT D3D11DeviceX<ABI>::SetExceptionMode(uint32_t ExceptionMode)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> uint32_t D3D11DeviceX<ABI>::GetExceptionMode()
{
    IMPLEMENT_STUB();
    return {};
}

//
// ID3D11Device1
//
template <abi_t ABI> void D3D11DeviceX<ABI>::GetImmediateContext1(gfx::ID3D11DeviceContext1<ABI> **ppImmediateContext)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateDeferredContext1(uint32_t Flags, gfx::ID3D11DeviceContext1<ABI> **ppDeferredContext1)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateBlendState1(D3D11_BLEND_DESC1 const *pDesc, ID3D11BlendState1 **ppBlendState)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateRasterizerState1(D3D11_RASTERIZER_DESC1 const *pDesc,
                                                  ID3D11RasterizerState1 **ppRasterizerState)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateDeviceContextState(uint32_t Flags, D3D_FEATURE_LEVEL const *pFeatureLevels,
                                                    uint32_t FeatureLevels, uint32_t SDKVersion,
                                                    _GUID const &EmulatedInterface,
                                                    D3D_FEATURE_LEVEL *pChosenFeatureLevel,
                                                    ID3DDeviceContextState **ppContextState)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::OpenSharedResource1(void *pResource, _GUID const &retInterface, void **ppResource)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::OpenSharedResourceByName(wchar_t const *pName, uint32_t dwDesiredAccess,
                                                    _GUID const &retInterface, void **ppResource)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11Device2
//
template <abi_t ABI> void D3D11DeviceX<ABI>::GetImmediateContext2(gfx::ID3D11DeviceContext2<ABI> **ppImmediateContext)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateDeferredContext2(uint32_t Flags, gfx::ID3D11DeviceContext2<ABI> **ppDeferredContext)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
void D3D11DeviceX<ABI>::GetResourceTiling(gfx::ID3D11Resource<ABI> *pTiledResource,
                                          uint32_t *pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC *pPackedMipDesc,
                                          D3D11_TILE_SHAPE *pStandardTileShapeForNonPackedMips,
                                          uint32_t *pNumSubresourceTilings, uint32_t FirstSubresourceTilingToGet,
                                          D3D11_SUBRESOURCE_TILING *pSubresourceTilingsForNonPackedMips)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CheckMultisampleQualityLevels1(DXGI_FORMAT Format, uint32_t SampleCount, uint32_t Flags,
                                                          uint32_t *pNumQualityLevels)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11DeviceX
//
template <abi_t ABI> void D3D11DeviceX<ABI>::GetImmediateContextX(gfx::ID3D11DeviceContextX<ABI> **ppImmediateContextX)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateCounterSet(gfx::D3D11X_COUNTER_SET_DESC const *pCounterSetDesc,
                                            gfx::ID3D11CounterSetX **ppCounterSet)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11DeviceX<ABI>::CreateCounterSample(gfx::ID3D11CounterSampleX **ppCounterSample)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11DeviceX<ABI>::SetDriverHint(UINT Feature, UINT Value)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateDmaEngineContext(gfx::D3D11_DMA_ENGINE_CONTEXT_DESC const *pDmaEngineContextDesc,
                                                  gfx::ID3D11DMAEngineContextX<ABI> **ppDmaDeviceContext)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> BOOL D3D11DeviceX<ABI>::IsFencePending(UINT64 Fence)
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> BOOL D3D11DeviceX<ABI>::IsResourcePending(gfx::ID3D11Resource<ABI> *pResource)
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreatePlacementBuffer(D3D11_BUFFER_DESC const *pDesc, void *pVirtualAddress,
                                                 gfx::ID3D11Buffer<ABI> **ppBuffer)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreatePlacementTexture1D(D3D11_TEXTURE1D_DESC const *pDesc, UINT TileModeIndex, UINT Pitch,
                                                    void *pVirtualAddress, gfx::ID3D11Texture1D<ABI> **ppTexture1D)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreatePlacementTexture2D(D3D11_TEXTURE2D_DESC const *pDesc, UINT TileModeIndex, UINT Pitch,
                                                    void *pVirtualAddress, gfx::ID3D11Texture2D<ABI> **ppTexture2D)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreatePlacementTexture3D(D3D11_TEXTURE3D_DESC const *pDesc, UINT TileModeIndex, UINT Pitch,
                                                    void *pVirtualAddress, gfx::ID3D11Texture3D<ABI> **ppTexture3D)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> void D3D11DeviceX<ABI>::GetTimestamps(UINT64 *pGpuTimestamp, UINT64 *pCpuRdtscTimestamp)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateComputeContextX(gfx::D3D11_COMPUTE_CONTEXT_DESC const *pComputeContextDesc,
                                                 gfx::ID3D11ComputeContextX **ppComputeContext)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateSamplerStateX(gfx::D3D11X_SAMPLER_DESC const *pSamplerDesc,
                                               gfx::ID3D11SamplerState<ABI> **ppSamplerState)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateDeferredContextX(UINT Flags, gfx::ID3D11DeviceContextX<ABI> **ppDeferredContext)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> void D3D11DeviceX<ABI>::GarbageCollect(UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreateDepthStencilStateX(D3D11_DEPTH_STENCIL_DESC const *pDepthStencilStateDesc,
                                                    gfx::ID3D11DepthStencilState<ABI> **ppDepthStencilState)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceX<ABI>::CreatePlacementRenderableTexture2D(D3D11_TEXTURE2D_DESC const *pDesc, UINT TileModeIndex,
                                                              UINT Pitch,
                                                              gfx::D3D11X_RENDERABLE_TEXTURE_ADDRESSES const *pAddresses,
                                                              gfx::ID3D11Texture2D<ABI> **ppTexture2D)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
void D3D11DeviceX<ABI>::GetDriverStatistics(UINT StructSize, gfx::D3D11X_DRIVER_STATISTICS *pStatistics)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> HRESULT D3D11DeviceX<ABI>::GetDescriptorSize(gfx::D3D11X_DESCRIPTOR_TYPE DescriptorType)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
void D3D11DeviceX<ABI>::ComposeShaderResourceView(gfx::D3D11X_DESCRIPTOR_RESOURCE const *pDescriptorResource,
                                                  gfx::D3D11X_RESOURCE_VIEW_DESC const *pViewDesc,
                                                  gfx::D3D11X_DESCRIPTOR_SHADER_RESOURCE_VIEW *pDescriptorSrv)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceX<ABI>::ComposeUnorderedAccessView(gfx::D3D11X_DESCRIPTOR_RESOURCE const *pDescriptorResource,
                                                   gfx::D3D11X_RESOURCE_VIEW_DESC const *pViewDesc,
                                                   gfx::D3D11X_DESCRIPTOR_UNORDERED_ACCESS_VIEW *pDescriptorUav)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceX<ABI>::ComposeConstantBufferView(gfx::D3D11X_DESCRIPTOR_RESOURCE const *pDescriptorResource,
                                                  gfx::D3D11X_RESOURCE_VIEW_DESC const *pViewDesc,
                                                  gfx::D3D11X_DESCRIPTOR_CONSTANT_BUFFER_VIEW *pDescriptorCb)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceX<ABI>::ComposeVertexBufferView(gfx::D3D11X_DESCRIPTOR_RESOURCE const *pDescriptorResource,
                                                gfx::D3D11X_RESOURCE_VIEW_DESC const *pViewDesc,
                                                gfx::D3D11X_DESCRIPTOR_VERTEX_BUFFER_VIEW *pDescriptorVb)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceX<ABI>::ComposeSamplerState(gfx::D3D11X_SAMPLER_STATE_DESC const *pSamplerDesc,
                                            gfx::D3D11X_DESCRIPTOR_SAMPLER_STATE *pDescriptorSamplerState)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceX<ABI>::PlaceSwapChainView(gfx::ID3D11Resource<ABI> *pSwapChainBuffer, gfx::ID3D11View<ABI> *pView)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceX<ABI>::SetDebugFlags(UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> uint32_t D3D11DeviceX<ABI>::GetDebugFlags()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI>
void D3D11DeviceX<ABI>::SetHangCallbacks(gfx::D3D11XHANGBEGINCALLBACK pBeginCallback,
                                         gfx::D3D11XHANGPRINTCALLBACK pPrintCallback,
                                         gfx::D3D11XHANGDUMPCALLBACK pDumpCallback)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceX<ABI>::ReportGpuHang(UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> HRESULT D3D11DeviceX<ABI>::SetGpuMemoryPriority(UINT Priority)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
void D3D11DeviceX<ABI>::GetGpuHardwareConfiguration(gfx::D3D11X_GPU_HARDWARE_CONFIGURATION *pGpuHardwareConfiguration)
{
    IMPLEMENT_STUB();
}

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11DeviceX<ABI>
D3D11_DECLARE_ABI_TEMPLATES();