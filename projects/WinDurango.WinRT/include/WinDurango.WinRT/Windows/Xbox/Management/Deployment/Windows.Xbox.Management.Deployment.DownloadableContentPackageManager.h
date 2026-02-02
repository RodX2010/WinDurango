#pragma once
#include "Windows.Xbox.Management.Deployment.LicenseTerminatedEventArgs.g.h"
#include "Windows.Xbox.Management.Deployment.DownloadableContentPackageInstallCompletedEventArgs.g.h"
#include "Windows.Xbox.Management.Deployment.DownloadableContentPackageManager.g.h"
#include "Windows.Xbox.Management.Deployment.DownloadableContentPackage.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct LicenseTerminatedEventArgs : LicenseTerminatedEventArgsT<LicenseTerminatedEventArgs>
    {
        LicenseTerminatedEventArgs() = default;

        winrt::hresult Reason();
        hstring PackageFullName();
        hstring UserXuidIfCausedBySignout();
    };

    struct DownloadableContentPackageInstallCompletedEventArgs : DownloadableContentPackageInstallCompletedEventArgsT<DownloadableContentPackageInstallCompletedEventArgs>
    {
        DownloadableContentPackageInstallCompletedEventArgs() = default;

        winrt::Windows::Xbox::Management::Deployment::TransferOperationType OperationType();
        hstring PackageFullName();
        winrt::guid ContentId();
        winrt::hresult Result();
    };

    struct DownloadableContentPackageManager : DownloadableContentPackageManagerT<DownloadableContentPackageManager>
    {
        DownloadableContentPackageManager() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackage> FindPackages(winrt::Windows::Xbox::Management::Deployment::InstalledPackagesFilter const& unk);
        winrt::event_token DownloadableContentPackageInstallCompleted(winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackageInstallCompletedEventHandler const& handler);
        void DownloadableContentPackageInstallCompleted(winrt::event_token const& token) noexcept;
        winrt::event_token DownloadableContentPackageInstallCompletedWithDetails(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackageInstallCompletedEventArgs> const& handler);
        void DownloadableContentPackageInstallCompletedWithDetails(winrt::event_token const& token) noexcept;
    };

    struct DownloadableContentPackage : DownloadableContentPackageT<DownloadableContentPackage>
    {
        DownloadableContentPackage() = default;

        hstring TitleId();
        hstring ContentId();
        hstring ProductId();
        hstring PackageFullName();
        hstring MountPath();
        bool IsMounted();
        uint32_t ContentType();
        hstring DisplayName();
        hstring Description();
        hstring Publisher();
        hstring Version();
        hstring Mount();
        void Unmount();
        bool CheckLicense(winrt::Windows::Foundation::IReference<bool> const& unk);
        winrt::event_token LicenseTerminated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackage, winrt::Windows::Xbox::Management::Deployment::LicenseTerminatedEventArgs> const& handler);
        void LicenseTerminated(winrt::event_token const& token) noexcept;
    };
}

namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct DownloadableContentPackageManager : DownloadableContentPackageManagerT<DownloadableContentPackageManager, implementation::DownloadableContentPackageManager>
    {
    };
}
