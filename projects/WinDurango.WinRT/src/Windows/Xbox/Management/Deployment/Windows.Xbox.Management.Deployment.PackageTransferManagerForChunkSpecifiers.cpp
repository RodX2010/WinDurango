#include "Windows.Xbox.Management.Deployment.PackageTransferManagerForChunkSpecifiers.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferManagerForChunkSpecifiers::CreateForChunkSpecifiers(winrt::Windows::ApplicationModel::Package const& unk, winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& unka)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers PackageTransferManagerForChunkSpecifiers::AvailableChunkSpecifiers()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::InstallationState PackageTransferManagerForChunkSpecifiers::GetInstallationState(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& unk)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::InstallationState PackageTransferManagerForChunkSpecifiers::GetInstallationState(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& unk)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher> PackageTransferManagerForChunkSpecifiers::AddChunkSpecifiersAsync(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers unk)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction PackageTransferManagerForChunkSpecifiers::RemoveChunkSpecifiersAsync(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers unk)
    {
        throw hresult_not_implemented();
    }
}
