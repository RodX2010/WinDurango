#include "Windows.Xbox.Chat.ChatEncoder.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    ChatEncoder::ChatEncoder(winrt::Windows::Xbox::Chat::Format const& format, winrt::Windows::Xbox::Chat::EncodingQuality const& quality)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatEncoder", "Unimplemented: ChatEncoder");
        throw hresult_not_implemented();
    }
    void ChatEncoder::Encode(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Storage::Streams::IBuffer& encodedBuffer)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatEncoder", "Unimplemented: Encode");
        throw hresult_not_implemented();
    }
    int32_t ChatEncoder::IsDataInFlight()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatEncoder", "Unimplemented: IsDataInFlight");
        throw hresult_not_implemented();
    }
    void ChatEncoder::Encode(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Xbox::Chat::ChatBufferSource const& source, winrt::Windows::Storage::Streams::IBuffer& encodedBuffer, winrt::Windows::Xbox::Chat::ChatBufferSource& encodedSource)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatEncoder", "Unimplemented: Encode");
        throw hresult_not_implemented();
    }
}
