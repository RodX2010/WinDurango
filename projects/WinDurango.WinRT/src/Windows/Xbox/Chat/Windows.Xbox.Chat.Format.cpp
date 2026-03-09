#include "Windows.Xbox.Chat.Format.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    uint32_t Format::BitsPerSample()
    {
        return bitsPerSample;
    }
    void Format::BitsPerSample(uint32_t value)
    {
        bitsPerSample = value;
    }
    uint32_t Format::Bitrate()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::Format", "Unimplemented: Bitrate");
        throw hresult_not_implemented();
    }
    uint32_t Format::ChannelCount()
    {
        return channelCount;
    }
    void Format::ChannelCount(uint32_t value)
    {
        channelCount = value;
    }
    uint32_t Format::SampleRate()
    {
        return sampleRate;
    }
    void Format::SampleRate(uint32_t value)
    {
        sampleRate = value;
    }
    winrt::guid Format::Subtype()
    {
        return subtype;
    }
    void Format::Subtype(winrt::guid const& value)
    {
        subtype = value;
    }
}
