#include "Windows.Xbox.Management.Deployment.ContentUpdate.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::hresult RequestUpdatePackageResult::Result()
    {
        throw hresult_not_implemented();
    }
    bool CheckForUpdateResult::IsUpdateAvailable()
    {
        throw hresult_not_implemented();
    }
    bool CheckForUpdateResult::IsUpdateMandatory()
    {
        throw hresult_not_implemented();
    }
    uint32_t ChunkCompletedEventArgs::ChunkId()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVector<hstring> ChunkSpecifiers::Languages()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVector<hstring> ChunkSpecifiers::Tags()
    {
        throw hresult_not_implemented();
    }
    hstring ContentPackage::TitleId()
    {
        throw hresult_not_implemented();
    }
    hstring ContentPackage::ContentId()
    {
        throw hresult_not_implemented();
    }
    hstring ContentPackage::ProductId()
    {
        throw hresult_not_implemented();
    }
    hstring ContentPackage::PackageFullName()
    {
        throw hresult_not_implemented();
    }
    uint32_t ContentPackage::ContentType()
    {
        throw hresult_not_implemented();
    }
    hstring ContentPackage::DisplayName()
    {
        throw hresult_not_implemented();
    }
    hstring ContentPackage::Description()
    {
        throw hresult_not_implemented();
    }
    hstring ContentPackage::Publisher()
    {
        throw hresult_not_implemented();
    }
    hstring ContentPackage::Version()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::CheckForUpdateResult> ContentUpdate::CheckForUpdateAsync(winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackage unk)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::RequestUpdatePackageResult> ContentUpdate::RequestUpdatePackageAsync(winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackage unk)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::RequestUpdatePackageResult> ContentUpdate::RequestUpdateCurrentPackageAsync()
    {
        throw hresult_not_implemented();
    }
}
