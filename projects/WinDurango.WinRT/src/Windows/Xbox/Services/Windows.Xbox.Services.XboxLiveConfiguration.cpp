#include "Windows.Xbox.Services.XboxLiveConfiguration.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::Services::implementation
{
    hstring XboxLiveConfiguration::TitleId()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Services", "Unimplemented: TitleId");
        throw hresult_not_implemented();
    }
    hstring XboxLiveConfiguration::PrimaryServiceConfigId()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Services", "Unimplemented: PrimaryServiceConfigId");
        throw hresult_not_implemented();
    }
    hstring XboxLiveConfiguration::SandboxId()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Services", "Unimplemented: SandboxId");
        throw hresult_not_implemented();
    }
}
