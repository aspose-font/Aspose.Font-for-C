#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Font.Cpp/src/FontMetrics.h"

namespace Aspose { namespace Font { namespace Type1 { class Type1MetricFont; } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1Font; } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1FontParser; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class Type1MetricFont_Common; } } } }
namespace Aspose { namespace Font { class FontBBox; } }
namespace Aspose { namespace Font { class TransformationMatrix; } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }

namespace Aspose {

namespace Font {

namespace Type1 {

/// <summary>
/// Represents Type1 Font metrics.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS Type1FontMetrics : public Aspose::Font::FontMetrics
{
    typedef Type1FontMetrics ThisType;
    typedef Aspose::Font::FontMetrics BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Type1::Type1MetricFont;
    friend class Aspose::Font::Type1::Type1Font;
    friend class Aspose::Font::Type1::Type1FontParser;
    friend class Aspose::Font::Tests::FunctionalTests::Type1MetricFont_Common;
    
public:

    /// <summary>
    /// Gets weight.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_Weight() const;
    /// <summary>
    /// Gets italic angle value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_ItalicAngle() const;
    /// <summary>
    /// Gets underline position value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_UnderlinePosition() const;
    /// <summary>
    /// Gets underline thickness value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_UnderlineThickness() const;
    /// <summary>
    /// Gets cap height value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_CapHeight() const;
    /// <summary>
    /// Gets XHeight value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_XHeight() const;
    /// <summary>
    /// Gets ascender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_Ascender() override;
    /// <summary>
    /// Gets descender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_Descender() override;
    /// <summary>
    /// Gets StdHW value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_StdHW() const;
    /// <summary>
    /// Gets StdVW value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_StdVW() const;
    /// <summary>
    /// Gets FontBBox value.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::FontBBox> get_FontBBox() override;
    /// <summary>
    /// Gets Font transformation matrix.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TransformationMatrix> get_FontMatrix() override;
    /// <summary>
    /// Gets underline UnitsPerEM value.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_UnitsPerEM() override;
    /// <summary>
    /// Gets underline UnitsPerEM value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_UnitsPerEM(uint32_t value) override;
    
    /// <summary>
    /// Returns glyph width.
    /// May be ovridden by specific font encoding inheritors.
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

    double ascender;
    double descender;
    
    /// <summary>
    /// Gets Font name.
    /// </summary>
    System::String get_FontName() const;
    /// <summary>
    /// Sets Font name.
    /// </summary>
    void set_FontName(System::String value);
    /// <summary>
    /// Gets family name.
    /// </summary>
    System::String get_FamilyName() const;
    /// <summary>
    /// Sets family name.
    /// </summary>
    void set_FamilyName(System::String value);
    /// <summary>
    /// Gets weight.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Weight(System::String value);
    /// <summary>
    /// Gets italic angle value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_ItalicAngle(double value);
    /// <summary>
    /// Gets underline position value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_UnderlinePosition(double value);
    /// <summary>
    /// Gets underline thickness value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_UnderlineThickness(double value);
    /// <summary>
    /// Gets cap height value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_CapHeight(double value);
    /// <summary>
    /// Gets XHeight value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_XHeight(double value);
    /// <summary>
    /// Gets StdHW value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_StdHW(double value);
    /// <summary>
    /// Gets StdVW value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_StdVW(double value);
    /// <summary>
    /// Gets FontBBox value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_FontBBox(System::SharedPtr<Aspose::Font::FontBBox> value) override;
    /// <summary>
    /// Gets Font transformation matrix.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_FontMatrix(System::SharedPtr<TransformationMatrix> value) override;
    
    Type1FontMetrics(System::SharedPtr<Type1Font> font);
    
    /// <summary>
    /// Returns hashcode, based on glyph id type.
    /// </summary>
    ASPOSE_FONT_SHARED_API int32_t GetGlyphIdHashCode(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId) override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Type1Font> _font;
    uint32_t unitsPerEM;
    System::SharedPtr<Aspose::Font::FontBBox> fontBBox;
    System::SharedPtr<TransformationMatrix> _fontTransformationMatrix;
    System::SharedPtr<System::Object> initSync;
    System::SharedPtr<System::Object> initSync3;
    System::String fontName;
    System::String familyName;
    System::String weight;
    double italicAngle;
    double underlinePosition;
    double underlineThickness;
    double capHeight;
    double xHeight;
    double stdHW;
    double stdVW;
    
};

} // namespace Type1
} // namespace Font
} // namespace Aspose


