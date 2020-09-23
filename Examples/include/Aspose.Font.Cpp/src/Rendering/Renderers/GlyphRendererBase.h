#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/Rendering/Renderers/IGlyphRenderer.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Renderers { class GlyphOutlineRenderer; } } }
namespace Aspose { namespace Font { namespace Rendering { class IGlyphPainter; } } }
namespace Aspose { namespace Font { class IFont; } }
namespace Aspose { namespace Font { class TransformationMatrix; } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }
namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }

namespace Aspose {

namespace Font {

namespace Renderers {

/// <summary>
/// Represents base class for glyph renderers.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS GlyphRendererBase : public Aspose::Font::Renderers::IGlyphRenderer
{
    typedef GlyphRendererBase ThisType;
    typedef Aspose::Font::Renderers::IGlyphRenderer BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Renderers::GlyphOutlineRenderer;
    
public:

    /// <summary>
    /// Renders glyph.
    /// </summary>
    /// <param name="font">The Font that contains the glyph.</param>
    /// <param name="glyphIndex">Physical glyph index inside Font. Note that this is not a unicode.</param>
    ASPOSE_FONT_SHARED_API void RenderGlyph(System::SharedPtr<IFont> font, uint32_t glyphIndex) override;
    /// <summary>
    /// Renders glyph.
    /// </summary>
    /// <param name="font">The Font that contains the glyph.</param>
    /// <param name="glyphIndex">Physical glyph index inside Font. Note that this is not a unicode.</param>
    /// <param name="glyphPlacementMatrix">Matrix that is applied to glyph coordinates.</param>
    ASPOSE_FONT_SHARED_API void RenderGlyph(System::SharedPtr<IFont> font, uint32_t glyphIndex, System::SharedPtr<TransformationMatrix> glyphPlacementMatrix) override;
    /// <summary>
    /// Renders glyph.
    /// </summary>
    /// <param name="font">The Font that contains the glyph.</param>
    /// <param name="glyphId">Physical glyph index inside Font. Note that this is not a unicode.</param>
    ASPOSE_FONT_SHARED_API void RenderGlyph(System::SharedPtr<IFont> font, System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId) override;
    /// <summary>
    /// Renders glyph.
    /// </summary>
    /// <param name="font">The Font that contains the glyph.</param>
    /// <param name="glyphId">Physical glyph index inside Font. Note that this is not a unicode.</param>
    /// <param name="glyphPlacementMatrix">Matrix that is applied to glyph coordinates.</param>
    ASPOSE_FONT_SHARED_API void RenderGlyph(System::SharedPtr<IFont> font, System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId, System::SharedPtr<TransformationMatrix> glyphPlacementMatrix) override;
    /// <summary>
    /// Renders glyph, an objective of this overloaded version - to be used with cache for glyphs.
    /// </summary>
    /// <param name="font">The font that contains the glyph.</param>
    /// <param name="glyphId">Physical glyph index inside Font. Note that this is not a unicode.</param>
    /// <param name="glyph">Glyph to render.</param>
    /// <param name="glyphPlacementMatrix">Matrix that is applied to glyph coordinates.</param>
    ASPOSE_FONT_SHARED_API void RenderGlyph(System::SharedPtr<IFont> font, System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId, System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph, System::SharedPtr<TransformationMatrix> glyphPlacementMatrix) override;
    /// <summary>
    /// Renders glyph using independent glyph path. RenderGlyph() function family changes glyph path on rendering.
    /// It then leads to necessity reload this glyph again. This function uses copy of glyph path and doesn't
    /// changes original glyph path, so the same glyph could be reused multiple times. This version of function is intended
    /// for use with cache of glyphs.
    /// </summary>
    /// <param name="font">The font that contains the glyph.</param>
    /// <param name="glyphId">Physical glyph index inside Font. Note that this is not a unicode.</param>
    /// <param name="glyph">Glyph to render.</param>
    /// <param name="glyphPlacementMatrix">Matrix that is applied to glyph coordinates.</param>
    ASPOSE_FONT_SHARED_API void RenderIndependentGlyphPath(System::SharedPtr<IFont> font, System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId, System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph, System::SharedPtr<TransformationMatrix> glyphPlacementMatrix) override;
    
protected:

    GlyphRendererBase(System::SharedPtr<Aspose::Font::Rendering::IGlyphPainter> painter);
    
    virtual void RenderGlyphImpl(System::SharedPtr<TransformationMatrix> finalMatrix, System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph, System::SharedPtr<Aspose::Font::Rendering::IGlyphPainter> glyphPainter) = 0;
    /// <summary>
    /// Renders glyph using independent glyph path. RenderGlyph() function family changes glyph path on rendering.
    /// It then leads to necessity reload this glyph again. This function uses independent glyph path and doesn't
    /// changes glyph path, so the same glyph could be reused multiple times. This version of function is intended
    /// for use with cache of glyphs.
    /// </summary>
    /// <param name="finalMatrix">Matrix that is applied to glyph coordinates.</param>
    /// <param name="glyph">Glyph to render.</param>
    /// <param name="glyphPainter">IGlyphPainter to render glyph.</param>
    virtual void RenderIndependentGlyphPathImpl(System::SharedPtr<TransformationMatrix> finalMatrix, System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph, System::SharedPtr<Aspose::Font::Rendering::IGlyphPainter> glyphPainter) = 0;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Font::Rendering::IGlyphPainter> GlyphPainter;
    
    System::SharedPtr<TransformationMatrix> GetGlyphMatrix(System::SharedPtr<IFont> font, System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId, System::SharedPtr<TransformationMatrix> glyphPlacementMatrix);
    /// <summary>
    /// Loads glyph
    /// </summary>
    static System::SharedPtr<Aspose::Font::Glyphs::Glyph> LoadGlyph(System::SharedPtr<IFont> font, System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId, System::SharedPtr<TransformationMatrix> finalMatrix);
    
};

} // namespace Renderers
} // namespace Font
} // namespace Aspose


