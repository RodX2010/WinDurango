#pragma once
#include <winrt/Windows.Foundation.Collections.h>
#include "WinDurangoWinRT.h"

namespace wd::WinRT
{
    class ConnectedStorage
    {
    public:
        ConnectedStorage(uint32_t id); // User Storage
        ConnectedStorage(); // Machine Storage

        winrt::Windows::Foundation::IAsyncAction DeleteContainer(winrt::hstring containerName);

    private:
        uint32_t userId;
        std::shared_ptr<wd::common::interfaces::storage::Directory> dir;
    };
}