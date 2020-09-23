#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Font.Cpp/src/Rendering/Renderers/GlyphRendererBase.h"

namespace Aspose { namespace Font { namespace Rendering { class IGlyphOutlinePainter; } } }
namespace Aspose { namespace Font { class TransformationMatrix; } }
namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }
namespace Aspose { namespace Font { namespace Rendering { class IGlyphPainter; } } }
namespace Aspose { namespace Font { namespace Utils { class IGlyphPathUtils; } } }

namespace Aspose {

namespace Font {

namespace Renderers {

/// <summary>
/// Represents glyph outline renderer.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS GlyphOutlineRenderer : public Aspose::Font::Renderers::GlyphRendererBase
{
    typedef GlyphOutlineRenderer ThisType;
    typedef Aspose::Font::Renderers::GlyphRendererBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes new <see cref="GlyphOutlineRenderer"></see> object.
    /// </summary>
    /// <param name="painter">Glyph painter.</param>
    ASPOSE_FONT_SHARED_API GlyphOutlineRenderer(System::SharedPtr<Aspose::Font::Rendering::IGlyphOutlinePainter> painter);
    
protected:

    ASPOSE_FONT_SHARED_API void RenderGlyphImpl(System::SharedPtr<TransformationMatrix> finalTransformationMatrix, System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph, System::SharedPtr<Aspose::Font::Rendering::IGlyphPainter> glyphPainter) override;
    /// <summary>
    /// Renders glyph using independent glyph path. RenderGlyph() function family changes glyph path on rendering.
    /// It then leads to necessity reload this glyph again. This function uses independent glyph path and doesn't
    /// changes glyph path, so the same glyph could be reused multiple times. This version of function is intended
    /// for use with cache of glyphs.
    /// </summary>
    /// <param name="finalTransformationMatrix">TransformationMatrix that is applied to glyph coordinates.</param>
    /// <param name="glyph">Glyph to render.</param>
    /// <param name="glyphPainter">IGlyphPainter to render glyph.</param>
    ASPOSE_FONT_SHARED_API void RenderIndependentGlyphPathImpl(System::SharedPtr<TransformationMatrix> finalTransformationMatrix, System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph, System::SharedPtr<Aspose::Font::Rendering::IGlyphPainter> glyphPainter) override;
    
private:

    void RenderGlyphPath(System::SharedPtr<Aspose::Font::Utils::IGlyphPathUtils> pathUtils, System::SharedPtr<TransformationMatrix> finalTransformationMatrix, System::SharedPtr<Aspose::Font::Rendering::IGlyphPainter> glyphPainter);
    
};

} // namespace Renderers
} // namespace Font
} // namespace Aspose


