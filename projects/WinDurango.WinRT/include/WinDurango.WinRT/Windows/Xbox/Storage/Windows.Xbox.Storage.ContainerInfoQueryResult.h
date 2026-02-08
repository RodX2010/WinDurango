#pragma once
#include "Windows.Xbox.Storage.ContainerInfoQueryResult.g.h"
#include "Windows.Xbox.Storage.ContainerInfo2QueryResult.g.h"

namespace winrt::Windows::Xbox::Storage::implementation
{
    struct ContainerInfoQueryResult : ContainerInfoQueryResultT<ContainerInfoQueryResult>
    {
        ContainerInfoQueryResult() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo>> GetContainerInfoAsync(uint32_t unk, uint32_t unka);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo>> GetContainerInfoAsync();
        winrt::Windows::Foundation::IAsyncOperation<uint32_t> GetItemCountAsync();
    };
    
    struct ContainerInfo2QueryResult : ContainerInfo2QueryResultT<ContainerInfo2QueryResult>
    {
        ContainerInfo2QueryResult() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo2>> GetContainerInfo2Async(uint32_t unk, uint32_t unka);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo2>> GetContainerInfo2Async();
    };
}
