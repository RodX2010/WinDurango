#include "Windows.Xbox.Input.Controller.h"
#include "Windows.Xbox.Input.Gamepad.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    winrt::Windows::Xbox::Input::Controller ControllerAddedEventArgs::Controller()
    {
        return controller;
    }

    winrt::Windows::Xbox::Input::Controller ControllerPairingChangedEventArgs::Controller()
    {
        return controller;
    }

    winrt::Windows::Xbox::System::User ControllerPairingChangedEventArgs::User()
    {
        return user;
    }

    winrt::Windows::Xbox::System::User ControllerPairingChangedEventArgs::PreviousUser()
    {
        return previousUser;
    }

    winrt::Windows::Xbox::Input::Controller ControllerRemovedEventArgs::Controller()
    {
        return controller;
    }

    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::Controller> Controller::Controllers()
    {
        auto vector = winrt::single_threaded_vector<winrt::Windows::Xbox::Input::Controller>();

        for (auto const &gamepad : Gamepad::Gamepads())
        {
            vector.Append(gamepad.as<winrt::Windows::Xbox::Input::Controller>());
        }

        return vector.GetView();
    }

    winrt::event_token Controller::ControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerAddedEventArgs> const& handler)
    {
        return e_ControllerAdded.add(handler);
    }

    void Controller::ControllerAdded(winrt::event_token const& token) noexcept
    {
        e_ControllerAdded.remove(token);
    }

    winrt::event_token Controller::ControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerRemovedEventArgs> const& handler)
    {
        return e_ControllerRemoved.add(handler);
    }

    void Controller::ControllerRemoved(winrt::event_token const& token) noexcept
    {
        e_ControllerRemoved.remove(token);
    }

    winrt::event_token Controller::ControllerPairingChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerPairingChangedEventArgs> const& handler)
    {
        return e_ControllerPairingChanged.add(handler);
    }

    void Controller::ControllerPairingChanged(winrt::event_token const& token) noexcept
    {
        e_ControllerPairingChanged.remove(token);
    }

    winrt::event_token Controller::ControllerOrderChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerOrderChangedEventArgs> const& handler)
    {
        return e_ControllerOrderChanged.add(handler);
    }

    void Controller::ControllerOrderChanged(winrt::event_token const& token) noexcept
    {
        e_ControllerOrderChanged.remove(token);
    }

    winrt::Windows::Xbox::Input::Controller Controller::GetControllerById(uint64_t unk)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: GetControllerById");
        throw hresult_not_implemented();
    }

    void Controller::GetControllerMetadata(uint64_t unk, winrt::Windows::Xbox::Input::MetadataVersion const& version, winrt::Windows::Foundation::Collections::IVector<uint8_t> const& unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: GetControllerMetadata");
        throw hresult_not_implemented();
    }

    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::Controller> Controller::GetControllersOrderedLeftToRight(winrt::Windows::Xbox::Input::ControllerOrderFilter const& filter)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: GetControllersOrderedLeftToRight");
        throw hresult_not_implemented();
    }

    uint64_t Controller::Id()
    {
        return 1;
    }

    hstring Controller::Type()
    {
        return L"";
    }

    winrt::Windows::Xbox::System::User Controller::User()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Input", "Unimplemented: User");
        throw hresult_not_implemented();
    }

    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerAddedEventArgs>> Controller::e_ControllerAdded{};
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerRemovedEventArgs>> Controller::e_ControllerRemoved{};
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerPairingChangedEventArgs>> Controller::e_ControllerPairingChanged{};
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerOrderChangedEventArgs>> Controller::e_ControllerOrderChanged{};
}
