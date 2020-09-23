#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.Font.Cpp/src/Rendering/IGlyphPainter.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace RenderingPath { class MoveTo; } } }
namespace Aspose { namespace Font { namespace RenderingPath { class LineTo; } } }
namespace Aspose { namespace Font { namespace RenderingPath { class CurveTo; } } }

namespace Aspose {

namespace Font {

namespace Rendering {

/// <summary>
/// Defines a way to draw glyphs.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS IGlyphOutlinePainter : public Aspose::Font::Rendering::IGlyphPainter
{
    typedef IGlyphOutlinePainter ThisType;
    typedef Aspose::Font::Rendering::IGlyphPainter BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Processes MoveTo operation.
    /// </summary>
    /// <param name="moveTo">MoveTo reference</param>
    virtual void MoveTo(System::SharedPtr<Aspose::Font::RenderingPath::MoveTo> moveTo) = 0;
    /// <summary>
    /// Processes LineTo operation.
    /// </summary>
    /// <param name="lineTo">LineTo reference</param>
    virtual void LineTo(System::SharedPtr<Aspose::Font::RenderingPath::LineTo> lineTo) = 0;
    /// <summary>
    /// Processes CurveTo operation.
    /// </summary>
    /// <param name="curveTo">CurveTo reference</param>
    virtual void CurveTo(System::SharedPtr<Aspose::Font::RenderingPath::CurveTo> curveTo) = 0;
    /// <summary>
    /// Processes ClosePath operation.
    /// </summary>
    virtual void ClosePath() = 0;
    
};

} // namespace Rendering
} // namespace Font
} // namespace Aspose


