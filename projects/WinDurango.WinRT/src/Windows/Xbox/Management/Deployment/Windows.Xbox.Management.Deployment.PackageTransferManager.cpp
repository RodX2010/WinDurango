#include "Windows.Xbox.Management.Deployment.PackageTransferManager.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::Windows::Xbox::Management::Deployment::PackageTransferType PackageTransferManagerTransferInfo::TransferType()
    {
        return transferType;
    }
    
    winrt::Windows::Xbox::Management::Deployment::PackageTransferManager PackageTransferManager::Current()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: Current");
        throw hresult_not_implemented();
    }
    
    winrt::Windows::Xbox::Management::Deployment::PackageTransferManager PackageTransferManager::Create(winrt::Windows::ApplicationModel::Package const& unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: Create");
        throw hresult_not_implemented();
    }
    
    void PackageTransferManager::UpdateInstallOrder(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& unk, winrt::Windows::Xbox::Management::Deployment::UpdateInstallOrderBehavior const& unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: UpdateInstallOrder");
        throw hresult_not_implemented();
    }
    
    bool PackageTransferManager::IsChunkInstalled(uint32_t unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: IsChunkInstalled");
        throw hresult_not_implemented();
    }
    
    bool PackageTransferManager::AreChunksInstalled(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: AreChunksInstalled");
        throw hresult_not_implemented();
    }
    
    uint32_t PackageTransferManager::FindChunkFromFile(hstring const& unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: FindChunkFromFile");
        throw hresult_not_implemented();
    }
    
    winrt::Windows::Xbox::Management::Deployment::PackageTransferStatus PackageTransferManager::TransferStatus()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: TransferStatus");
        throw hresult_not_implemented();
    }
}
