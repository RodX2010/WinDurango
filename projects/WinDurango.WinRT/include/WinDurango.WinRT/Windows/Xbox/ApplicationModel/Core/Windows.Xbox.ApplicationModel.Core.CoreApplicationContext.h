#pragma once
#include "Windows.Xbox.ApplicationModel.Core.CoreApplicationContext.g.h"
#include <winrt/Windows.Foundation.h>

namespace winrt::Windows::Xbox::ApplicationModel::Core::implementation
{
    struct CoreApplicationContext : CoreApplicationContextT<CoreApplicationContext>
    {
        CoreApplicationContext() = default;

        winrt::Windows::Xbox::System::User CurrentUser();
        winrt::event_token CurrentUserChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        void CurrentUserChanged(winrt::event_token const& token) noexcept;
    private:
        winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>> e_CurrentUserChanged;
    };
}
namespace winrt::Windows::Xbox::ApplicationModel::Core::factory_implementation
{
    struct CoreApplicationContext : CoreApplicationContextT<CoreApplicationContext, implementation::CoreApplicationContext>
    {
    };
}
