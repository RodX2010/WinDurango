#pragma once
#include "Windows.Xbox.Management.Deployment.PackageTransferManagerTransferInfo.g.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferManager.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct PackageTransferManagerTransferInfo : PackageTransferManagerTransferInfoT<PackageTransferManagerTransferInfo>
    {
        PackageTransferManagerTransferInfo() = default;
        PackageTransferManagerTransferInfo(winrt::Windows::Xbox::Management::Deployment::PackageTransferType transferType) 
            : transferType(transferType) {}

        winrt::Windows::Xbox::Management::Deployment::PackageTransferType TransferType();
    private:
        winrt::Windows::Xbox::Management::Deployment::PackageTransferType transferType;
    };

    struct PackageTransferManager : PackageTransferManagerT<PackageTransferManager>
    {
        PackageTransferManager() = default;

        static winrt::Windows::Xbox::Management::Deployment::PackageTransferManager Current();
        static winrt::Windows::Xbox::Management::Deployment::PackageTransferManager Create(winrt::Windows::ApplicationModel::Package const& unk);
        void UpdateInstallOrder(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& unk, winrt::Windows::Xbox::Management::Deployment::UpdateInstallOrderBehavior const& unka);
        bool IsChunkInstalled(uint32_t unk);
        bool AreChunksInstalled(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& unk);
        uint32_t FindChunkFromFile(hstring const& unk);
        winrt::Windows::Xbox::Management::Deployment::PackageTransferStatus TransferStatus();
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct PackageTransferManager : PackageTransferManagerT<PackageTransferManager, implementation::PackageTransferManager>
    {
    };
}
