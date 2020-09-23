#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Font.Cpp/src/FontMetrics.h"

namespace Aspose { namespace Font { namespace Cff { class CffFont; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class CFF_Common; } } } }
namespace Aspose { namespace Font { class FontBBox; } }
namespace Aspose { namespace Font { class TransformationMatrix; } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }

namespace Aspose {

namespace Font {

namespace Cff {

/// <summary>
/// Represents CFF Font metrics.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS CffFontMetrics : public Aspose::Font::FontMetrics
{
    typedef CffFontMetrics ThisType;
    typedef Aspose::Font::FontMetrics BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Cff::CffFont;
    friend class Aspose::Font::Tests::FunctionalTests::CFF_Common;
    
public:

    /// <summary>
    /// Gets Ascender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_Ascender() override;
    /// <summary>
    /// Gets Descender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_Descender() override;
    /// <summary>
    /// Gets FontBBox value.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::FontBBox> get_FontBBox() override;
    /// <summary>
    /// Gets FontMatrix value.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TransformationMatrix> get_FontMatrix() override;
    /// <summary>
    /// Gets UnitsPerEM value.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_UnitsPerEM() override;
    
    /// <summary>
    /// Calculates transformation matrix for glyph specified by id.
    /// </summary>
    /// <param name="glyphId">Glyph identifier.</param>
    /// <returns>Glyph transformation matrix.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TransformationMatrix> GetFontMatrixForGlyph(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId);
    /// <summary>
    /// Returns glyph width.
    /// May be overridden by specific Font encoding inheritors.
    /// </summary>
    /// <param name="glyphId">Glyph identifier.</param>
    /// <returns>Glyph width.</returns>
    ASPOSE_FONT_SHARED_API double GetGlyphWidth(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId) override;
    /// <summary>
    /// Measures string and returns string width.
    /// </summary>
    /// <param name="unicode">Unicode string.</param>
    /// <param name="fontSize">Font size.</param>
    /// <returns>String width.</returns>
    ASPOSE_FONT_SHARED_API double MeasureString(System::String unicode, double fontSize) override;
    
protected:

    CffFontMetrics(System::SharedPtr<CffFont> font);
    
    ASPOSE_FONT_SHARED_API int32_t GetGlyphIdHashCode(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId) override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<CffFont> _font;
    uint32_t unitsPerEM;
    System::SharedPtr<System::Object> initSync;
    
};

} // namespace Cff
} // namespace Font
} // namespace Aspose


