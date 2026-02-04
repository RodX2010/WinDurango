#include "Windows.Xbox.ApplicationModel.Store.ProductPurchasedEventArgs.h"

namespace winrt::Windows::Xbox::ApplicationModel::Store::implementation
{
    hstring ProductPurchasedEventArgs::Receipt()
    {
        return receipt;
    }
}
