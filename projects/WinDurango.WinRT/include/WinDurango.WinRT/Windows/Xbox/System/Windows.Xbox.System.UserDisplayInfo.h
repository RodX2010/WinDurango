#pragma once
#include "Windows.Xbox.System.UserDisplayInfo.g.h"
#include "Windows.Xbox.System.UserDisplayInfoChangedEventArgs.g.h"

namespace winrt::Windows::Xbox::System::implementation
{
    struct UserDisplayInfoChangedEventArgs : UserDisplayInfoChangedEventArgsT<UserDisplayInfoChangedEventArgs>
    {
        UserDisplayInfoChangedEventArgs() = default;
        UserDisplayInfoChangedEventArgs(winrt::Windows::Xbox::System::User user) : user(user) {}

        winrt::Windows::Xbox::System::User User();
    private:
        winrt::Windows::Xbox::System::User user;
    };
    
    struct UserDisplayInfo : UserDisplayInfoT<UserDisplayInfo>
    {
        UserDisplayInfo() = default;
        UserDisplayInfo(hstring gamertag, uint32_t gamerscore, hstring appDisplayName, hstring gameDisplayName, uint32_t reputation, 
            winrt::Windows::Xbox::System::UserAgeGroup ageGroup, winrt::Windows::Foundation::Collections::IVectorView<uint32_t> privileges) 
            : gamertag(gamertag), gamerscore(gamerscore), appDisplayName(appDisplayName), gameDisplayName(gameDisplayName), reputation(reputation),
            ageGroup(ageGroup), privileges(privileges) {}

        hstring Gamertag();
        uint32_t GamerScore();
        hstring ApplicationDisplayName();
        hstring GameDisplayName();
        uint32_t Reputation();
        winrt::Windows::Xbox::System::UserAgeGroup AgeGroup();
        winrt::Windows::Foundation::Collections::IVectorView<uint32_t> Privileges();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetPictureResult> GetApplicationPictureAsync(winrt::Windows::Xbox::System::UserPictureSize unk, winrt::Windows::Storage::Streams::IBuffer unka);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetPictureResult> GetGamerPictureAsync(winrt::Windows::Xbox::System::UserPictureSize unk, winrt::Windows::Storage::Streams::IBuffer unka);
    private:
        hstring gamertag = L"WinDurango2";
        uint32_t gamerscore = 2419;
        hstring appDisplayName = L"";
        hstring gameDisplayName = L"";
        uint32_t reputation = 0;
        winrt::Windows::Xbox::System::UserAgeGroup ageGroup = winrt::Windows::Xbox::System::UserAgeGroup::Adult;
        winrt::Windows::Foundation::Collections::IVectorView<uint32_t> privileges = {0};
    };
}
