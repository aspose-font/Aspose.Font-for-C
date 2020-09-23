#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { class FontBBox; } }
namespace Aspose { namespace Font { class TransformationMatrix; } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }

namespace Aspose {

namespace Font {

/// <summary>
/// Defines an interface for Font metrics tools.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS IFontMetrics : public System::Object
{
    typedef IFontMetrics ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// True, if the Font is monospaced.
    /// </summary>
    virtual bool get_IsFixedPitch() = 0;
    /// <summary>
    /// Gets Font bounding box.
    /// </summary>
    virtual System::SharedPtr<Aspose::Font::FontBBox> get_FontBBox() = 0;
    /// <summary>
    /// Gets Font transformation matrix.
    /// </summary>
    virtual System::SharedPtr<TransformationMatrix> get_FontMatrix() = 0;
    /// <summary>
    /// Gets units per em.
    /// </summary>
    virtual uint32_t get_UnitsPerEM() = 0;
    /// <summary>
    /// Gets units per em.
    /// </summary>
    virtual void set_UnitsPerEM(uint32_t value) = 0;
    /// <summary>
    /// Gets ascender value of the Font in font units.
    /// </summary>
    virtual double get_Ascender() = 0;
    /// <summary>
    /// Gets ascender value of the Font in font units.
    /// </summary>
    virtual void set_Ascender(double value) = 0;
    /// <summary>
    /// Gets typographic ascender value of the Font in font units.
    /// </summary>
    virtual double get_TypoAscender() = 0;
    /// <summary>
    /// Gets typographic ascender value of the Font in font units.
    /// </summary>
    virtual void set_TypoAscender(double value) = 0;
    /// <summary>
    /// Gets descender value of the Font in font units.
    /// </summary>
    virtual double get_Descender() = 0;
    /// <summary>
    /// Gets descender value of the Font in font units.
    /// </summary>
    virtual void set_Descender(double value) = 0;
    /// <summary>
    /// Gets typographic descender value of the Font in Font units.
    /// </summary>
    virtual double get_TypoDescender() = 0;
    /// <summary>
    /// Gets typographic descender value of the Font in Font units.
    /// </summary>
    virtual void set_TypoDescender(double value) = 0;
    /// <summary>
    /// Gets LineGap value of the Font in Font units.
    /// </summary>
    virtual double get_LineGap() = 0;
    /// <summary>
    /// Gets typographic LineGap value of the Font in Font units.
    /// </summary>
    virtual double get_TypoLineGap() = 0;
    
    /// <summary>
    /// Returns kerning value for the glyph pair.
    /// </summary>
    /// <param name="prevGlyphId">First glyph in pair.</param>
    /// <param name="nextGlyphId">Font size.</param>
    /// <returns>Kerning value.</returns>
    virtual double GetKerningValue(System::SharedPtr<Glyphs::GlyphId> prevGlyphId, System::SharedPtr<Glyphs::GlyphId> nextGlyphId) = 0;
    /// <summary>
    /// Returns glyph width.
    /// </summary>
    /// <param name="glyphId">Glyph identifier.</param>
    /// <returns>Glyph width.</returns>
    virtual double GetGlyphWidth(System::SharedPtr<Glyphs::GlyphId> glyphId) = 0;
    /// <summary>
    /// Returns glyph BBox.
    /// </summary>
    /// <param name="glyphId">glyph identifier</param>
    /// <returns>glyph BBox</returns>
    virtual System::SharedPtr<Aspose::Font::FontBBox> GetGlyphBBox(System::SharedPtr<Glyphs::GlyphId> glyphId) = 0;
    /// <summary>
    /// Returns ascender for specific Font size.
    /// </summary>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Ascender value.</returns>
    virtual double GetAscender(double fontSize) = 0;
    /// <summary>
    /// Returns descender for specific Font size.
    /// </summary>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Descender value.</returns>
    virtual double GetDescender(double fontSize) = 0;
    /// <summary>
    /// Returns typographic descender for specific Font size.
    /// </summary>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Typographic descender value.</returns>
    virtual double GetTypoDescender(double fontSize) = 0;
    /// <summary>
    /// Returns typographic ascender for specific Font size.
    /// </summary>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Typographic ascender value.</returns>
    virtual double GetTypoAscender(double fontSize) = 0;
    /// <summary>
    /// Returns line gap for specific Font size.
    /// </summary>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Line gap value.</returns>
    virtual double GetTypoLineGap(double fontSize) = 0;
    /// <summary>
    /// Measures string and returns string width.
    /// </summary>
    /// <param name="unicode">Unicode string.</param>
    /// <param name="fontSize">Font size.</param>
    /// <returns>String width.</returns>
    virtual double MeasureString(System::String unicode, double fontSize) = 0;
    
};

} // namespace Font
} // namespace Aspose


