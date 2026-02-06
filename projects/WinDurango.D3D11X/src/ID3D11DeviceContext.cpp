#include "ID3D11DeviceContext.h"

//
// IUnknown
//
template <abi_t ABI> HRESULT D3D11DeviceContextX<ABI>::QueryInterface(REFIID riid, void **ppvObject)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> ULONG D3D11DeviceContextX<ABI>::AddRef()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> ULONG D3D11DeviceContextX<ABI>::Release()
{
    IMPLEMENT_STUB();
    return {};
}

//
// ID3D11DeviceChild
//
template <abi_t ABI> void D3D11DeviceContextX<ABI>::GetDevice(gfx::ID3D11Device<ABI> **ppDevice)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceContextX<ABI>::GetPrivateData(_GUID const &guid, uint32_t *pDataSize, void *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceContextX<ABI>::SetPrivateData(_GUID const &guid, uint32_t DataSize, void const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11DeviceContextX<ABI>::SetPrivateDataInterface(_GUID const &guid, IUnknown const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceContextX<ABI>::SetPrivateDataInterfaceGraphics(_GUID const &guid,
                                                                  xbox::IGraphicsUnknown<ABI> const *pData)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11DeviceContext
//
template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSSetConstantBuffers(UINT StartSlot, UINT NumBuffers,
                                                    gfx::ID3D11Buffer<ABI> *const *ppConstantBuffers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSSetShaderResources(UINT StartSlot, UINT NumViews,
                                                    gfx::ID3D11ShaderResourceView<ABI> *const *ppShaderResourceViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::PSSetShader(gfx::ID3D11PixelShader<ABI> *pPixelShader)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSSetSamplers(UINT StartSlot, UINT NumSamplers,
                                             gfx::ID3D11SamplerState<ABI> *const *ppSamplers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::VSSetShader(gfx::ID3D11VertexShader<ABI> *pVertexShader)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DrawIndexed(UINT64 StartIndexLocationAndIndexCount, INT BaseVertexLocation)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::Draw(UINT VertexCount, UINT StartVertexLocation)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceContextX<ABI>::Map(gfx::ID3D11Resource<ABI> *pResource, UINT Subresource, D3D11_MAP MapType,
                                      UINT MapFlags, D3D11_MAPPED_SUBRESOURCE *pMappedResource)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::Unmap(gfx::ID3D11Resource<ABI> *pResource, UINT Subresource)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSSetConstantBuffers(UINT StartSlot, UINT NumBuffers,
                                                    gfx::ID3D11Buffer<ABI> *const *ppConstantBuffers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::IASetInputLayout(ID3D11InputLayout *pInputLayout)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::IASetVertexBuffers(UINT StartSlot, UINT NumBuffers,
                                                  gfx::ID3D11Buffer<ABI> *const *ppVertexBuffers, UINT const *pStrides,
                                                  UINT const *pOffsets)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::IASetIndexBuffer(UINT HardwareIndexFormat, gfx::ID3D11Buffer<ABI> *pIndexBuffer,
                                                UINT Offset)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DrawIndexedInstanced(UINT StartIndexLocationAndIndexCountPerInstance,
                                                    UINT64 BaseVertexLocationAndStartInstanceLocation,
                                                    UINT64 InstanceCount)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DrawInstanced(UINT VertexCountPerInstance,
                                             UINT64 StartVertexLocationAndStartInstanceLocation, UINT InstanceCount)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSSetConstantBuffers(UINT StartSlot, UINT NumBuffers,
                                                    gfx::ID3D11Buffer<ABI> *const *ppConstantBuffers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::GSSetShader(gfx::ID3D11GeometryShader<ABI> *pShader)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::IASetPrimitiveTopology(D3D_PRIMITIVE_TOPOLOGY PrimitiveTopology)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSSetShaderResources(UINT StartSlot, UINT NumViews,
                                                    gfx::ID3D11ShaderResourceView<ABI> *const *ppShaderResourceViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSSetSamplers(UINT StartSlot, UINT NumSamplers,
                                             gfx::ID3D11SamplerState<ABI> *const *ppSamplers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::Begin(ID3D11Asynchronous *pAsync)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::End(ID3D11Asynchronous *pAsync)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceContextX<ABI>::GetData(ID3D11Asynchronous *pAsync, void *pData, UINT DataSize, UINT GetDataFlags)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::SetPredication(ID3D11Predicate *pPredicate, BOOL PredicateValue)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSSetShaderResources(UINT StartSlot, UINT NumViews,
                                                    gfx::ID3D11ShaderResourceView<ABI> *const *ppShaderResourceViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSSetSamplers(UINT StartSlot, UINT NumSamplers,
                                             gfx::ID3D11SamplerState<ABI> *const *ppSamplers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::OMSetRenderTargets(UINT NumViews, gfx::ID3D11RenderTargetView<ABI> *const *,
                                                  gfx::ID3D11DepthStencilView<ABI> *pDepthStencilView)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::OMSetRenderTargetsAndUnorderedAccessViews(
    UINT NumRTVs, gfx::ID3D11RenderTargetView<ABI> *const *ppRenderTargetViews,
    gfx::ID3D11DepthStencilView<ABI> *pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs,
    gfx::ID3D11UnorderedAccessView<ABI> *const *ppUnorderedAccessViews, UINT const *pUAVInitialCounts)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::OMSetBlendState(gfx::ID3D11BlendState<ABI> *pBlendState, FLOAT const BlendFactor[4],
                                               UINT SampleMask)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::OMSetDepthStencilState(gfx::ID3D11DepthStencilState<ABI> *pDepthStencilState,
                                                      UINT StencilRef)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::SOSetTargets(UINT NumBuffers, gfx::ID3D11Buffer<ABI> *const *ppSOTargets,
                                            UINT const *pOffsets)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::DrawAuto()
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DrawIndexedInstancedIndirect(gfx::ID3D11Buffer<ABI> *pBufferForArgs,
                                                            UINT AlignedByteOffsetForArgs)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DrawInstancedIndirect(gfx::ID3D11Buffer<ABI> *pBufferForArgs,
                                                     UINT AlignedByteOffsetForArgs)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::Dispatch(UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DispatchIndirect(gfx::ID3D11Buffer<ABI> *pBufferForArgs, UINT AlignedByteOffsetForArgs)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::RSSetState(gfx::ID3D11RasterizerState<ABI> *pRasterizerState)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::RSSetViewports(UINT NumViewports, D3D11_VIEWPORT const *pViewports)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::RSSetScissorRects(UINT NumRects, D3D11_RECT const *pRects)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CopySubresourceRegion(gfx::ID3D11Resource<ABI> *pDstResource, UINT DstSubresource,
                                                     UINT DstX, UINT DstY, UINT DstZ,
                                                     gfx::ID3D11Resource<ABI> *pSrcResource, UINT SrcSubresource,
                                                     D3D11_BOX const *pSrcBox)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CopyResource(gfx::ID3D11Resource<ABI> *pDstResource,
                                            gfx::ID3D11Resource<ABI> *pSrcResource)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::UpdateSubresource(gfx::ID3D11Resource<ABI> *pDstResource, UINT DstSubresource,
                                                 D3D11_BOX const *pDstBox, void const *pSrcData, UINT SrcRowPitch,
                                                 UINT SrcDepthPitch)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CopyStructureCount(gfx::ID3D11Buffer<ABI> *pDstBuffer, UINT DstAlignedByteOffset,
                                                  gfx::ID3D11UnorderedAccessView<ABI> *pSrcView)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::ClearRenderTargetView(gfx::ID3D11RenderTargetView<ABI> *pRenderTargetView,
                                                     FLOAT const ColorRGBA[4])
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::ClearUnorderedAccessViewUint(gfx::ID3D11UnorderedAccessView<ABI> *pUnorderedAccessView,
                                                            UINT const Values[4])
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::ClearUnorderedAccessViewFloat(gfx::ID3D11UnorderedAccessView<ABI> *pUnorderedAccessView,
                                                             FLOAT const Values[4])
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::ClearDepthStencilView(gfx::ID3D11DepthStencilView<ABI> *pDepthStencilView,
                                                     UINT ClearFlags, FLOAT Depth, UINT8 Stencil)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GenerateMips(gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::SetResourceMinLOD(gfx::ID3D11Resource<ABI> *pResource, FLOAT MinLOD)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> FLOAT D3D11DeviceContextX<ABI>::GetResourceMinLOD(gfx::ID3D11Resource<ABI> *pResource)
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::ResolveSubresource(gfx::ID3D11Resource<ABI> *pDstResource, UINT DstSubresource,
                                                  gfx::ID3D11Resource<ABI> *pSrcResource, UINT SrcSubresource,
                                                  DXGI_FORMAT Format)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::ExecuteCommandList(ID3D11CommandList *pCommandList, BOOL RestoreContextState)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSSetShaderResources(UINT StartSlot, UINT NumViews,
                                                    gfx::ID3D11ShaderResourceView<ABI> *const *ppShaderResourceViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::HSSetShader(gfx::ID3D11HullShader<ABI> *pHullShader)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSSetSamplers(UINT StartSlot, UINT NumSamplers,
                                             gfx::ID3D11SamplerState<ABI> *const *ppSamplers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSSetConstantBuffers(UINT StartSlot, UINT NumBuffers,
                                                    gfx::ID3D11Buffer<ABI> *const *ppConstantBuffers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSSetShaderResources(UINT StartSlot, UINT NumViews,
                                                    gfx::ID3D11ShaderResourceView<ABI> *const *ppShaderResourceViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::DSSetShader(gfx::ID3D11DomainShader<ABI> *pDomainShader)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSSetSamplers(UINT StartSlot, UINT NumSamplers,
                                             gfx::ID3D11SamplerState<ABI> *const *ppSamplers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSSetConstantBuffers(UINT StartSlot, UINT NumBuffers,
                                                    gfx::ID3D11Buffer<ABI> *const *ppConstantBuffers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSSetShaderResources(UINT StartSlot, UINT NumViews,
                                                    gfx::ID3D11ShaderResourceView<ABI> *const *ppShaderResourceViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSSetUnorderedAccessViews(
    UINT StartSlot, UINT NumUAVs, gfx::ID3D11UnorderedAccessView<ABI> *const *ppUnorderedAccessViews,
    UINT const *pUAVInitialCounts)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::CSSetShader(gfx::ID3D11ComputeShader<ABI> *pComputeShader)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSSetSamplers(UINT StartSlot, UINT NumSamplers,
                                             gfx::ID3D11SamplerState<ABI> *const *ppSamplers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSSetConstantBuffers(UINT StartSlot, UINT NumBuffers,
                                                    gfx::ID3D11Buffer<ABI> *const *ppConstantBuffers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSGetConstantBuffers(UINT StartSlot, UINT NumBuffers,
                                                    gfx::ID3D11Buffer<ABI> **ppConstantBuffers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSGetShaderResources(UINT StartSlot, UINT NumViews,
                                                    gfx::ID3D11ShaderResourceView<ABI> **ppShaderResourceViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSGetShader(gfx::ID3D11PixelShader<ABI> **ppPixelShader,
                                           ID3D11ClassInstance **ppClassInstances, UINT *pNumClassInstances)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSGetSamplers(UINT StartSlot, UINT NumSamplers,
                                             gfx::ID3D11SamplerState<ABI> **ppSamplers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSGetShader(gfx::ID3D11VertexShader<ABI> **ppVertexShader,
                                           ID3D11ClassInstance **ppClassInstances, UINT *pNumClassInstances)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSGetConstantBuffers(UINT StartSlot, UINT NumBuffers,
                                                    gfx::ID3D11Buffer<ABI> **ppConstantBuffers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::IAGetInputLayout(ID3D11InputLayout **ppInputLayout)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::IAGetVertexBuffers(UINT StartSlot, UINT NumBuffers,
                                                  gfx::ID3D11Buffer<ABI> **ppVertexBuffers, UINT *pStrides,
                                                  UINT *pOffsets)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::IAGetIndexBuffer(gfx::ID3D11Buffer<ABI> **pIndexBuffer, DXGI_FORMAT *Format,
                                                UINT *Offset)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSGetConstantBuffers(UINT StartSlot, UINT NumBuffers,
                                                    gfx::ID3D11Buffer<ABI> **ppConstantBuffers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSGetShader(gfx::ID3D11GeometryShader<ABI> **ppGeometryShader,
                                           ID3D11ClassInstance **ppClassInstances, UINT *pNumClassInstances)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::IAGetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY *pTopology)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSGetShaderResources(UINT StartSlot, UINT NumViews,
                                                    gfx::ID3D11ShaderResourceView<ABI> **ppShaderResourceViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSGetSamplers(UINT StartSlot, UINT NumSamplers,
                                             gfx::ID3D11SamplerState<ABI> **ppSamplers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::GetPredication(ID3D11Predicate **ppPredicate, BOOL *pPredicateValue)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSGetShaderResources(UINT StartSlot, UINT NumViews,
                                                    gfx::ID3D11ShaderResourceView<ABI> **ppShaderResourceViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSGetSamplers(UINT StartSlot, UINT NumSamplers,
                                             gfx::ID3D11SamplerState<ABI> **ppSamplers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::OMGetRenderTargets(UINT NumViews, gfx::ID3D11RenderTargetView<ABI> **ppRenderTargetViews,
                                                  gfx::ID3D11DepthStencilView<ABI> **ppDepthStencilView)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::OMGetRenderTargetsAndUnorderedAccessViews(
    UINT NumRTVs, gfx::ID3D11RenderTargetView<ABI> **ppRenderTargetViews,
    gfx::ID3D11DepthStencilView<ABI> **ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs,
    gfx::ID3D11UnorderedAccessView<ABI> **ppUnorderedAccessViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::OMGetBlendState(gfx::ID3D11BlendState<ABI> **ppBlendState, FLOAT BlendFactor[4],
                                               UINT *pSampleMask)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::OMGetDepthStencilState(gfx::ID3D11DepthStencilState<ABI> **ppDepthStencilState,
                                                      UINT *pStencilRef)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::SOGetTargets(UINT NumBuffers, gfx::ID3D11Buffer<ABI> **ppSOTargets)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::RSGetState(gfx::ID3D11RasterizerState<ABI> **ppRasterizerState)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::RSGetViewports(UINT *pNumViewports, D3D11_VIEWPORT *pViewports)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::RSGetScissorRects(UINT *pNumRects, D3D11_RECT *pRects)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSGetShaderResources(UINT StartSlot, UINT NumViews,
                                                    gfx::ID3D11ShaderResourceView<ABI> **ppShaderResourceViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSGetShader(gfx::ID3D11HullShader<ABI> **ppHullShader,
                                           ID3D11ClassInstance **ppClassInstances, UINT *pNumClassInstances)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSGetSamplers(UINT StartSlot, UINT NumSamplers,
                                             gfx::ID3D11SamplerState<ABI> **ppSamplers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSGetConstantBuffers(UINT StartSlot, UINT NumBuffers,
                                                    gfx::ID3D11Buffer<ABI> **ppConstantBuffers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSGetShaderResources(UINT StartSlot, UINT NumViews,
                                                    gfx::ID3D11ShaderResourceView<ABI> **ppShaderResourceViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSGetShader(gfx::ID3D11DomainShader<ABI> **ppDomainShader,
                                           ID3D11ClassInstance **ppClassInstances, UINT *pNumClassInstances)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSGetSamplers(UINT StartSlot, UINT NumSamplers,
                                             gfx::ID3D11SamplerState<ABI> **ppSamplers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSGetConstantBuffers(UINT StartSlot, UINT NumBuffers,
                                                    gfx::ID3D11Buffer<ABI> **ppConstantBuffers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSGetShaderResources(UINT StartSlot, UINT NumViews,
                                                    gfx::ID3D11ShaderResourceView<ABI> **ppShaderResourceViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSGetUnorderedAccessViews(UINT StartSlot, UINT NumUAVs,
                                                         gfx::ID3D11UnorderedAccessView<ABI> **ppUnorderedAccessViews)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSGetShader(gfx::ID3D11ComputeShader<ABI> **ppComputeShader,
                                           ID3D11ClassInstance **ppClassInstances, UINT *pNumClassInstances)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSGetSamplers(UINT StartSlot, UINT NumSamplers,
                                             gfx::ID3D11SamplerState<ABI> **ppSamplers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSGetConstantBuffers(UINT StartSlot, UINT NumBuffers,
                                                    gfx::ID3D11Buffer<ABI> **ppConstantBuffers)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::ClearState()
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::Flush()
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> D3D11_DEVICE_CONTEXT_TYPE D3D11DeviceContextX<ABI>::GetType()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> UINT D3D11DeviceContextX<ABI>::GetContextFlags()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI>
HRESULT D3D11DeviceContextX<ABI>::FinishCommandList(BOOL RestoreDeferredContextState, ID3D11CommandList **ppCommandList)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

//
// ID3D11DeviceContext1
//
template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CopySubresourceRegion1(gfx::ID3D11Resource<ABI> *pDstResource, UINT DstSubresource,
                                                      UINT DstX, UINT DstY, UINT DstZ,
                                                      gfx::ID3D11Resource<ABI> *pSrcResource, UINT SrcSubresource,
                                                      D3D11_BOX const *pSrcBox, UINT CopyFlags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::UpdateSubresource1(gfx::ID3D11Resource<ABI> *pDstResource, UINT DstSubresource,
                                                  D3D11_BOX const *pDstBox, void const *pSrcData, UINT SrcRowPitch,
                                                  UINT SrcDepthPitch, UINT CopyFlags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::DiscardResource(gfx::ID3D11Resource<ABI> *pResource)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::DiscardView(gfx::ID3D11View<ABI> *pResourceView)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSSetConstantBuffers1(UINT StartSlot, UINT NumBuffers,
                                                     gfx::ID3D11Buffer<ABI> *const *ppConstantBuffers,
                                                     UINT const *pFirstConstant, UINT const *pNumConstants)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSSetConstantBuffers1(UINT StartSlot, UINT NumBuffers,
                                                     gfx::ID3D11Buffer<ABI> *const *ppConstantBuffers,
                                                     UINT const *pFirstConstant, UINT const *pNumConstants)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSSetConstantBuffers1(UINT StartSlot, UINT NumBuffers,
                                                     gfx::ID3D11Buffer<ABI> *const *ppConstantBuffers,
                                                     UINT const *pFirstConstant, UINT const *pNumConstants)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSSetConstantBuffers1(UINT StartSlot, UINT NumBuffers,
                                                     gfx::ID3D11Buffer<ABI> *const *ppConstantBuffers,
                                                     UINT const *pFirstConstant, UINT const *pNumConstants)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSSetConstantBuffers1(UINT StartSlot, UINT NumBuffers,
                                                     gfx::ID3D11Buffer<ABI> *const *ppConstantBuffers,
                                                     UINT const *pFirstConstant, UINT const *pNumConstants)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSSetConstantBuffers1(UINT StartSlot, UINT NumBuffers,
                                                     gfx::ID3D11Buffer<ABI> *const *ppConstantBuffers,
                                                     UINT const *pFirstConstant, UINT const *pNumConstants)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSGetConstantBuffers1(UINT StartSlot, UINT NumBuffers,
                                                     gfx::ID3D11Buffer<ABI> **ppConstantBuffers, UINT *pFirstConstant,
                                                     UINT *pNumConstants)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSGetConstantBuffers1(UINT StartSlot, UINT NumBuffers,
                                                     gfx::ID3D11Buffer<ABI> **ppConstantBuffers, UINT *pFirstConstant,
                                                     UINT *pNumConstants)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSGetConstantBuffers1(UINT StartSlot, UINT NumBuffers,
                                                     gfx::ID3D11Buffer<ABI> **ppConstantBuffers, UINT *pFirstConstant,
                                                     UINT *pNumConstants)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSGetConstantBuffers1(UINT StartSlot, UINT NumBuffers,
                                                     gfx::ID3D11Buffer<ABI> **ppConstantBuffers, UINT *pFirstConstant,
                                                     UINT *pNumConstants)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSGetConstantBuffers1(UINT StartSlot, UINT NumBuffers,
                                                     gfx::ID3D11Buffer<ABI> **ppConstantBuffers, UINT *pFirstConstant,
                                                     UINT *pNumConstants)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSGetConstantBuffers1(UINT StartSlot, UINT NumBuffers,
                                                     gfx::ID3D11Buffer<ABI> **ppConstantBuffers, UINT *pFirstConstant,
                                                     UINT *pNumConstants)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::SwapDeviceContextState(ID3DDeviceContextState *pState,
                                                      ID3DDeviceContextState **ppPreviousState)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::ClearView(gfx::ID3D11View<ABI> *pView, FLOAT const Color[4], D3D11_RECT const *pRect,
                                         UINT NumRects)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DiscardView1(gfx::ID3D11View<ABI> *pResourceView, D3D11_RECT const *pRects,
                                            UINT NumRects)
{
    IMPLEMENT_STUB();
}

//
// ID3D11DeviceContext2
//
template <abi_t ABI>
HRESULT D3D11DeviceContextX<ABI>::UpdateTileMappings(
    gfx::ID3D11Resource<ABI> *pTiledResource, UINT NumTiledResourceRegions,
    D3D11_TILED_RESOURCE_COORDINATE const *pTiledResourceRegionStartCoordinates,
    D3D11_TILE_REGION_SIZE const *pTiledResourceRegionSizes, gfx::ID3D11Buffer<ABI> *pTilePool, UINT NumRanges,
    UINT const *pRangeFlags, UINT const *pTilePoolStartOffsets, UINT const *pRangeTileCounts, UINT Flags)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
HRESULT D3D11DeviceContextX<ABI>::CopyTileMappings(gfx::ID3D11Resource<ABI> *pDestTiledResource,
                                                   D3D11_TILED_RESOURCE_COORDINATE const *pDestRegionStartCoordinate,
                                                   gfx::ID3D11Resource<ABI> *pSourceTiledResource,
                                                   D3D11_TILED_RESOURCE_COORDINATE const *pSourceRegionStartCoordinate,
                                                   D3D11_TILE_REGION_SIZE const *pTileRegionSize, UINT Flags)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CopyTiles(gfx::ID3D11Resource<ABI> *pTiledResource,
                                         D3D11_TILED_RESOURCE_COORDINATE const *pTileRegionStartCoordinate,
                                         D3D11_TILE_REGION_SIZE const *pTileRegionSize, gfx::ID3D11Buffer<ABI> *pBuffer,
                                         UINT64 BufferStartOffsetInBytes, UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::UpdateTiles(gfx::ID3D11Resource<ABI> *pDestTiledResource,
                                           D3D11_TILED_RESOURCE_COORDINATE const *pDestTileRegionStartCoordinate,
                                           D3D11_TILE_REGION_SIZE const *pDestTileRegionSize,
                                           void const *pSourceTileData, UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceContextX<ABI>::ResizeTilePool(gfx::ID3D11Buffer<ABI> *pTilePool, UINT64 NewSizeInBytes)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::TiledResourceBarrier(
    gfx::ID3D11DeviceChild<ABI> *pTiledResourceOrViewAccessBeforeBarrier,
    gfx::ID3D11DeviceChild<ABI> *pTiledResourceOrViewAccessAfterBarrier)
{
    IMPLEMENT_STUB();
}

//
// ID3D11DeviceContextX
//
template <abi_t ABI> INT D3D11DeviceContextX<ABI>::PIXBeginEvent(LPCWSTR Name)
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> INT D3D11DeviceContextX<ABI>::PIXEndEvent()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::PIXSetMarker(LPCWSTR Name)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> BOOL D3D11DeviceContextX<ABI>::PIXGetStatus()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> HRESULT D3D11DeviceContextX<ABI>::PIXGpuCaptureNextFrame(UINT Flags, LPCWSTR lpOutputFileName)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11DeviceContextX<ABI>::PIXGpuBeginCapture(UINT Flags, LPCWSTR lpOutputFileName)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11DeviceContextX<ABI>::PIXGpuEndCapture()
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::StartCounters(gfx::ID3D11CounterSetX *pCounterSet)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::SampleCounters(gfx::ID3D11CounterSampleX *pCounterSample)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::StopCounters()
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceContextX<ABI>::GetCounterData(gfx::ID3D11CounterSampleX *pCounterSample,
                                                 gfx::D3D11X_COUNTER_DATA *pData,
                                                 UINT GetCounterDataFlags)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::FlushGpuCaches(gfx::ID3D11Resource<ABI> *pResource)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::FlushGpuCacheRange(UINT Flags, void *pBaseAddress, SIZE_T SizeInBytes)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::InsertWaitUntilIdle(UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> UINT64 D3D11DeviceContextX<ABI>::InsertFence(UINT Flags)
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::InsertWaitOnFence(UINT Flags, UINT64 Fence)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::RemapConstantBufferInheritance(gfx::D3D11_STAGE Stage, UINT Slot,
                                                              gfx::D3D11_STAGE InheritStage,
                                                              UINT InheritSlot)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::RemapShaderResourceInheritance(gfx::D3D11_STAGE Stage, UINT Slot,
                                                              gfx::D3D11_STAGE InheritStage,
                                                              UINT InheritSlot)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::RemapSamplerInheritance(gfx::D3D11_STAGE Stage, UINT Slot, gfx::D3D11_STAGE InheritStage,
                                                       UINT InheritSlot)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::RemapVertexBufferInheritance(UINT Slot, UINT InheritSlot)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSSetFastConstantBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pConstantBuffer)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSSetFastShaderResource(UINT Slot,
                                                       gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::PSSetFastSampler(UINT Slot, gfx::ID3D11SamplerState<ABI> *pSampler)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSSetFastConstantBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pConstantBuffer)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSSetFastShaderResource(UINT Slot,
                                                       gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::VSSetFastSampler(UINT Slot, gfx::ID3D11SamplerState<ABI> *pSampler)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSSetFastConstantBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pConstantBuffer)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSSetFastShaderResource(UINT Slot,
                                                       gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::GSSetFastSampler(UINT Slot, gfx::ID3D11SamplerState<ABI> *pSampler)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSSetFastConstantBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pConstantBuffer)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSSetFastShaderResource(UINT Slot,
                                                       gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::CSSetFastSampler(UINT Slot, gfx::ID3D11SamplerState<ABI> *pSampler)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSSetFastConstantBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pConstantBuffer)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSSetFastShaderResource(UINT Slot,
                                                       gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::HSSetFastSampler(UINT Slot, gfx::ID3D11SamplerState<ABI> *pSampler)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSSetFastConstantBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pConstantBuffer)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSSetFastShaderResource(UINT Slot,
                                                       gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::DSSetFastSampler(UINT Slot, gfx::ID3D11SamplerState<ABI> *pSampler)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::IASetFastVertexBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pVertexBuffer, UINT Stride)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::IASetFastIndexBuffer(UINT HardwareIndexFormat, gfx::ID3D11Buffer<ABI> *pIndexBuffer)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSSetPlacementConstantBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pConstantBuffer,
                                                            void *pBaseAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSSetPlacementShaderResource(UINT Slot,
                                                            gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView,
                                                            void *pBaseAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSSetPlacementConstantBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pConstantBuffer,
                                                            void *pBaseAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSSetPlacementShaderResource(UINT Slot,
                                                            gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView,
                                                            void *pBaseAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSSetPlacementConstantBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pConstantBuffer,
                                                            void *pBaseAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSSetPlacementShaderResource(UINT Slot,
                                                            gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView,
                                                            void *pBaseAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSSetPlacementConstantBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pConstantBuffer,
                                                            void *pBaseAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSSetPlacementShaderResource(UINT Slot,
                                                            gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView,
                                                            void *pBaseAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSSetPlacementConstantBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pConstantBuffer,
                                                            void *pBaseAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSSetPlacementShaderResource(UINT Slot,
                                                            gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView,
                                                            void *pBaseAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSSetPlacementConstantBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pConstantBuffer,
                                                            void *pBaseAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSSetPlacementShaderResource(UINT Slot,
                                                            gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView,
                                                            void *pBaseAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::IASetPlacementVertexBuffer(UINT Slot, gfx::ID3D11Buffer<ABI> *pVertexBuffer,
                                                          void *pBaseAddress, UINT Stride)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::IASetPlacementIndexBuffer(UINT HardwareIndexFormat, gfx::ID3D11Buffer<ABI> *pIndexBuffer,
                                                         void *pBaseAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSSetTessellationParameters(
    gfx::D3D11X_TESSELLATION_PARAMETERS const *pTessellationParameters)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSGetLastUsedTessellationParameters(
    gfx::D3D11X_TESSELLATION_PARAMETERS *pTessellationParameters)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::CSEnableAutomaticGpuFlush(BOOL Enable)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::GpuSendPipelinedEvent(gfx::D3D11X_GPU_PIPELINED_EVENT Event)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> HRESULT D3D11DeviceContextX<ABI>::Suspend(UINT Flags)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> HRESULT D3D11DeviceContextX<ABI>::Resume()
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::BeginCommandListExecution(UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::EndCommandListExecution()
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::SetGraphicsShaderLimits(gfx::D3D11X_GRAPHICS_SHADER_LIMITS const *pShaderLimits)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::SetComputeShaderLimits(gfx::D3D11X_COMPUTE_SHADER_LIMITS const *pShaderLimits)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::SetPredicationBuffer(gfx::ID3D11Buffer<ABI> *pBuffer, UINT Offset, UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::OMSetDepthBounds(FLOAT min, FLOAT max)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::OMSetDepthStencilStateX(gfx::ID3D11DepthStencilState<ABI> *pDepthStencilState)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::OMSetSampleMask(UINT64 QuadSampleMask)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> UINT32 *D3D11DeviceContextX<ABI>::MakeCeSpace()
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::SetFastResources_Debug(UINT *pTableStart, UINT *pTableEnd)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::BeginResourceBatch(void *pBuffer, UINT BufferSize)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> UINT D3D11DeviceContextX<ABI>::EndResourceBatch(UINT *pSizeNeeded)
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::SetFastResourcesFromBatch_Debug(void *pBatch, UINT Size)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSPlaceUnorderedAccessView(UINT Slot, gfx::D3D11X_DESCRIPTOR_UNORDERED_ACCESS_VIEW *const pDescriptor,
                                                          UINT64 Offset)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::WriteValueEndOfPipe(void *pDestination, UINT Value, UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CopyMemoryToMemory(void *pDstAddress, void *pSrcAddress, SIZE_T SizeBytes)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::FillMemoryWithValue(void *pDstAddress, SIZE_T SizeBytes, UINT FillValue)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::BeginProcessVideoResource(gfx::ID3D11Resource<ABI> *pResource, UINT SubResource)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::EndProcessVideoResource(gfx::ID3D11Resource<ABI> *pResource, UINT SubResource)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceContextX<ABI>::StartThreadTrace(gfx::D3D11X_THREAD_TRACE_DESC const *pDesc,
                                                   void *pDstAddressShaderEngine0, void *pDstAddressShaderEngine1,
                                                   SIZE_T BufferSizeBytes)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::StopThreadTrace(void *pDstAddressTraceSize)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::InsertThreadTraceMarker(UINT Marker)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::IASetPrimitiveResetIndex(UINT ResetIndex)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::SetShaderResourceViewMinLOD(gfx::ID3D11ShaderResourceView<ABI> *pShaderResourceView,
                                                           FLOAT MinLOD)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::InsertWaitOnPresent(UINT Flags, gfx::ID3D11Resource<ABI> *pBackBuffer)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::ClearRenderTargetViewX(gfx::ID3D11RenderTargetView<ABI> *pRenderTargetView, UINT Flags,
                                                      FLOAT const ColorRGBA[4])
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> UINT D3D11DeviceContextX<ABI>::GetResourceCompression(gfx::ID3D11Resource<ABI> *pResource)
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI>
UINT D3D11DeviceContextX<ABI>::GetResourceCompressionX(gfx::D3D11X_DESCRIPTOR_RESOURCE const *pResource)
{
    IMPLEMENT_STUB();
    return {};
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DecompressResource(gfx::ID3D11Resource<ABI> *pDstResource, UINT DstSubresource,
                                                  gfx::D3D11X_POINT const *pDstPoint,
                                                  gfx::ID3D11Resource<ABI> *pSrcResource, UINT SrcSubresource,
                                                  gfx::D3D11X_RECT const *pSrcRect,
                                                  DXGI_FORMAT DecompressFormat, UINT DecompressFlags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DecompressResourceX(gfx::D3D11X_DESCRIPTOR_RESOURCE *pDstResource, UINT DstSubresource,
                                                   gfx::D3D11X_POINT const *pDstPoint,
                                                   gfx::D3D11X_DESCRIPTOR_RESOURCE *pSrcResource, UINT SrcSubresource,
                                                   gfx::D3D11X_RECT const *pSrcRect,
                                                   gfx::D3D11X_FORMAT DecompressFormat,
                                                   UINT DecompressFlags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::GSSetParameters(gfx::D3D11X_GS_PARAMETERS const *pGsParameters)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::GSGetLastUsedParameters(gfx::D3D11X_GS_PARAMETERS *pGsParameters)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::MultiDrawIndexedInstancedIndirect(UINT PrimitiveCount,
                                                                 gfx::ID3D11Buffer<ABI> *pBufferForArgs,
                                                                 UINT AlignedByteOffsetForArgs,
                                                                 UINT StrideByteOffsetForArgs, UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::MultiDrawInstancedIndirect(UINT PrimitiveCount, gfx::ID3D11Buffer<ABI> *pBufferForArgs,
                                                          UINT AlignedByteOffsetForArgs, UINT StrideByteOffsetForArgs,
                                                          UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::MultiDrawIndexedInstancedIndirectAuto(gfx::ID3D11Buffer<ABI> *pBufferForPrimitiveCount,
                                                                     UINT AlignedByteOffsetForPrimitiveCount,
                                                                     gfx::ID3D11Buffer<ABI> *pBufferForArgs,
                                                                     UINT AlignedByteOffsetForArgs,
                                                                     UINT StrideByteOffsetForArgs, UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::MultiDrawInstancedIndirectAuto(gfx::ID3D11Buffer<ABI> *pBufferForPrimitiveCount,
                                                              UINT AlignedByteOffsetForPrimitiveCount,
                                                              gfx::ID3D11Buffer<ABI> *pBufferForArgs,
                                                              UINT AlignedByteOffsetForArgs,
                                                              UINT StrideByteOffsetForArgs, UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
HRESULT D3D11DeviceContextX<ABI>::RSGetMSAASettingsForQuality(gfx::D3D11X_MSAA_SCAN_CONVERTER_SETTINGS *pMSAASCSettings,
                                                              gfx::D3D11X_MSAA_EQAA_SETTINGS *pEQAASettings,
                                                              gfx::D3D11X_MSAA_SAMPLE_PRIORITIES *pCentroidPriorities,
                                                              gfx::D3D11X_MSAA_SAMPLE_POSITIONS *pSamplePositions,
                                                              UINT LogSampleCount, UINT SampleQuality)
{
    IMPLEMENT_STUB();
    return E_NOTIMPL;
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::RSSetScanConverterMSAASettings(
    gfx::D3D11X_MSAA_SCAN_CONVERTER_SETTINGS const *pMSAASCSettings)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::RSSetEQAASettings(gfx::D3D11X_MSAA_EQAA_SETTINGS const *pEQAASettings)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::RSSetSamplePositions(gfx::D3D11X_MSAA_SAMPLE_PRIORITIES const *pSamplesPriorities,
                                                    gfx::D3D11X_MSAA_SAMPLE_POSITIONS const *pSamplePositions)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::SetResourceCompression(gfx::ID3D11Resource<ABI> *pResource, UINT Compression)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::SetResourceCompressionX(gfx::D3D11X_DESCRIPTOR_RESOURCE const *pResource,
                                                       UINT Compression)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::SetGDSRange(gfx::D3D11X_GDS_REGION_TYPE RegionType, UINT OffsetDwords, UINT NumDwords)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::WriteGDS(gfx::D3D11X_GDS_REGION_TYPE RegionType, UINT OffsetDwords, UINT NumDwords,
                                        UINT const *pCounterValues, UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::ReadGDS(gfx::D3D11X_GDS_REGION_TYPE RegionType, UINT OffsetDwords, UINT NumDwords,
                                       UINT *pCounterValues, UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::VSSetShaderUserData(UINT StartSlot, UINT NumRegisters, UINT const *pData)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::HSSetShaderUserData(UINT StartSlot, UINT NumRegisters, UINT const *pData)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::DSSetShaderUserData(UINT StartSlot, UINT NumRegisters, UINT const *pData)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::GSSetShaderUserData(UINT StartSlot, UINT NumRegisters, UINT const *pData)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::PSSetShaderUserData(UINT StartSlot, UINT NumRegisters, UINT const *pData)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CSSetShaderUserData(UINT StartSlot, UINT NumRegisters, UINT const *pData)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::InsertWaitOnMemory(void const *pAddress, UINT Flags,
                                                  D3D11_COMPARISON_FUNC ComparisonFunction, UINT ReferenceValue,
                                                  UINT Mask)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::WriteTimestampToMemory(void *pDstAddress)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::WriteTimestampToBuffer(gfx::ID3D11Buffer<ABI> *pBuffer, UINT OffsetBytes)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::StoreConstantRam(UINT Flags, gfx::ID3D11Buffer<ABI> *pBuffer, UINT BufferOffsetInBytes,
                                                UINT CeRamOffsetInBytes, UINT SizeInBytes)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::LoadConstantRam(UINT Flags, gfx::ID3D11Buffer<ABI> *pBuffer, UINT BufferOffsetInBytes,
                                               UINT CeRamOffsetInBytes, UINT SizeInBytes)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::WriteQuery(D3D11_QUERY QueryType, UINT QueryIndex, UINT Flags,
                                          gfx::ID3D11Buffer<ABI> *pBuffer, UINT OffsetInBytes, UINT StrideInBytes)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::ResetQuery(D3D11_QUERY QueryType, UINT QueryIndex, UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::ConfigureQuery(D3D11_QUERY QueryType, void const *pConfiguration, UINT ConfigurationSize)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::SetShaderUserData(gfx::D3D11X_HW_STAGE ShaderStage, UINT StartSlot, UINT NumRegisters,
                                                 UINT const *pData)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::SetPixelShaderDepthForceZOrder(BOOL ForceOrder)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::SetPredicationFromQuery(D3D11_QUERY QueryType, gfx::ID3D11Buffer<ABI> *pBuffer,
                                                       UINT OffsetInBytes, UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::SetBorderColorPalette(gfx::ID3D11Buffer<ABI> *pBuffer, UINT OffsetInBytes, UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::WriteValueEndOfPipe64(void *pDestination, UINT64 Value, UINT Flags)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::InsertWaitOnMemory64(void const *pAddress, UINT Flags,
                                                    D3D11_COMPARISON_FUNC ComparisonFunction, UINT64 ReferenceValue)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::LoadConstantRamImmediate(UINT Flags, void const *pBuffer, UINT CeRamOffsetInBytes,
                                                        UINT SizeInBytes)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::SetScreenExtentsQuery(UINT Value)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::CollectScreenExtents(UINT Flags, UINT AddressCount, UINT64 const *pDestinationAddresses,
                                                    USHORT ZMin, USHORT ZMax)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI>
void D3D11DeviceContextX<ABI>::FillResourceWithValue(gfx::ID3D11Resource<ABI> *pDstResource, UINT FillValue)
{
    IMPLEMENT_STUB();
}

template <abi_t ABI> void D3D11DeviceContextX<ABI>::SetDrawBalancing(UINT BalancingMode, UINT Flags)
{
    IMPLEMENT_STUB();
}

#undef ABI_INTERFACE
#define ABI_INTERFACE(ABI) D3D11DeviceContextX<ABI>
D3D11_DECLARE_ABI_TEMPLATES();