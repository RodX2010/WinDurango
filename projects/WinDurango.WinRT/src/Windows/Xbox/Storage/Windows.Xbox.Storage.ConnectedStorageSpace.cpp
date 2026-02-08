#include "Windows.Xbox.Storage.ConnectedStorageSpace.h"

namespace winrt::Windows::Xbox::Storage::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Storage::ConnectedStorageSpace> ConnectedStorageSpace::GetForUserAsync(winrt::Windows::Xbox::System::User user)
    {
        co_return (winrt::Windows::Xbox::Storage::ConnectedStorageSpace)winrt::make<winrt::Windows::Xbox::Storage::implementation::ConnectedStorageSpace>(wd::WinRT::ConnectedStorage(user.Id()), user.Id());
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Storage::ConnectedStorageSpace> ConnectedStorageSpace::GetForUserAsync(winrt::Windows::Xbox::System::User user, hstring unka)
    {
        co_return (winrt::Windows::Xbox::Storage::ConnectedStorageSpace)winrt::make<winrt::Windows::Xbox::Storage::implementation::ConnectedStorageSpace>(wd::WinRT::ConnectedStorage(user.Id()), user.Id());
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Storage::ConnectedStorageSpace> ConnectedStorageSpace::GetForMachineAsync()
    {
        co_return (winrt::Windows::Xbox::Storage::ConnectedStorageSpace)winrt::make<winrt::Windows::Xbox::Storage::implementation::ConnectedStorageSpace>(wd::WinRT::ConnectedStorage());
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Storage::ConnectedStorageSpace> ConnectedStorageSpace::GetForMachineAsync(hstring unk)
    {
        co_return (winrt::Windows::Xbox::Storage::ConnectedStorageSpace)winrt::make<winrt::Windows::Xbox::Storage::implementation::ConnectedStorageSpace>(wd::WinRT::ConnectedStorage());
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Storage::ConnectedStorageSpace> ConnectedStorageSpace::GetSyncOnDemandForUserAsync(winrt::Windows::Xbox::System::User user)
    {
        co_return (winrt::Windows::Xbox::Storage::ConnectedStorageSpace)winrt::make<winrt::Windows::Xbox::Storage::implementation::ConnectedStorageSpace>(wd::WinRT::ConnectedStorage(user.Id()), user.Id());
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Storage::ConnectedStorageSpace> ConnectedStorageSpace::GetSyncOnDemandForUserAsync(winrt::Windows::Xbox::System::User user, hstring unka)
    {
        co_return (winrt::Windows::Xbox::Storage::ConnectedStorageSpace)winrt::make<winrt::Windows::Xbox::Storage::implementation::ConnectedStorageSpace>(wd::WinRT::ConnectedStorage(user.Id()), user.Id());
    }
    winrt::Windows::Xbox::System::User ConnectedStorageSpace::User()
    {
        return winrt::Windows::Xbox::System::User::Users().GetAt(id);
    }
    hstring ConnectedStorageSpace::ServiceConfigurationId()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: ServiceConfigurationId");
        throw hresult_not_implemented();
    }
    bool ConnectedStorageSpace::IsReadOnly()
    {
        return false;
    }
    winrt::Windows::Xbox::Storage::ConnectedStorageContainer ConnectedStorageSpace::CreateContainer(hstring const& containerName)
    {
        if (!containers)
        {
            containers = winrt::single_threaded_map<hstring, winrt::Windows::Xbox::Storage::ConnectedStorageContainer>();
        }

        if (!containers.HasKey(containerName))
        {
            winrt::Windows::Xbox::Storage::ConnectedStorageContainer container = winrt::make<ConnectedStorageContainer>(containerName, storage);

            containers.Insert(containerName, container);
            return container;
        }

        return containers.Lookup(containerName);
    }
    winrt::Windows::Foundation::IAsyncAction ConnectedStorageSpace::DeleteContainerAsync(hstring containerName)
    {
        co_await storage.DeleteContainer(containerName);
        containers.Remove(containerName);
    }
    winrt::Windows::Xbox::Storage::ContainerInfoQueryResult ConnectedStorageSpace::CreateContainerInfoQuery(hstring const& unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: CreateContainerInfoQuery");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<int32_t> ConnectedStorageSpace::GetRemainingBytesInQuotaAsync()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: GetRemainingBytesInQuotaAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<int64_t> ConnectedStorageSpace::GetRemainingBytesInQuota64Async()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: GetRemainingBytesInQuota64Async");
        throw hresult_not_implemented();
    }
}
