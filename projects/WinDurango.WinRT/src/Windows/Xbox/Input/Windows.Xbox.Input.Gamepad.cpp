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
        return (int)reading.Buttons & (int)GamepadButtons::DPadUp;
    }
    bool GamepadReading::IsDPadDownPressed()
    {
        return (int)reading.Buttons & (int)GamepadButtons::DPadDown;
    }
    bool GamepadReading::IsDPadLeftPressed()
    {
        return (int)reading.Buttons & (int)GamepadButtons::DPadLeft;
    }
    bool GamepadReading::IsDPadRightPressed()
    {
        return (int)reading.Buttons & (int)GamepadButtons::DPadRight;
    }
    bool GamepadReading::IsMenuPressed()
    {
        return (int)reading.Buttons & (int)GamepadButtons::Menu;
    }
    bool GamepadReading::IsViewPressed()
    {
        return (int)reading.Buttons & (int)GamepadButtons::View;
    }
    bool GamepadReading::IsLeftThumbstickPressed()
    {
        return (int)reading.Buttons & (int)GamepadButtons::LeftThumbstick;
    }
    bool GamepadReading::IsRightThumbstickPressed()
    {
        return (int)reading.Buttons & (int)GamepadButtons::RightThumbstick;
    }
    bool GamepadReading::IsLeftShoulderPressed()
    {
        return (int)reading.Buttons & (int)GamepadButtons::LeftShoulder;
    }
    bool GamepadReading::IsRightShoulderPressed()
    {
        return (int)reading.Buttons & (int)GamepadButtons::RightShoulder;
    }
    bool GamepadReading::IsAPressed()
    {
        return (int)reading.Buttons & (int)GamepadButtons::A;
    }
    bool GamepadReading::IsBPressed()
    {
        return (int)reading.Buttons & (int)GamepadButtons::B;
    }
    bool GamepadReading::IsXPressed()
    {
        return (int)reading.Buttons & (int)GamepadButtons::X;
    }
    bool GamepadReading::IsYPressed()
    {
        return (int)reading.Buttons & (int)GamepadButtons::Y;
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
        return reading.LeftThumbstickX;
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
                XINPUT_CAPABILITIES capabilities{};
                DWORD Result = XInputGetCapabilities(gamepad, XINPUT_FLAG_GAMEPAD, &capabilities);
                if (Result == ERROR_SUCCESS)
                {
                    p_wd->log.Log("WinDurango::WinRT::Windows::Xbox::Input", "Creating gamepad");
                    winrt::Windows::Xbox::Input::Gamepad NewGamepad = winrt::make<Gamepad>(gamepad, true);
                    a_gamepads.Append(NewGamepad);
                    continue;
                }
                else if (Result == ERROR_DEVICE_NOT_CONNECTED)
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
        return 1;
    }

    hstring Gamepad::Type()
    {
        return L"";
    }

    winrt::Windows::Xbox::System::User Gamepad::User()
    {
        p_wd->log.Log("WinDurango::WinRT::Windows::Xbox::Input", "Getting User");
        return winrt::Windows::Xbox::System::implementation::User::Users().GetAt(id);
    }

    winrt::Windows::Xbox::Input::INavigationReading Gamepad::GetNavigationReading()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: GetNavigationReading");
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::Input::RawNavigationReading Gamepad::GetRawNavigationReading()
    {
        RawNavigationReading dummyNavigationReading = RawNavigationReading();
        dummyNavigationReading.Timestamp = GetTickCount64();
        dummyNavigationReading.Buttons |= NavigationButtons::Up;
        return dummyNavigationReading;
    }

    winrt::Windows::Xbox::Input::GamepadVibration Gamepad::SetVibration()
    {
        GamepadVibration Vibration = {};
        Vibration.LeftMotorLevel = 0.0f;
        Vibration.RightMotorLevel = 0.0f;
        Vibration.LeftTriggerLevel = 0.0f;
        Vibration.RightTriggerLevel = 0.0f;
        return Vibration;
    }

    winrt::Windows::Xbox::Input::GamepadReading Gamepad::GetCurrentReading()
    {
        return winrt::make<implementation::GamepadReading>(GetRawCurrentReading());
    }

    winrt::Windows::Xbox::Input::RawGamepadReading Gamepad::GetRawCurrentReading()
    {
        XINPUT_STATE xiState;
        ZeroMemory(&xiState, sizeof(XINPUT_STATE));
        RawGamepadReading reading = {};

        static std::pair<WORD, GamepadButtons> const buttons[] = {
            {XINPUT_GAMEPAD_DPAD_UP, GamepadButtons::DPadUp},
            {XINPUT_GAMEPAD_DPAD_DOWN, GamepadButtons::DPadDown},
            {XINPUT_GAMEPAD_DPAD_LEFT, GamepadButtons::DPadLeft},
            {XINPUT_GAMEPAD_DPAD_RIGHT, GamepadButtons::DPadRight},
            {XINPUT_GAMEPAD_START, GamepadButtons::Menu},
            {XINPUT_GAMEPAD_BACK, GamepadButtons::View},
            {XINPUT_GAMEPAD_LEFT_THUMB, GamepadButtons::LeftThumbstick},
            {XINPUT_GAMEPAD_RIGHT_THUMB, GamepadButtons::RightThumbstick},
            {XINPUT_GAMEPAD_LEFT_SHOULDER, GamepadButtons::LeftShoulder},
            {XINPUT_GAMEPAD_RIGHT_SHOULDER, GamepadButtons::RightShoulder},
            {XINPUT_GAMEPAD_A, GamepadButtons::A},
            {XINPUT_GAMEPAD_B, GamepadButtons::B},
            {XINPUT_GAMEPAD_X, GamepadButtons::X},
            {XINPUT_GAMEPAD_Y, GamepadButtons::Y},
        };

        if (XInputGetState(id, &xiState) == ERROR_SUCCESS)
        {
            for (int i = 0; i < ARRAYSIZE(buttons); i++)
            {
                if (xiState.Gamepad.wButtons & buttons[i].first)
                {
                    reading.Buttons |= buttons[i].second;
                }
            }

            reading.LeftTrigger = xiState.Gamepad.bLeftTrigger / 255.f;
            reading.RightTrigger = xiState.Gamepad.bRightTrigger / 255.f;
            reading.LeftThumbstickX = xiState.Gamepad.sThumbLX / 32768.f;
            reading.LeftThumbstickY = xiState.Gamepad.sThumbLY / 32768.f;
            reading.RightThumbstickX = xiState.Gamepad.sThumbRX / 32768.f;
            reading.RightThumbstickY = xiState.Gamepad.sThumbRY / 32768.f;
        }

        if (GetAsyncKeyState('A'))
            reading.Buttons |= GamepadButtons::A;
        if (GetAsyncKeyState('B'))
            reading.Buttons |= GamepadButtons::B;
        if (GetAsyncKeyState('X'))
            reading.Buttons |= GamepadButtons::X;
        if (GetAsyncKeyState('Y'))
            reading.Buttons |= GamepadButtons::Y;
        if (GetAsyncKeyState(VK_UP))
            reading.Buttons |= GamepadButtons::DPadUp;
        if (GetAsyncKeyState(VK_DOWN))
            reading.Buttons |= GamepadButtons::DPadDown;
        if (GetAsyncKeyState(VK_LEFT))
            reading.Buttons |= GamepadButtons::DPadLeft;
        if (GetAsyncKeyState(VK_RIGHT))
            reading.Buttons |= GamepadButtons::DPadRight;
        if (GetAsyncKeyState(VK_RETURN))
            reading.Buttons |= GamepadButtons::Menu;
        if (GetAsyncKeyState(VK_ESCAPE))
            reading.Buttons |= GamepadButtons::View;
        if (GetAsyncKeyState(VK_LSHIFT))
            reading.Buttons |= GamepadButtons::LeftThumbstick;
        if (GetAsyncKeyState(VK_RSHIFT))
            reading.Buttons |= GamepadButtons::RightThumbstick;
        if (GetAsyncKeyState(VK_LCONTROL))
            reading.Buttons |= GamepadButtons::LeftShoulder;
        if (GetAsyncKeyState(VK_RCONTROL))
            reading.Buttons |= GamepadButtons::RightShoulder;

        return reading;
    }

    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadAddedEventArgs>> Gamepad::e_GamepadAdded{};
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadRemovedEventArgs>> Gamepad::e_GamepadRemoved{};
    winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Xbox::Input::Gamepad> Gamepad::a_gamepads;
}
