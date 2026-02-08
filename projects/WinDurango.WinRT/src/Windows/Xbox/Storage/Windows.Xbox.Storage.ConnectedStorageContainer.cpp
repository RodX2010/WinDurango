#include "Windows.Xbox.Storage.ConnectedStorageContainer.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::Storage::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::BlobInfo>> BlobInfoQueryResult::GetBlobInfoAsync(uint32_t unk, uint32_t unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: GetBlobInfoAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::BlobInfo>> BlobInfoQueryResult::GetBlobInfoAsync()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: GetBlobInfoAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<uint32_t> BlobInfoQueryResult::GetItemCountAsync()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: GetItemCountAsync");
        throw hresult_not_implemented();
    }
    hstring ConnectedStorageContainer::Name()
    {
        return name;
    }
    winrt::Windows::Xbox::Storage::ConnectedStorageSpace ConnectedStorageContainer::OwningSpace()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: OwningSpace");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction ConnectedStorageContainer::SubmitUpdatesAsync(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Storage::Streams::IBuffer> unk, winrt::Windows::Foundation::Collections::IIterable<hstring> unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: SubmitUpdatesAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction ConnectedStorageContainer::ReadAsync(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Storage::Streams::IBuffer> unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: ReadAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Storage::Streams::IBuffer>> ConnectedStorageContainer::GetAsync(winrt::Windows::Foundation::Collections::IIterable<hstring> unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: GetAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction ConnectedStorageContainer::SubmitPropertySetUpdatesAsync(winrt::Windows::Foundation::Collections::IPropertySet unk, winrt::Windows::Foundation::Collections::IIterable<hstring> unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: SubmitPropertySetUpdatesAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction ConnectedStorageContainer::SubmitUpdatesAsync(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Storage::Streams::IBuffer> unk, winrt::Windows::Foundation::Collections::IIterable<hstring> unka, hstring unkaa)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: SubmitUpdatesAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction ConnectedStorageContainer::SubmitPropertySetUpdatesAsync(winrt::Windows::Foundation::Collections::IPropertySet unk, winrt::Windows::Foundation::Collections::IIterable<hstring> unka, hstring unkaa)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: SubmitPropertySetUpdatesAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Storage::BlobInfoQueryResult ConnectedStorageContainer::CreateBlobInfoQuery(hstring const& unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: CreateBlobInfoQuery");
        throw hresult_not_implemented();
    }
}
