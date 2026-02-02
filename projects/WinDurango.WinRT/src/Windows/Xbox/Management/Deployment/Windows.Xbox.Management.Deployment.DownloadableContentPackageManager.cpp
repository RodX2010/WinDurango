#include "Windows.Xbox.Management.Deployment.DownloadableContentPackageManager.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::hresult LicenseTerminatedEventArgs::Reason()
    {
        throw hresult_not_implemented();
    }
    hstring LicenseTerminatedEventArgs::PackageFullName()
    {
        throw hresult_not_implemented();
    }
    hstring LicenseTerminatedEventArgs::UserXuidIfCausedBySignout()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::TransferOperationType DownloadableContentPackageInstallCompletedEventArgs::OperationType()
    {
        throw hresult_not_implemented();
    }
    hstring DownloadableContentPackageInstallCompletedEventArgs::PackageFullName()
    {
        throw hresult_not_implemented();
    }
    winrt::guid DownloadableContentPackageInstallCompletedEventArgs::ContentId()
    {
        throw hresult_not_implemented();
    }
    winrt::hresult DownloadableContentPackageInstallCompletedEventArgs::Result()
    {
        throw hresult_not_implemented();
    }
    hstring DownloadableContentPackage::TitleId()
    {
        throw hresult_not_implemented();
    }
    hstring DownloadableContentPackage::ContentId()
    {
        throw hresult_not_implemented();
    }
    hstring DownloadableContentPackage::ProductId()
    {
        throw hresult_not_implemented();
    }
    hstring DownloadableContentPackage::PackageFullName()
    {
        throw hresult_not_implemented();
    }
    hstring DownloadableContentPackage::MountPath()
    {
        throw hresult_not_implemented();
    }
    bool DownloadableContentPackage::IsMounted()
    {
        throw hresult_not_implemented();
    }
    uint32_t DownloadableContentPackage::ContentType()
    {
        throw hresult_not_implemented();
    }
    hstring DownloadableContentPackage::DisplayName()
    {
        throw hresult_not_implemented();
    }
    hstring DownloadableContentPackage::Description()
    {
        throw hresult_not_implemented();
    }
    hstring DownloadableContentPackage::Publisher()
    {
        throw hresult_not_implemented();
    }
    hstring DownloadableContentPackage::Version()
    {
        throw hresult_not_implemented();
    }
    hstring DownloadableContentPackage::Mount()
    {
        throw hresult_not_implemented();
    }
    void DownloadableContentPackage::Unmount()
    {
        throw hresult_not_implemented();
    }
    bool DownloadableContentPackage::CheckLicense(winrt::Windows::Foundation::IReference<bool> const& unk)
    {
        throw hresult_not_implemented();
    }
    winrt::event_token DownloadableContentPackage::LicenseTerminated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackage, winrt::Windows::Xbox::Management::Deployment::LicenseTerminatedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void DownloadableContentPackage::LicenseTerminated(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackage> DownloadableContentPackageManager::FindPackages(winrt::Windows::Xbox::Management::Deployment::InstalledPackagesFilter const& unk)
    {
        throw hresult_not_implemented();
    }
    winrt::event_token DownloadableContentPackageManager::DownloadableContentPackageInstallCompleted(winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackageInstallCompletedEventHandler const& handler)
    {
        throw hresult_not_implemented();
    }
    void DownloadableContentPackageManager::DownloadableContentPackageInstallCompleted(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token DownloadableContentPackageManager::DownloadableContentPackageInstallCompletedWithDetails(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackageInstallCompletedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void DownloadableContentPackageManager::DownloadableContentPackageInstallCompletedWithDetails(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
}
