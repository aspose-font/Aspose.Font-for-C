#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/sorted_dictionary.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/TtfTables/TtfTableBase.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Page { namespace EPS { namespace Postscript { class DefineFont; } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }

namespace Aspose {

namespace Font {

namespace TtfTables {

/// <summary>
/// Represents "post" table of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfPostTable : public Aspose::Font::TtfTables::TtfTableBase
{
    typedef TtfPostTable ThisType;
    typedef Aspose::Font::TtfTables::TtfTableBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Page::EPS::Postscript::DefineFont;
    
public:

    /// <summary>
    /// Gets table tag.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::String get_Tag();
    /// <summary>
    /// Gets fixed format(version) of this table.
    /// </summary>
    ASPOSE_FONT_SHARED_API float get_Format();
    /// <summary>
    /// Gets fixed italicAngle Italic angle in degrees.
    /// </summary>
    ASPOSE_FONT_SHARED_API float get_ItalicAngle();
    /// <summary>
    /// Gets FWord underlinePosition value.
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_UnderlinePosition();
    /// <summary>
    /// Gets FWord underlineThickness value.
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_UnderlineThickness();
    /// <summary>
    /// Gets uint32 isFixedPitch. 0 if the font is proportionally spaced, non-zero if the font is not proportionally 
    /// spaced (i.e. monospaced).
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_IsFixedPitch();
    /// <summary>
    /// Gets uint32 minMemType42 Minimum memory usage when a TrueType font is downloaded as a Type 42 Font.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_MinMemType42();
    /// <summary>
    /// Gets uint32 maxMemType42 Maximum memory usage when a TrueType font is downloaded as a Type 42 Font.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_MaxMemType42();
    /// <summary>
    /// Gets uint32 minMemType1 Minimum memory usage when a TrueType font is downloaded as a Type 1 Font.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_MinMemType1();
    /// <summary>
    /// Gets uint32 maxMemType1 Maximum memory usage when a TrueType font is downloaded as a Type 1 Font.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_MaxMemType1();
    /// <summary>
    /// Indicates that no PostScript name information is provided for the glyphs in this font file. 
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_HasNoPostScriptNames();
    
    /// <summary>
    /// Gets glyph name by glyph index.
    /// </summary>
    /// <param name="glyphIndex">Glyph index.</param>
    /// <returns>Glyph name.</returns>
    ASPOSE_FONT_SHARED_API System::String GetGlyphName(uint32_t glyphIndex);
    /// <summary>
    /// Gets glyph index by glyph name.
    /// </summary>
    /// <param name="glyphName">Glyph name.</param>
    /// <returns>Glyph index.</returns>
    ASPOSE_FONT_SHARED_API uint32_t GetGlyphIndex(System::String glyphName);
    
protected:

    /// <summary>
    /// Table Tag.
    /// </summary>
    static const System::String TAG;
    static const System::String LowerTag;
    
    /// <summary>
    /// Gets fixed italicAngle Italic angle in degrees.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_ItalicAngle(float value);
    
    TtfPostTable(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font);
    TtfPostTable(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length);
    /// <summary>
    /// Initializes a new instance of the <see cref="TtfPostTable"></see> class.
    /// </summary>
    /// <param name="ttfTables">TTF tables repository.</param>
    /// <param name="font">TTF font.</param>
    /// <param name="glyphToIndex">The dictionary that contains correspondence between the name of glyph and index in loca table.</param>
    TtfPostTable(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, uint32_t>> glyphToIndex);
    
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void LazyLoadImpl(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum) override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    /// <summary>
    /// Fixed format Format of this table 
    /// </summary>
    float format;
    /// <summary>
    /// Fixed italicAngle Italic angle in degrees 
    /// </summary>
    float italicAngle;
    /// <summary>
    /// FWord underlinePosition Underline position 
    /// </summary>
    int16_t underlinePosition;
    /// <summary>
    /// FWord underlineThickness Underline thickness 
    /// </summary>
    int16_t underlineThickness;
    /// <summary>
    /// uint32 isFixedPitch Font is monospaced; set to 1 if the font is monospaced and 0 otherwise (N.B., to maintain compatibility with older versions of the TrueType spec, accept any non-zero value as meaning that the font is monospaced) 
    /// </summary>
    uint32_t isFixedPitch;
    /// <summary>
    /// uint32 minMemType42 Minimum memory usage when a TrueType font is downloaded as a Type 42 font 
    /// </summary>
    uint32_t minMemType42;
    /// <summary>
    /// uint32 maxMemType42 Maximum memory usage when a TrueType font is downloaded as a Type 42 font 
    /// </summary>
    uint32_t maxMemType42;
    /// <summary>
    /// uint32 minMemType1 Minimum memory usage when a TrueType font is downloaded as a Type 1 font 
    /// </summary>
    uint32_t minMemType1;
    /// <summary>
    /// uint32 maxMemType1 Maximum memory usage when a TrueType font is downloaded as a Type 1 font 
    /// </summary>
    uint32_t maxMemType1;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, uint32_t>> glyphToIndex;
    System::SharedPtr<System::Collections::Generic::SortedDictionary<uint32_t, System::String>> indexToGlyph;
    System::ArrayPtr<System::String> standardMacGlyphTable;
    
};

} // namespace TtfTables
} // namespace Font
} // namespace Aspose


