#include "Windows.Xbox.Management.Deployment.DownloadableContentPackageManager.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::hresult LicenseTerminatedEventArgs::Reason()
    {
        return reason;
    }

    hstring LicenseTerminatedEventArgs::PackageFullName()
    {
        return packageFullName;
    }
    
    hstring LicenseTerminatedEventArgs::UserXuidIfCausedBySignout()
    {
        return userXuid;
    }
    
    winrt::Windows::Xbox::Management::Deployment::TransferOperationType DownloadableContentPackageInstallCompletedEventArgs::OperationType()
    {
        return operationType;
    }
    
    hstring DownloadableContentPackageInstallCompletedEventArgs::PackageFullName()
    {
        return packageFullName;
    }
    
    winrt::guid DownloadableContentPackageInstallCompletedEventArgs::ContentId()
    {
        return contentId;
    }
    
    winrt::hresult DownloadableContentPackageInstallCompletedEventArgs::Result()
    {
        return result;
    }
    
    hstring DownloadableContentPackage::TitleId()
    {
        return title;
    }
    
    hstring DownloadableContentPackage::ContentId()
    {
        return content;
    }
    
    hstring DownloadableContentPackage::ProductId()
    {
        return product;
    }
    
    hstring DownloadableContentPackage::PackageFullName()
    {
        return packageFullName;
    }
    
    hstring DownloadableContentPackage::MountPath()
    {
        return mountPath;
    }
    
    bool DownloadableContentPackage::IsMounted()
    {
        return isMounted;
    }
    
    uint32_t DownloadableContentPackage::ContentType()
    {
        return contentType;
    }
    
    hstring DownloadableContentPackage::DisplayName()
    {
        return displayName;
    }
    
    hstring DownloadableContentPackage::Description()
    {
        return description;
    }
    
    hstring DownloadableContentPackage::Publisher()
    {
        return publisher;
    }
    
    hstring DownloadableContentPackage::Version()
    {
        return version;
    }
    
    hstring DownloadableContentPackage::Mount()
    {
        return mount;
    }
    
    void DownloadableContentPackage::Unmount()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: Unmount");
        mount = L"";
    }
    
    void DownloadableContentPackage::CheckLicense(bool& isTrial, bool& hasLicence)
    {
        isTrial = false;
        hasLicence = true;
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: CheckLicence");
    }
    
    winrt::event_token DownloadableContentPackage::LicenseTerminated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackage, winrt::Windows::Xbox::Management::Deployment::LicenseTerminatedEventArgs> const& handler)
    {
        return e_LicenseTerminated.add(handler);
    }
    
    void DownloadableContentPackage::LicenseTerminated(winrt::event_token const& token) noexcept
    {
        e_LicenseTerminated.remove(token);
    }
    
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackage> DownloadableContentPackageManager::FindPackages(winrt::Windows::Xbox::Management::Deployment::InstalledPackagesFilter const& unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Management::Deployment", "Unimplemented: FindPackages");
        throw hresult_not_implemented();
    }
    
    winrt::event_token DownloadableContentPackageManager::DownloadableContentPackageInstallCompleted(winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackageInstallCompletedEventHandler const& handler)
    {
       return e_DownloadableContentPackageInstallCompleted.add(handler);
    }
    
    void DownloadableContentPackageManager::DownloadableContentPackageInstallCompleted(winrt::event_token const& token) noexcept
    {
        e_DownloadableContentPackageInstallCompleted.remove(token);
    }
    
    winrt::event_token DownloadableContentPackageManager::DownloadableContentPackageInstallCompletedWithDetails(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackageInstallCompletedEventArgs> const& handler)
    {
        return e_DownloadableContentPackageInstallCompletedWithDetails.add(handler);
    }
    
    void DownloadableContentPackageManager::DownloadableContentPackageInstallCompletedWithDetails(winrt::event_token const& token) noexcept
    {
        e_DownloadableContentPackageInstallCompletedWithDetails.remove(token);
    }
}
