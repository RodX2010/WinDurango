#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    void TransferStatusChangedEventArgs::UnknownOne()
    {
        throw hresult_not_implemented();
    }
    void TransferStatusChangedEventArgs::UnknownTwo()
    {
        throw hresult_not_implemented();
    }
    uint32_t ProgressChangedEventArgs::PercentComplete()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferStatus PackageTransferWatcherTransferInfo::TransferStatus()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferType PackageTransferWatcherTransferInfo::TransferType()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcherTransferInfo::TransferStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferStatusChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void PackageTransferWatcherTransferInfo::TransferStatusChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::Create(winrt::Windows::ApplicationModel::Package const& unk, winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& unka)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::Create(winrt::Windows::ApplicationModel::Package const& unk)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint32_t> PackageTransferWatcher::ChunkIds()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::ChunkCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ChunkCompletedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void PackageTransferWatcher::ChunkCompleted(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::ProgressChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ProgressChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void PackageTransferWatcher::ProgressChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::TransferCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferCompletedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void PackageTransferWatcher::TransferCompleted(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
}
