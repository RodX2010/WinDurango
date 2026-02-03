#include "Windows.Xbox.Management.Deployment.PackageTransferManagerForChunkSpecifiers.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferManagerForChunkSpecifiers::CreateForChunkSpecifiers(winrt::Windows::ApplicationModel::Package const& unk, winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: CreateForChunkSpecifiers");
        throw hresult_not_implemented();
    }
    
    winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers PackageTransferManagerForChunkSpecifiers::AvailableChunkSpecifiers()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: AvailableChunkSpecifiers");
        throw hresult_not_implemented();
    }
    
    winrt::Windows::Xbox::Management::Deployment::InstallationState PackageTransferManagerForChunkSpecifiers::GetInstallationState(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: GetInstallationState");
        throw hresult_not_implemented();
    }
    
    winrt::Windows::Xbox::Management::Deployment::InstallationState PackageTransferManagerForChunkSpecifiers::GetInstallationState(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: GetInstallationState");
        throw hresult_not_implemented();
    }
    
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher> PackageTransferManagerForChunkSpecifiers::AddChunkSpecifiersAsync(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: AddChunkSpecifiersAsync");
        throw hresult_not_implemented();
    }
    
    winrt::Windows::Foundation::IAsyncAction PackageTransferManagerForChunkSpecifiers::RemoveChunkSpecifiersAsync(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: RemoveChunkSpecifiersAsync");
        throw hresult_not_implemented();
    }
}
