#include "Windows.Kinect.FrameDescription.h"
#include "WinDurangoKinect.h"

namespace winrt::Windows::Kinect::implementation
{
    int32_t FrameDescription::Width()
    {
        p_wd->log.Warn("WinDurango::Kinect::Windows::Kinect", "Unimplemented: Width");
        throw hresult_not_implemented();
    }
    int32_t FrameDescription::Height()
    {
        p_wd->log.Warn("WinDurango::Kinect::Windows::Kinect", "Unimplemented: Height");
        throw hresult_not_implemented();
    }
    float FrameDescription::HorizontalFieldOfView()
    {
        p_wd->log.Warn("WinDurango::Kinect::Windows::Kinect", "Unimplemented: HorizontalFieldOfView");
        throw hresult_not_implemented();
    }
    float FrameDescription::VerticalFieldOfView()
    {
        p_wd->log.Warn("WinDurango::Kinect::Windows::Kinect", "Unimplemented: VerticalFieldOfView");
        throw hresult_not_implemented();
    }
    float FrameDescription::DiagonalFieldOfView()
    {
        p_wd->log.Warn("WinDurango::Kinect::Windows::Kinect", "Unimplemented: DiagonalFieldOfView");
        throw hresult_not_implemented();
    }
    uint32_t FrameDescription::LengthInPixels()
    {
        p_wd->log.Warn("WinDurango::Kinect::Windows::Kinect", "Unimplemented: LengthInPixels");
        throw hresult_not_implemented();
    }
    uint32_t FrameDescription::BytesPerPixel()
    {
        p_wd->log.Warn("WinDurango::Kinect::Windows::Kinect", "Unimplemented: BytesPerPixel");
        throw hresult_not_implemented();
    }
}
