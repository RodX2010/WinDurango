#include "Windows.Xbox.ApplicationModel.Store.Configuration.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::ApplicationModel::Store::implementation
{
    hstring Configuration::MarketplaceId()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::ApplicationModel::Store", "Unimplemented: MarketplaceId");
        throw hresult_not_implemented();
    }
}
