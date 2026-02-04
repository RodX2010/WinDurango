#include "Windows.Xbox.ApplicationModel.Store.Product.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::ApplicationModel::Store::implementation
{
    winrt::Windows::Foundation::IAsyncAction Product::ShowPurchaseAsync(winrt::Windows::Xbox::System::User unk, hstring unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::ApplicationModel::Store", "Unimplemented: ShowPurchaseAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowDetailsAsync(winrt::Windows::Xbox::System::User unk, hstring unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::ApplicationModel::Core", "Unimplemented: ShowDetailsAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowMarketplaceAsync(winrt::Windows::Xbox::System::User unk, winrt::Windows::Xbox::ApplicationModel::Store::ProductItemTypes unka, hstring unkaa, winrt::Windows::Xbox::ApplicationModel::Store::ProductItemTypes unkaaa)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::ApplicationModel::Core", "Unimplemented: ShowMarketplaceAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowRedeemCodeAsync(winrt::Windows::Xbox::System::User unk, hstring unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::ApplicationModel::Core", "Unimplemented: ShowRedeemCodeAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowSubscriptionAsync(winrt::Windows::Xbox::System::User unk, hstring unka, uint32_t unkaa)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::ApplicationModel::Core", "Unimplemented: ShowSubscriptionAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> Product::CheckPrivilegeAsync(winrt::Windows::Xbox::System::User unk, uint32_t unka, bool unkaa, hstring unkaaa)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::ApplicationModel::Core", "Unimplemented: CheckPrivilegeAsync(User, uint32_t, bool, hstring)");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> Product::CheckPrivilegesAsync(winrt::Windows::Xbox::System::User unk, winrt::Windows::Foundation::Collections::IVectorView<uint32_t> unka, bool unkaa, hstring unkaaa)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::ApplicationModel::Core", "Unimplemented: CheckPrivilegesAsync");
        throw hresult_not_implemented();
    }
    winrt::event_token Product::ProductPurchased(winrt::Windows::Xbox::ApplicationModel::Store::ProductPurchasedEventHandler const& handler)
    {
        return e_ProductPurchased.add(handler);
    }
    void Product::ProductPurchased(winrt::event_token const& token) noexcept
    {
        e_ProductPurchased.remove(token);
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowPurchaseForStoreIdAsync(winrt::Windows::Xbox::System::User unk, hstring unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::ApplicationModel::Core", "Unimplemented: ShowPurchaseForStoreIdAsync");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Product::ShowDetailsForStoreIdAsync(winrt::Windows::Xbox::System::User unk, hstring unka)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::ApplicationModel::Core", "Unimplemented: ShowDetailsForStoreIdAsync");
        throw hresult_not_implemented();
    }

    winrt::event<winrt::Windows::Xbox::ApplicationModel::Store::ProductPurchasedEventHandler> Product::e_ProductPurchased{};
}
