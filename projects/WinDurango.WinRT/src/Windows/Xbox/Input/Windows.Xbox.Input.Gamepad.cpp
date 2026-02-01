#include "Windows.Xbox.Input.Gamepad.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    winrt::Windows::Xbox::Input::Gamepad GamepadAddedEventArgs::Gamepad()
    {
        return gamepad;
    }

    winrt::Windows::Xbox::Input::Gamepad GamepadRemovedEventArgs::Gamepad()
    {
        return gamepad;
    }

    winrt::Windows::Foundation::DateTime GamepadReading::Timestamp()
    {
        return time;
    }

    winrt::Windows::Xbox::Input::GamepadButtons GamepadReading::Buttons()
    {
        return buttons;
    }

    bool GamepadReading::IsDPadUpPressed()
    {
        return (buttons & GamepadButtons::DPadUp) != GamepadButtons::None;
    }

    bool GamepadReading::IsDPadDownPressed()
    {
        return (buttons & GamepadButtons::DPadDown) != GamepadButtons::None;
    }

    bool GamepadReading::IsDPadLeftPressed()
    {
        return (buttons & GamepadButtons::DPadLeft) != GamepadButtons::None;
    }

    bool GamepadReading::IsDPadRightPressed()
    {
        return (buttons & GamepadButtons::DPadRight) != GamepadButtons::None;
    }

    bool GamepadReading::IsMenuPressed()
    {
        return (buttons & GamepadButtons::Menu) != GamepadButtons::None;
    }

    bool GamepadReading::IsViewPressed()
    {
        return (buttons & GamepadButtons::View) != GamepadButtons::None;
    }

    bool GamepadReading::IsLeftThumbstickPressed()
    {
        return (buttons & GamepadButtons::LeftThumbstick) != GamepadButtons::None;
    }

    bool GamepadReading::IsRightThumbstickPressed()
    {
        return (buttons & GamepadButtons::RightThumbstick) != GamepadButtons::None;
    }

    bool GamepadReading::IsLeftShoulderPressed()
    {
        return (buttons & GamepadButtons::LeftShoulder) != GamepadButtons::None;
    }

    bool GamepadReading::IsRightShoulderPressed()
    {
        return (buttons & GamepadButtons::RightShoulder) != GamepadButtons::None;
    }

    bool GamepadReading::IsAPressed()
    {
        return (buttons & GamepadButtons::A) != GamepadButtons::None;
    }

    bool GamepadReading::IsBPressed()
    {
        return (buttons & GamepadButtons::B) != GamepadButtons::None;
    }

    bool GamepadReading::IsXPressed()
    {
        return (buttons & GamepadButtons::X) != GamepadButtons::None;
    }

    bool GamepadReading::IsYPressed()
    {
        return (buttons & GamepadButtons::Y) != GamepadButtons::None;
    }

    float GamepadReading::LeftTrigger()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: LeftTrigger");
        return 0.0f;
    }

    float GamepadReading::RightTrigger()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: RightTrigger");
        return 0.0f;
    }

    float GamepadReading::LeftThumbstickX()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: LeftThumbstickX");
        return 0.0f;
    }

    float GamepadReading::LeftThumbstickY()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: LeftThumbstickY");
        return 0.0f;
    }

    float GamepadReading::RightThumbstickX()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: RightThumbstickX");
        return 0.0f;
    }

    float GamepadReading::RightThumbstickY()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: RightThumbstickY");
        return 0.0f;
    }

    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::Gamepad> Gamepad::Gamepads()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: Gamepads");
        throw hresult_not_implemented();
    }

    winrt::event_token Gamepad::GamepadAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadAddedEventArgs> const& handler)
    {
        return e_GamepadAdded.add(handler);
    }

    void Gamepad::GamepadAdded(winrt::event_token const& token) noexcept
    {
        e_GamepadAdded.remove(token);
    }

    winrt::event_token Gamepad::GamepadRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadRemovedEventArgs> const& handler)
    {
        return e_GamepadRemoved.add(handler);
    }

    void Gamepad::GamepadRemoved(winrt::event_token const& token) noexcept
    {
        e_GamepadRemoved.remove(token);
    }

    uint64_t Gamepad::Id()
    {
        return id;
    }

    hstring Gamepad::Type()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: RightThumbstickY");
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::System::User Gamepad::User()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: RightThumbstickY");
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::Input::INavigationReading Gamepad::GetNavigationReading()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: RightThumbstickY");
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::Input::RawNavigationReading Gamepad::GetRawNavigationReading()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: RightThumbstickY");
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::Input::GamepadVibration Gamepad::SetVibration()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: RightThumbstickY");
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::Input::GamepadReading Gamepad::GetCurrentReading()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: RightThumbstickY");
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::Input::RawGamepadReading Gamepad::GetRawCurrentReading()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: RightThumbstickY");
        throw hresult_not_implemented();
    }

    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadAddedEventArgs>> Gamepad::e_GamepadAdded{};
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadRemovedEventArgs>> Gamepad::e_GamepadRemoved{};
}
