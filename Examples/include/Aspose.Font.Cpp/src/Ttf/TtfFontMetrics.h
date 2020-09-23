#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Font.Cpp/src/FontMetrics.h"

namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfKernTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { class FontBBox; } }
namespace Aspose { namespace Font { class TransformationMatrix; } }
namespace Aspose { namespace Font { namespace TtfCMapFormats { class TtfCMapFormatBaseTable; } } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }

namespace Aspose {

namespace Font {

namespace Ttf {

/// <summary>
/// Represents TTF Font metrics.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfFontMetrics : public Aspose::Font::FontMetrics
{
    typedef TtfFontMetrics ThisType;
    typedef Aspose::Font::FontMetrics BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::TtfTables::TtfKernTable;
    
public:

    /// <summary>
    /// Gets ascender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_Ascender() override;
    /// <summary>
    /// Gets ascender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Ascender(double value) override;
    /// <summary>
    /// Gets descender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_Descender() override;
    /// <summary>
    /// Gets descender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Descender(double value) override;
    /// <summary>
    /// Gets LineGap value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_LineGap() override;
    /// <summary>
    /// Gets TypoDescender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_TypoDescender() override;
    /// <summary>
    /// Gets TypoDescender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_TypoDescender(double value) override;
    /// <summary>
    /// Gets TypoLineGap value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_TypoLineGap() override;
    /// <summary>
    /// Gets TypoAscender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_TypoAscender() override;
    /// <summary>
    /// Gets TypoAscender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_TypoAscender(double value) override;
    /// <summary>
    /// Gets FontBBox value.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::FontBBox> get_FontBBox() override;
    /// <summary>
    /// Gets FontBBox value.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TransformationMatrix> get_FontMatrix() override;
    /// <summary>
    /// Gets UnitsPerEM value.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_UnitsPerEM() override;
    /// <summary>
    /// Gets UnitsPerEM value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_UnitsPerEM(uint32_t value) override;
    
    /// <summary>
    /// Returns glyphs width by glyph id.
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
    /// <summary>
    /// Returns kerning value for the glyph pair.
    /// </summary>
    /// <param name="prevGlyphId">First glyph in pair.</param>
    /// <param name="nextGlyphId">Font size.</param>
    /// <returns>Kerning value.</returns>
    ASPOSE_FONT_SHARED_API double GetKerningValue(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> prevGlyphId, System::SharedPtr<Aspose::Font::Glyphs::GlyphId> nextGlyphId) override;
    
protected:

    TtfFontMetrics(System::SharedPtr<TtfFont> owner);
    
    /// @deprecated please use TtfFont.Encoding.DecodeToGlyphId(char unicode) => GetGlyphWidth(glyphId) instead
    double GetCharWidth(char16_t ch);
    ASPOSE_FONT_SHARED_API int32_t GetGlyphIdHashCode(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId) override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Font::TtfTables::TtfTableRepository> _ttfTables;
    System::SharedPtr<Aspose::Font::FontBBox> fontBBox;
    System::SharedPtr<TransformationMatrix> _fontMatrix;
    System::SharedPtr<System::Object> initSync;
    System::SharedPtr<System::Object> initSync2;
    /// @deprecated please use TtfFont.Encoding.DecodeToGlyphId(char unicode) => GetGlyphWidth(glyphId) instead
    System::SharedPtr<Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable> _mapTable;
    System::SharedPtr<TtfFont> _owner;
    
};

} // namespace Ttf
} // namespace Font
} // namespace Aspose


