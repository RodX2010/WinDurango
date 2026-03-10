#include "Windows.Xbox.Chat.ChatSession.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    hstring ChatCaptureSource::Id()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatCaptureSource", "Unimplemented: Id");
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::Format ChatCaptureSource::Format()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatCaptureSource", "Unimplemented: Format");
        throw hresult_not_implemented();
    }
    void ChatCaptureSource::GetNextBuffer(winrt::Windows::Storage::Streams::IBuffer& buffer, winrt::Windows::Xbox::Chat::CaptureBufferStatus& status)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatCaptureSource", "Unimplemented: GetNextBuffer");
        throw hresult_not_implemented();
    }
    void ChatCaptureSource::GetNextBufferWithCorrelationInfo(winrt::Windows::Storage::Streams::IBuffer& buffer, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Chat::ChatUserCorrelation>& info, winrt::Windows::Xbox::Chat::CaptureBufferStatus& status)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatCaptureSource", "Unimplemented: GetNextBufferWithCorrelationInfo");
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatRestriction ChatCaptureSource::GetRelationship(hstring const& targetId)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatCaptureSource", "Unimplemented: GetRelationship");
        throw hresult_not_implemented();
    }
    hstring ChatRenderTarget::Id()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatRenderTarget", "Unimplemented: Id");
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatRestriction ChatRenderTarget::GetRelationship(hstring const& source)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatRenderTarget", "Unimplemented: GetRelationship");
        throw hresult_not_implemented();
    }
    void ChatRenderTarget::BeginMix()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatRenderTarget", "Unimplemented: BeginMix");
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatRestriction ChatRenderTarget::AddMixBuffer(hstring const& source, winrt::Windows::Xbox::Chat::Format const& format, winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatRenderTarget", "Unimplemented: AddMixBuffer");
        throw hresult_not_implemented();
    }
    void ChatRenderTarget::ResetMix()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatRenderTarget", "Unimplemented: ResetMix");
        throw hresult_not_implemented();
    }
    void ChatRenderTarget::SubmitMix()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatRenderTarget", "Unimplemented: SubmitMix");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Chat::ChatCaptureSource> ChatSessionState::CaptureSources()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatSessionState", "Unimplemented: CaptureSources");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Chat::ChatRenderTarget> ChatSessionState::RenderTargets()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatSessionState", "Unimplemented: RenderTargets");
        throw hresult_not_implemented();
    }
    ChatSession::ChatSession(winrt::Windows::Foundation::TimeSpan const& time, winrt::Windows::Xbox::Chat::ChatFeatures const& enabledFeatures)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatSession", "Unimplemented: ChatSession(TimeSpan, ...)");
        throw hresult_not_implemented();
    }
    ChatSession::ChatSession(winrt::Windows::Foundation::TimeSpan const& time, uint32_t processorAffinity, winrt::Windows::Xbox::Chat::ChatFeatures const& enabledFeatures)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatSession", "Unimplemented: ChatSession(TimeSpan, uint32_t, ...)");
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Chat::ChatChannel> ChatSession::Channels()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatSession", "Unimplemented: Channels");
        throw hresult_not_implemented();
    }
    winrt::event_token ChatSession::StateChangedEvent(winrt::Windows::Xbox::Chat::ChatSessionStateChangedHandler const& handler)
    {
        return e_StateChangedEvent.add(handler);
    }
    void ChatSession::StateChangedEvent(winrt::event_token const& token) noexcept
    {
        e_StateChangedEvent.remove(token);
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Chat::ChatSessionState> ChatSession::GetStateAsync()
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatSession", "Unimplemented: GetStateAsync");
        throw hresult_not_implemented();
    }
    int32_t ChatSession::TranscriptionEnabled()
    {
        return transcriptionEnabled;
    }
    void ChatSession::TranscriptionEnabled(int32_t value)
    {
        transcriptionEnabled = value;
    }
    winrt::Windows::Xbox::Chat::ChatEncoder ChatSession::CreateTranscribingEncoder(winrt::Windows::Xbox::Chat::ChatParticipant const& participant, winrt::Windows::Xbox::Chat::Format const& format, winrt::Windows::Xbox::Chat::EncodingQuality const& quality)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatSession", "Unimplemented: CreateTranscribingEncoder");
        throw hresult_not_implemented();
    }
    winrt::event_token ChatSession::TranscribedTextReadyEvent(winrt::Windows::Xbox::Chat::ChatParticipantTranscribedTextReadyHandler const& handler)
    {
        return e_TranscribedTextReadyEvent.add(handler);
    }
    void ChatSession::TranscribedTextReadyEvent(winrt::event_token const& token) noexcept
    {
        e_TranscribedTextReadyEvent.remove(token);
    }
    winrt::Windows::Xbox::Chat::ChatRestriction ChatSession::GetParticipantRelationship(winrt::Windows::Xbox::Chat::ChatParticipant const& source, winrt::Windows::Xbox::Chat::ChatParticipant const& target)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatSession", "Unimplemented: GetParticipantRelationship");
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::AudioDeviceInfo ChatSession::GetDedicatedSynthesisDevice(winrt::Windows::Xbox::Chat::ChatParticipant const& participant)
    {
        p_wd->log.Warn("WinDurango::WinRT::Windows::Xbox::Chat::ChatSession", "Unimplemented: GetDedicatedSynthesisDevice");
        throw hresult_not_implemented();
    }
}
