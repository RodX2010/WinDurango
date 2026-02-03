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
        RequestUpdatePackageResult(winrt::hresult hres) : result(hres) {}

        winrt::hresult Result();
    private:
        winrt::hresult result;
    };

    struct CheckForUpdateResult : CheckForUpdateResultT<CheckForUpdateResult>
    {
        CheckForUpdateResult() = default;

        bool IsUpdateAvailable();
        bool IsUpdateMandatory();
    private:
        bool updateAvail = false;
        bool updateMandatory = false;
    };

    struct ChunkCompletedEventArgs : ChunkCompletedEventArgsT<ChunkCompletedEventArgs>
    {
        ChunkCompletedEventArgs() = default;
        ChunkCompletedEventArgs(uint32_t id) : chunkID(id) {}
        
        uint32_t ChunkId();
    private:
        uint32_t chunkID;
    };

    struct ChunkSpecifiers : ChunkSpecifiersT<ChunkSpecifiers>
    {
        ChunkSpecifiers() = default;
        ChunkSpecifiers(winrt::Windows::Foundation::Collections::IVector<hstring> langs, winrt::Windows::Foundation::Collections::IVector<hstring> tags)
            : langs(langs), tags(tags) {}

        winrt::Windows::Foundation::Collections::IVector<hstring> Languages();
        winrt::Windows::Foundation::Collections::IVector<hstring> Tags();
    private:
        winrt::Windows::Foundation::Collections::IVector<hstring> langs;
        winrt::Windows::Foundation::Collections::IVector<hstring> tags;
    };

    struct ContentPackage : ContentPackageT<ContentPackage>
    {
        ContentPackage() = default;
        ContentPackage(hstring title, hstring content, hstring product, hstring packageFullName, 
            uint32_t contentType, hstring displayName, hstring description, hstring publisher, hstring version)
            : title(title), content(content), product(product), packageFullName(packageFullName), contentType(contentType),
            displayName(displayName), description(description), publisher(publisher), version(version) {}

        hstring TitleId();
        hstring ContentId();
        hstring ProductId();
        hstring PackageFullName();
        uint32_t ContentType();
        hstring DisplayName();
        hstring Description();
        hstring Publisher();
        hstring Version();
    private:
        hstring title;
        hstring content;
        hstring product;
        hstring packageFullName;
        uint32_t contentType;
        hstring displayName;
        hstring description;
        hstring publisher;
        hstring version;
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
