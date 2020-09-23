#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/dictionary.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/IFontMetrics.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Ttf { class TtfFontMetrics; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfKernTable; } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1FontParser; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class CFF_Common; } } } }
namespace Aspose { namespace Font { namespace Tests { namespace BaseTesting { class BaseFunctionalTests; } } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class Type1_Common; } } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class Type1MetricFont_Common; } } } }
namespace Aspose { namespace Font { class FontBBox; } }
namespace Aspose { namespace Font { class TransformationMatrix; } }
namespace Aspose { namespace Font { namespace Type1 { namespace Internals { namespace Metrics { class GlyphMetrics; } } } } }
namespace Aspose { namespace Font { namespace Type1 { namespace Internals { namespace Metrics { class KerningDataMap; } } } } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }

namespace Aspose {

namespace Font {

/// <summary>
/// Represents Font metrics.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS FontMetrics : public Aspose::Font::IFontMetrics
{
    typedef FontMetrics ThisType;
    typedef Aspose::Font::IFontMetrics BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Ttf::TtfFontMetrics;
    friend class Aspose::Font::TtfTables::TtfKernTable;
    friend class Aspose::Font::Type1::Type1FontParser;
    friend class Aspose::Font::Tests::FunctionalTests::CFF_Common;
    friend class Aspose::Font::Tests::BaseTesting::BaseFunctionalTests;
    friend class Aspose::Font::Tests::FunctionalTests::Type1_Common;
    friend class Aspose::Font::Tests::FunctionalTests::Type1MetricFont_Common;
    
public:

    /// <summary>
    /// Gets Ascender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_Ascender() override;
    /// <summary>
    /// Gets Ascender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Ascender(double value) override;
    /// <summary>
    /// Gets Descender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_Descender() override;
    /// <summary>
    /// Gets Descender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Descender(double value) override;
    /// <summary>
    /// Gets TypoDescender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_TypoDescender() override;
    /// <summary>
    /// Gets TypoDescender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_TypoDescender(double value) override;
    /// <summary>
    /// Gets TypoAscender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_TypoAscender() override;
    /// <summary>
    /// Gets TypoAscender value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_TypoAscender(double value) override;
    /// <summary>
    /// Gets LineGap value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_LineGap() override;
    /// <summary>
    /// Gets TypoLineGap value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_TypoLineGap() override;
    /// <summary>
    /// Gets IsFixedPitch value.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_IsFixedPitch() override;
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
    /// Gets UnitsPerEM value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_UnitsPerEM(uint32_t value) override;
    
    /// <summary>
    /// Returns kerning value for the glyph pair.
    /// </summary>
    /// <param name="prevGlyphId">First glyph in pair.</param>
    /// <param name="nextGlyphId">Font size.</param>
    /// <returns>Kerning value.</returns>
    ASPOSE_FONT_SHARED_API double GetKerningValue(System::SharedPtr<Glyphs::GlyphId> prevGlyphId, System::SharedPtr<Glyphs::GlyphId> nextGlyphId) override;
    /// <summary>
    /// Returns ascender for specific Font size.
    /// </summary>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Ascender value.</returns>
    ASPOSE_FONT_SHARED_API double GetAscender(double fontSize) override;
    /// <summary>
    /// Returns descender for specific Font size.
    /// </summary>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Descender value.</returns>
    ASPOSE_FONT_SHARED_API double GetDescender(double fontSize) override;
    /// <summary>
    /// Returns descender for specific Font size.
    /// </summary>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Typographic descender value.</returns>
    ASPOSE_FONT_SHARED_API double GetTypoDescender(double fontSize) override;
    /// <summary>
    /// Returns descender for specific Font size.
    /// </summary>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Typographic ascender value.</returns>
    ASPOSE_FONT_SHARED_API double GetTypoAscender(double fontSize) override;
    /// <summary>
    /// Returns line gap for specific Font size.
    /// </summary>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Line gap value.</returns>
    ASPOSE_FONT_SHARED_API double GetTypoLineGap(double fontSize) override;
    /// <summary>
    /// Returns glyph width.
    /// May be overridden by specific font encoding inheritors.
    /// </summary>
    /// <param name="glyphId">Glyph identifier.</param>
    /// <returns>Glyph width.</returns>
    ASPOSE_FONT_SHARED_API double GetGlyphWidth(System::SharedPtr<Glyphs::GlyphId> glyphId) override;
    /// <summary>
    /// Returns glyph BBox.
    /// Returns FontBBox if BBox was not defined for the glyph.
    /// May be overridden by specific font encoding inheritors.
    /// </summary>
    /// <param name="glyphId">Glyph identifier.</param>
    /// <returns>Glyph BBox.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::FontBBox> GetGlyphBBox(System::SharedPtr<Glyphs::GlyphId> glyphId) override;
    /// <summary>
    /// Measures string and returns string width.
    /// </summary>
    /// <param name="unicode">Unicode string.</param>
    /// <param name="fontSize">Font size.</param>
    /// <returns>String width.</returns>
    ASPOSE_FONT_SHARED_API double MeasureString(System::String unicode, double fontSize) override = 0;
    
protected:

    /// <summary>
    /// Gets IsFixedPitch value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_IsFixedPitch(bool value);
    /// <summary>
    /// Gets FontBBox value.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void set_FontBBox(System::SharedPtr<Aspose::Font::FontBBox> value);
    /// <summary>
    /// Gets FontMatrix value.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void set_FontMatrix(System::SharedPtr<TransformationMatrix> value);
    
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<Type1::Internals::Metrics::GlyphMetrics>>> glyphMetricsMap;
    System::SharedPtr<Type1::Internals::Metrics::KerningDataMap> glyphKerningMap;
    
    FontMetrics();
    
    /// <summary>
    /// returns hashcode, based on glyph id type
    /// </summary>
    /// <param name="glyphId">glyph identifier</param>
    /// <returns>hashcode</returns>
    virtual int32_t GetGlyphIdHashCode(System::SharedPtr<Glyphs::GlyphId> glyphId) = 0;
    virtual ASPOSE_FONT_SHARED_API void AddGlyphMetrics(System::SharedPtr<Glyphs::GlyphId> glyphId, double width, System::SharedPtr<Aspose::Font::FontBBox> bbox);
    virtual ASPOSE_FONT_SHARED_API void AddTrackKerning();
    virtual ASPOSE_FONT_SHARED_API void AddKerningPair(System::SharedPtr<Glyphs::GlyphId> previousGlyphId, System::SharedPtr<Glyphs::GlyphId> nextGlyphId, double kerningValue);
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool isFixedPitch;
    System::SharedPtr<Aspose::Font::FontBBox> fontBBox;
    uint32_t unitsPerEM;
    double ascender;
    double descender;
    System::SharedPtr<TransformationMatrix> fontMatrix;
    
};

} // namespace Font
} // namespace Aspose


