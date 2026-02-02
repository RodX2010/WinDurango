#include "Windows.Xbox.Management.Deployment.PackageTransferManager.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::Windows::Xbox::Management::Deployment::PackageTransferType PackageTransferManagerTransferInfo::TransferType()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferManager PackageTransferManager::Current()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferManager PackageTransferManager::Create(winrt::Windows::ApplicationModel::Package const& unk)
    {
        throw hresult_not_implemented();
    }
    void PackageTransferManager::UpdateInstallOrder(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& unk, winrt::Windows::Xbox::Management::Deployment::UpdateInstallOrderBehavior const& unka)
    {
        throw hresult_not_implemented();
    }
    bool PackageTransferManager::IsChunkInstalled(uint32_t unk)
    {
        throw hresult_not_implemented();
    }
    bool PackageTransferManager::AreChunksInstalled(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& unk)
    {
        throw hresult_not_implemented();
    }
    uint32_t PackageTransferManager::FindChunkFromFile(hstring const& unk)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferStatus PackageTransferManager::TransferStatus()
    {
        throw hresult_not_implemented();
    }
}
