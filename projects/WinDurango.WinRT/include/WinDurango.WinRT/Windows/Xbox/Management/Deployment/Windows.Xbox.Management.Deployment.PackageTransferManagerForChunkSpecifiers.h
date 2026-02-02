#pragma once
#include "Windows.Xbox.Management.Deployment.PackageTransferManagerForChunkSpecifiers.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct PackageTransferManagerForChunkSpecifiers : PackageTransferManagerForChunkSpecifiersT<PackageTransferManagerForChunkSpecifiers>
    {
        PackageTransferManagerForChunkSpecifiers() = default;

        static winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher CreateForChunkSpecifiers(winrt::Windows::ApplicationModel::Package const& unk, winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& unka);
        winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers AvailableChunkSpecifiers();
        winrt::Windows::Xbox::Management::Deployment::InstallationState GetInstallationState(winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& unk);
        winrt::Windows::Xbox::Management::Deployment::InstallationState GetInstallationState(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& unk);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher> AddChunkSpecifiersAsync(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers unk);
        winrt::Windows::Foundation::IAsyncAction RemoveChunkSpecifiersAsync(winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers unk);
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct PackageTransferManagerForChunkSpecifiers : PackageTransferManagerForChunkSpecifiersT<PackageTransferManagerForChunkSpecifiers, implementation::PackageTransferManagerForChunkSpecifiers>
    {
    };
}
