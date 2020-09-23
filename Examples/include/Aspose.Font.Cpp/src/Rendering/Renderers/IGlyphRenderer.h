#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { class IFont; } }
namespace Aspose { namespace Font { class TransformationMatrix; } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }
namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }

namespace Aspose {

namespace Font {

namespace Renderers {

/// <summary>
/// Interface used to render glyphs.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS IGlyphRenderer : public System::Object
{
    typedef IGlyphRenderer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Renders glyph.
    /// </summary>
    /// <param name="font">The font that contains the glyph.</param>
    /// <param name="glyphIndex">Physical glyph index inside font. Note that this is not a unicode.</param>
    virtual void RenderGlyph(System::SharedPtr<IFont> font, uint32_t glyphIndex) = 0;
    /// <summary>
    /// Renders glyph.
    /// </summary>
    /// <param name="font">The font that contains the glyph.</param>
    /// <param name="glyphIndex">Physical glyph index inside font. Note that this is not a unicode.</param>
    /// <param name="glyphPlacementMatrix">Matrix that is applied to glyph coordinates.</param>
    virtual void RenderGlyph(System::SharedPtr<IFont> font, uint32_t glyphIndex, System::SharedPtr<TransformationMatrix> glyphPlacementMatrix) = 0;
    /// <summary>
    /// Renders glyph.
    /// </summary>
    /// <param name="font">The font that contains the glyph.</param>
    /// <param name="glyphId">Physical glyph index inside font. Note that this is not a unicode.</param>
    virtual void RenderGlyph(System::SharedPtr<IFont> font, System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId) = 0;
    /// <summary>
    /// Renders glyph.
    /// </summary>
    /// <param name="font">The font that contains the glyph.</param>
    /// <param name="glyphId">Physical glyph index inside font. Note that this is not a unicode.</param>
    /// <param name="glyphPlacementMatrix">Matrix that is applied to glyph coordinates.</param>
    virtual void RenderGlyph(System::SharedPtr<IFont> font, System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId, System::SharedPtr<TransformationMatrix> glyphPlacementMatrix) = 0;
    /// <summary>
    /// Renders glyph, an objective of this overloaded version - to be used with cache for glyphs.
    /// </summary>
    /// <param name="font">The font that contains the glyph.</param>
    /// <param name="glyphId">Physical glyph index inside font. Note that this is not a unicode.</param>
    /// <param name="glyph">Glyph to render.</param>
    /// <param name="glyphPlacementMatrix">Matrix that is applied to glyph coordinates.</param>
    virtual void RenderGlyph(System::SharedPtr<IFont> font, System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId, System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph, System::SharedPtr<TransformationMatrix> glyphPlacementMatrix) = 0;
    /// <summary>
    /// Renders glyph using independent glyph path. RenderGlyph() function family changes glyph path on rendering.
    /// It then leads to necessity reload this glyph again. This function uses copy of glyph path and doesn't
    /// changes original glyph path, so the same glyph could be reused multiple times. This version of function is intended
    /// for use with cache of glyphs.
    /// </summary>
    /// <param name="font">The font that contains the glyph.</param>
    /// <param name="glyphId">Physical glyph index inside font. Note that this is not a unicode.</param>
    /// <param name="glyph">Glyph to render.</param>
    /// <param name="glyphPlacementMatrix">Matrix that is applied to glyph coordinates.</param>
    virtual void RenderIndependentGlyphPath(System::SharedPtr<IFont> font, System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId, System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph, System::SharedPtr<TransformationMatrix> glyphPlacementMatrix) = 0;
    
};

} // namespace Renderers
} // namespace Font
} // namespace Aspose


