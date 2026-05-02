#include "Windows.Xbox.System.UserDisplayInfo.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::System::implementation
{
    winrt::Windows::Xbox::System::User UserDisplayInfoChangedEventArgs::User()
    {
        return user;
    }

    hstring UserDisplayInfo::Gamertag()
    {
        return gamertag + m_id;
    }

    uint32_t UserDisplayInfo::GamerScore()
    {
        return gamerscore;
    }

    hstring UserDisplayInfo::ApplicationDisplayName()
    {
        return appDisplayName + m_id;
    }

    hstring UserDisplayInfo::GameDisplayName()
    {
        return gameDisplayName + m_id;
    }

    uint32_t UserDisplayInfo::Reputation()
    {
        return reputation;
    }

    winrt::Windows::Xbox::System::UserAgeGroup UserDisplayInfo::AgeGroup()
    {
        return ageGroup;
    }

    winrt::Windows::Foundation::Collections::IVectorView<uint32_t> UserDisplayInfo::Privileges()
    {
        return privileges;
    }

    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetPictureResult> UserDisplayInfo::GetApplicationPictureAsync(winrt::Windows::Xbox::System::UserPictureSize unk, winrt::Windows::Storage::Streams::IBuffer unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::System", "Unimplemented: GetApplicationPictureAsync");
        throw hresult_not_implemented();
    }

    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetPictureResult> UserDisplayInfo::GetGamerPictureAsync(winrt::Windows::Xbox::System::UserPictureSize unk, winrt::Windows::Storage::Streams::IBuffer unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::System", "Unimplemented: GetGamerPictureAsync");
        throw hresult_not_implemented();
    }
}
