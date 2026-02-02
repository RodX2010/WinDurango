#pragma once
#include "Windows.Xbox.Management.Deployment.RequestUpdatePackageResult.g.h"
#include "Windows.Xbox.Management.Deployment.CheckForUpdateResult.g.h"
#include "Windows.Xbox.Management.Deployment.ChunkCompletedEventArgs.g.h"
#include "Windows.Xbox.Management.Deployment.ChunkSpecifiers.g.h"
#include "Windows.Xbox.Management.Deployment.ContentPackage.g.h"
#include "Windows.Xbox.Management.Deployment.ContentUpdate.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct RequestUpdatePackageResult : RequestUpdatePackageResultT<RequestUpdatePackageResult>
    {
        RequestUpdatePackageResult() = default;

        winrt::hresult Result();
    };

    struct CheckForUpdateResult : CheckForUpdateResultT<CheckForUpdateResult>
    {
        CheckForUpdateResult() = default;

        bool IsUpdateAvailable();
        bool IsUpdateMandatory();
    };

    struct ChunkCompletedEventArgs : ChunkCompletedEventArgsT<ChunkCompletedEventArgs>
    {
        ChunkCompletedEventArgs() = default;

        uint32_t ChunkId();
    };

    struct ChunkSpecifiers : ChunkSpecifiersT<ChunkSpecifiers>
    {
        ChunkSpecifiers() = default;

        winrt::Windows::Foundation::Collections::IVector<hstring> Languages();
        winrt::Windows::Foundation::Collections::IVector<hstring> Tags();
    };

    struct ContentPackage : ContentPackageT<ContentPackage>
    {
        ContentPackage() = default;

        hstring TitleId();
        hstring ContentId();
        hstring ProductId();
        hstring PackageFullName();
        uint32_t ContentType();
        hstring DisplayName();
        hstring Description();
        hstring Publisher();
        hstring Version();
    };
    
    struct ContentUpdate
    {
        ContentUpdate() = default;

        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::CheckForUpdateResult> CheckForUpdateAsync(winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackage unk);
        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::RequestUpdatePackageResult> RequestUpdatePackageAsync(winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackage unk);
        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::RequestUpdatePackageResult> RequestUpdateCurrentPackageAsync();
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct ContentUpdate : ContentUpdateT<ContentUpdate, implementation::ContentUpdate>
    {
    };
}
