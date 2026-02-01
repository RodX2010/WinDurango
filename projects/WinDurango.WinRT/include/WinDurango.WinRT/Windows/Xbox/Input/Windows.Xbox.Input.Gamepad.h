#pragma once
#include "Windows.Xbox.Input.Gamepad.g.h"
#include "Windows.Xbox.Input.GamepadAddedEventArgs.g.h"
#include "Windows.Xbox.Input.GamepadRemovedEventArgs.g.h"
#include "Windows.Xbox.Input.GamepadReading.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct GamepadAddedEventArgs : GamepadAddedEventArgsT<GamepadAddedEventArgs>
    {
        GamepadAddedEventArgs() = default;
        GamepadAddedEventArgs(winrt::Windows::Xbox::Input::Gamepad gamepad) : gamepad(gamepad) {} 

        winrt::Windows::Xbox::Input::Gamepad Gamepad();
    private:
        winrt::Windows::Xbox::Input::Gamepad gamepad;
    };

    struct GamepadRemovedEventArgs : GamepadRemovedEventArgsT<GamepadRemovedEventArgs>
    {
        GamepadRemovedEventArgs() = default;
        GamepadRemovedEventArgs(winrt::Windows::Xbox::Input::Gamepad gamepad) : gamepad(gamepad) {} 

        winrt::Windows::Xbox::Input::Gamepad Gamepad();
    private:
        winrt::Windows::Xbox::Input::Gamepad gamepad;
    };
    
    struct GamepadReading : GamepadReadingT<GamepadReading>
    {
        GamepadReading() = default;
        GamepadReading(winrt::Windows::Foundation::DateTime time, winrt::Windows::Xbox::Input::GamepadButtons buttons)
            : time(time), buttons(buttons) {}

        winrt::Windows::Foundation::DateTime Timestamp();
        winrt::Windows::Xbox::Input::GamepadButtons Buttons();
        bool IsDPadUpPressed();
        bool IsDPadDownPressed();
        bool IsDPadLeftPressed();
        bool IsDPadRightPressed();
        bool IsMenuPressed();
        bool IsViewPressed();
        bool IsLeftThumbstickPressed();
        bool IsRightThumbstickPressed();
        bool IsLeftShoulderPressed();
        bool IsRightShoulderPressed();
        bool IsAPressed();
        bool IsBPressed();
        bool IsXPressed();
        bool IsYPressed();
        float LeftTrigger();
        float RightTrigger();
        float LeftThumbstickX();
        float LeftThumbstickY();
        float RightThumbstickX();
        float RightThumbstickY();
    private:
        winrt::Windows::Foundation::DateTime time;
        winrt::Windows::Xbox::Input::GamepadButtons buttons = winrt::Windows::Xbox::Input::GamepadButtons::None;
    };

    struct Gamepad : GamepadT<Gamepad>
    {
        Gamepad() = default;
        Gamepad(uint64_t id) : id(id) {}

        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::Gamepad> Gamepads();
        static winrt::event_token GamepadAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadAddedEventArgs> const& handler);
        static void GamepadAdded(winrt::event_token const& token) noexcept;
        static winrt::event_token GamepadRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadRemovedEventArgs> const& handler);
        static void GamepadRemoved(winrt::event_token const& token) noexcept;
        uint64_t Id();
        hstring Type();
        winrt::Windows::Xbox::System::User User();
        winrt::Windows::Xbox::Input::INavigationReading GetNavigationReading();
        winrt::Windows::Xbox::Input::RawNavigationReading GetRawNavigationReading();
        winrt::Windows::Xbox::Input::GamepadVibration SetVibration();
        winrt::Windows::Xbox::Input::GamepadReading GetCurrentReading();
        winrt::Windows::Xbox::Input::RawGamepadReading GetRawCurrentReading();
    private:
        uint64_t id = 0;
        static winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadAddedEventArgs>> e_GamepadAdded;
        static winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadRemovedEventArgs>> e_GamepadRemoved;
    };
}
namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct Gamepad : GamepadT<Gamepad, implementation::Gamepad>
    {
    };
}
