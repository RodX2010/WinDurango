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
        return reading.Buttons;
    }

    bool GamepadReading::IsDPadUpPressed()
    {
        return (reading.Buttons & GamepadButtons::DPadUp) != GamepadButtons::None;
    }

    bool GamepadReading::IsDPadDownPressed()
    {
        return (reading.Buttons & GamepadButtons::DPadDown) != GamepadButtons::None;
    }

    bool GamepadReading::IsDPadLeftPressed()
    {
        return (reading.Buttons & GamepadButtons::DPadLeft) != GamepadButtons::None;
    }

    bool GamepadReading::IsDPadRightPressed()
    {
        return (reading.Buttons & GamepadButtons::DPadRight) != GamepadButtons::None;
    }

    bool GamepadReading::IsMenuPressed()
    {
        return (reading.Buttons & GamepadButtons::Menu) != GamepadButtons::None;
    }

    bool GamepadReading::IsViewPressed()
    {
        return (reading.Buttons & GamepadButtons::View) != GamepadButtons::None;
    }

    bool GamepadReading::IsLeftThumbstickPressed()
    {
        return (reading.Buttons & GamepadButtons::LeftThumbstick) != GamepadButtons::None;
    }

    bool GamepadReading::IsRightThumbstickPressed()
    {
        return (reading.Buttons & GamepadButtons::RightThumbstick) != GamepadButtons::None;
    }

    bool GamepadReading::IsLeftShoulderPressed()
    {
        return (reading.Buttons & GamepadButtons::LeftShoulder) != GamepadButtons::None;
    }

    bool GamepadReading::IsRightShoulderPressed()
    {
        return (reading.Buttons & GamepadButtons::RightShoulder) != GamepadButtons::None;
    }

    bool GamepadReading::IsAPressed()
    {
        return (reading.Buttons & GamepadButtons::A) != GamepadButtons::None;
    }

    bool GamepadReading::IsBPressed()
    {
        return (reading.Buttons & GamepadButtons::B) != GamepadButtons::None;
    }

    bool GamepadReading::IsXPressed()
    {
        return (reading.Buttons & GamepadButtons::X) != GamepadButtons::None;
    }

    bool GamepadReading::IsYPressed()
    {
        return (reading.Buttons & GamepadButtons::Y) != GamepadButtons::None;
    }

    float GamepadReading::LeftTrigger()
    {
        return reading.LeftTrigger;
    }

    float GamepadReading::RightTrigger()
    {
        return reading.RightTrigger;
    }

    float GamepadReading::LeftThumbstickX()
    {
        return reading.LeftTrigger;
    }

    float GamepadReading::LeftThumbstickY()
    {
        return reading.LeftThumbstickY;
    }

    float GamepadReading::RightThumbstickX()
    {
        return reading.RightThumbstickX;
    }

    float GamepadReading::RightThumbstickY()
    {
        return reading.RightThumbstickY;
    }

    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::Gamepad> Gamepad::Gamepads()
    {
        if (a_gamepads == winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Xbox::Input::Gamepad>(nullptr) || a_gamepads.Size() == 0)
        {
            a_gamepads = winrt::single_threaded_vector<winrt::Windows::Xbox::Input::Gamepad>();

            p_wd->log.Log("WinDurango::WinRT::Windows::Xbox::Input", "Creating static a_gamepads");

            for (DWORD gamepad = 0; gamepad < XUSER_MAX_COUNT; gamepad++)
            {
                XINPUT_CAPABILITIES capabilities;
                if (XInputGetCapabilities(gamepad, XINPUT_FLAG_GAMEPAD, &capabilities) == ERROR_SUCCESS)
                {
                    p_wd->log.Log("WinDurango::WinRT::Windows::Xbox::Input", "Creating gamepad");
                    winrt::Windows::Xbox::Input::Gamepad NewGamepad = winrt::make<Gamepad>(gamepad, true);
                    a_gamepads.Append(NewGamepad);
                    continue;
                }
            }
        }

        return a_gamepads.GetView();
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
        return L"";
    }

    winrt::Windows::Xbox::System::User Gamepad::User()
    {
        p_wd->log.Log("WinDurango::WinRT::Windows::Xbox::Input", "Getting User");
        return winrt::Windows::Xbox::System::User::Users().GetAt(id);
    }

    winrt::Windows::Xbox::Input::INavigationReading Gamepad::GetNavigationReading()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: GetNavigationReading");
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::Input::RawNavigationReading Gamepad::GetRawNavigationReading()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: GetRawNavigationReading");
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::Input::GamepadVibration Gamepad::SetVibration()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: SetVibration");
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::Input::GamepadReading Gamepad::GetCurrentReading()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: GetCurrentReading");
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::Input::RawGamepadReading Gamepad::GetRawCurrentReading()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: GetRawCurrentReading");
        throw hresult_not_implemented();
    }

    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadAddedEventArgs>> Gamepad::e_GamepadAdded{};
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadRemovedEventArgs>> Gamepad::e_GamepadRemoved{};
    winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Xbox::Input::Gamepad> Gamepad::a_gamepads;
}
