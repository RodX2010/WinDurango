#include "Windows.Xbox.Chat.ChatDecoder.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    winrt::Windows::Xbox::Chat::Format ChatDecoder::Format()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatDecoder", "Unimplemented: Format");
        throw hresult_not_implemented();
    }
    void ChatDecoder::Decode(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Storage::Streams::IBuffer& decodedBuffer)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatDecoder", "Unimplemented: Decode");
        throw hresult_not_implemented();
    }
    int32_t ChatDecoder::IsDataInFlight()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatDecoder", "Unimplemented: IsDataInFlight");
        throw hresult_not_implemented();
    }
}
