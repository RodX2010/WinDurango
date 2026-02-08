#include "Windows.Xbox.Storage.ConnectedStorage.h"

namespace wd::WinRT
{
    ConnectedStorage::ConnectedStorage(uint32_t id) : userId(id)
    {
        std::shared_ptr<wd::common::interfaces::storage::Directory> usersDir = p_wd->rootDir->CreateFolder("Users");
        dir = usersDir->CreateFolder("User_" + std::to_string(id));
    }

    ConnectedStorage::ConnectedStorage()
    {
        dir = p_wd->rootDir->CreateFolder("Machine");
    }

    winrt::Windows::Foundation::IAsyncAction ConnectedStorage::DeleteContainer(winrt::hstring containerName)
    {
        bool exists = dir->dirExists(winrt::to_string(containerName));
        if (exists)
        {
            try
            {
                dir->CreateFolder(std::filesystem::path(containerName.c_str()))->remove();
                p_wd->log.Log("WinDurango::WinRT::Windows::Xbox::Storage", "Deleted Container");
            }
            catch (winrt::hresult_error const& ex)
            {
                p_wd->log.Log("WinDurango::WinRT::Windows::Xbox::Storage", "Failed to Deleted Container - {}: {}", winrt::to_string(containerName).c_str(), winrt::to_string(ex.message()).c_str());
                throw;
            }
        } else {
            p_wd->log.Log("WinDurango::WinRT::Windows::Xbox::Storage", "Failed to delete non-existent container");
        }

        co_return;
    }
}