#include "Windows.Xbox.Storage.ContainerInfoQueryResult.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::Storage::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo>> ContainerInfoQueryResult::GetContainerInfoAsync(uint32_t unk, uint32_t unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: GetContainerInfoAsync(UInt32, UInt32)");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo>> ContainerInfoQueryResult::GetContainerInfoAsync()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: GetContainerInfoAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<uint32_t> ContainerInfoQueryResult::GetItemCountAsync()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: GetItemCountAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo2>> ContainerInfo2QueryResult::GetContainerInfo2Async(uint32_t unk, uint32_t unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: GetContainerInfo2Async(UInt32, UInt32)");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo2>> ContainerInfo2QueryResult::GetContainerInfo2Async()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Storage", "Unimplemented: GetContainerInfo2Async");
        throw hresult_not_implemented();
    }
}
