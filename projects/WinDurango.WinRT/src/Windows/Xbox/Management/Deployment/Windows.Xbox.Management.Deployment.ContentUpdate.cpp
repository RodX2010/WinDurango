#include "Windows.Xbox.Management.Deployment.ContentUpdate.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::hresult RequestUpdatePackageResult::Result()
    {
        return result;
    }

    bool CheckForUpdateResult::IsUpdateAvailable()
    {
        return updateAvail;
    }

    bool CheckForUpdateResult::IsUpdateMandatory()
    {
        return updateMandatory;
    }

    uint32_t ChunkCompletedEventArgs::ChunkId()
    {
        return chunkID;
    }

    winrt::Windows::Foundation::Collections::IVector<hstring> ChunkSpecifiers::Languages()
    {
        return langs;
    }

    winrt::Windows::Foundation::Collections::IVector<hstring> ChunkSpecifiers::Tags()
    {
        return tags;
    }

    hstring ContentPackage::TitleId()
    {
        return title;
    }

    hstring ContentPackage::ContentId()
    {
        return content;
    }

    hstring ContentPackage::ProductId()
    {
        return product;
    }

    hstring ContentPackage::PackageFullName()
    {
        return packageFullName;
    }

    uint32_t ContentPackage::ContentType()
    {
        return contentType;
    }

    hstring ContentPackage::DisplayName()
    {
        return displayName;
    }

    hstring ContentPackage::Description()
    {
        return description;
    }

    hstring ContentPackage::Publisher()
    {
        return publisher;
    }

    hstring ContentPackage::Version()
    {
        return version;
    }

    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::CheckForUpdateResult> ContentUpdate::CheckForUpdateAsync(winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackage unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: CheckForUpdateAsync");
        throw hresult_not_implemented();
    }

    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::RequestUpdatePackageResult> ContentUpdate::RequestUpdatePackageAsync(winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackage unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: RequestUpdatePackageAsync(DownloadableContentPackage)");
        throw hresult_not_implemented();
    }
    
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Management::Deployment::RequestUpdatePackageResult> ContentUpdate::RequestUpdateCurrentPackageAsync()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: RequestUpdateCurrentPackageAsync");
        throw hresult_not_implemented();
    }
}
