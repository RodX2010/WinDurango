#include "Windows.Xbox.ApplicationModel.Core.CoreApplicationContext.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::ApplicationModel::Core::implementation
{
    winrt::Windows::Xbox::System::User CoreApplicationContext::CurrentUser()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::ApplicationModel::Core", "Unimplemented: CurrentUser");
        throw hresult_not_implemented();
    }
    winrt::event_token CoreApplicationContext::CurrentUserChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        return e_CurrentUserChanged.add(handler);
    }
    void CoreApplicationContext::CurrentUserChanged(winrt::event_token const& token) noexcept
    {
        e_CurrentUserChanged.remove(token);
    }
}
