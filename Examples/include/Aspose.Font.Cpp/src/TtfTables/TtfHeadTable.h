#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum_helpers.h>
#include <system/date_time.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/TtfTables/TtfTableBase.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Bytecode { class BytecodeInterpreter; } } } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontSaver; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFontMetrics; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfLocaTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }

namespace Aspose {

namespace Font {

namespace TtfTables {

/// <summary>
/// Represents "head" table of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfHeadTable : public Aspose::Font::TtfTables::TtfTableBase
{
    typedef TtfHeadTable ThisType;
    typedef Aspose::Font::TtfTables::TtfTableBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Ttf::Internals::Bytecode::BytecodeInterpreter;
    friend class Aspose::Font::Ttf::TTFFontSaver;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::Ttf::TtfFontMetrics;
    friend class Aspose::Font::TtfTables::TtfGlyfTable;
    friend class Aspose::Font::TtfTables::TtfLocaTable;
    
protected:

    /// <summary>
    /// Font flags enumeration.
    /// </summary>
    enum class FontFlagsEnum : uint16_t
    {
    };
    DECLARE_FRIEND_ENUM_OPERATORS(Aspose::Font::TtfTables::TtfHeadTable::FontFlagsEnum);
    
    
    /// <summary>
    /// Mac style enumeration.
    /// </summary>
    enum class MacStyleEnum : uint16_t
    {
    };
    DECLARE_FRIEND_ENUM_OPERATORS(Aspose::Font::TtfTables::TtfHeadTable::MacStyleEnum);
    
    
    
public:

    /// <summary>
    /// Gets table tag.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::String get_Tag();
    /// <summary>
    /// Fixed version 0x00010000 if (version 1.0).
    /// </summary>
    ASPOSE_FONT_SHARED_API float get_Version() const;
    /// <summary>
    /// Gets uint16 flags.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_Flags() const;
    /// <summary>
    /// Gets fixed fontRevision set by font manufacturer.
    /// </summary>
    ASPOSE_FONT_SHARED_API float get_FontRevision() const;
    /// <summary>
    /// Gets uint32 checkSumAdjustment. To compute: set it to 0, calculate the checksum for the 'head' table and put it in the table directory, sum the entire font as uint32, then store B1B0AFBA - sum. The checksum for the 'head' table will not be wrong. That is OK.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_CheckSumAdjustment() const;
    /// <summary>
    /// Gets uint32 magicNumber set to 0x5F0F3CF5.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_MagicNumber() const;
    /// <summary>
    /// Gets uint16 unitsPerEm range from 64 to 16384.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_UnitsPerEM() const;
    /// <summary>
    /// Gets longDateTime created international date.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::DateTime get_Created() const;
    /// <summary>
    /// Gets longDateTime modified international date.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::DateTime get_Modified() const;
    /// <summary>
    /// Gets FWord xMin for all glyph bounding boxes.
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_XMin() const;
    /// <summary>
    /// Gets FWord yMin for all glyph bounding boxes.
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_YMin() const;
    /// <summary>
    /// Gets FWord xMax for all glyph bounding boxes.
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_XMax() const;
    /// <summary>
    /// Gets FWord yMax for all glyph bounding boxes.
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_YMax() const;
    /// <summary>
    /// Gets uint16 macStyle.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_MacStyle() const;
    /// <summary>
    /// Gets uint16 lowestRecPPEM smallest readable size in pixels.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_LowestRecPPEM() const;
    /// <summary>
    /// Gets int16 fontDirectionHint.
    /// 0 Mixed directional glyphs;
    /// 1 Only strongly left to right glyphs;
    /// 2 Like 1 but also contains neutrals;
    /// -1 Only strongly right to left glyphs;
    /// -2 Like -1 but also contains neutrals.
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_FontDirectionHint() const;
    /// <summary>
    /// Gets int16 indexToLocFormat 0 for short offsets, 1 for long.
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_IndexToLocFormat() const;
    /// <summary>
    /// Gets int16 glyphDataFormat 0 for current format.
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_GlyphDataFormat() const;
    
protected:

    /// <summary>
    /// Table Tag.
    /// </summary>
    static const System::String TAG;
    static const System::String LowerTag;
    
    /// <summary>
    /// Gets uint16 flags.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Flags(uint16_t value);
    /// <summary>
    /// Gets uint16 unitsPerEm range from 64 to 16384.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_UnitsPerEM(uint32_t value);
    /// <summary>
    /// Gets FWord xMin for all glyph bounding boxes.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_XMin(int16_t value);
    /// <summary>
    /// Gets FWord yMin for all glyph bounding boxes.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_YMin(int16_t value);
    /// <summary>
    /// Gets FWord xMax for all glyph bounding boxes.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_XMax(int16_t value);
    /// <summary>
    /// Gets FWord yMax for all glyph bounding boxes.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_YMax(int16_t value);
    /// <summary>
    /// Gets uint16 macStyle.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_MacStyle(uint16_t value);
    /// <summary>
    /// Gets int16 fontDirectionHint.
    /// 0 Mixed directional glyphs;
    /// 1 Only strongly left to right glyphs;
    /// 2 Like 1 but also contains neutrals;
    /// -1 Only strongly right to left glyphs;
    /// -2 Like -1 but also contains neutrals.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_FontDirectionHint(int16_t value);
    /// <summary>
    /// Gets int16 indexToLocFormat 0 for short offsets, 1 for long.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_IndexToLocFormat(int16_t value);
    
    /// <summary>
    /// position of the checksum adjustment inside the table
    /// </summary>
    int64_t checkSumPosition;
    
    TtfHeadTable(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font);
    TtfHeadTable(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length);
    
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum) override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    /// <summary>
    /// Fixed version 0x00010000 if (version 1.0) 
    /// </summary>
    float version;
    /// <summary>
    /// uint16 flags
    /// </summary>
    uint16_t flags;
    /// <summary>
    /// Fixed fontRevision set by font manufacturer 
    /// </summary>
    float fontRevision;
    /// <summary>
    /// uint32 checkSumAdjustment To compute: set it to 0, calculate the checksum for the 'head' table and put it in the table directory, sum the entire font as uint32, then store B1B0AFBA - sum. The checksum for the 'head' table will not be wrong. That is OK. 
    /// </summary>
    uint32_t checkSumAdjustment;
    /// <summary>
    /// uint32 magicNumber set to 0x5F0F3CF5 
    /// </summary>
    uint32_t magicNumber;
    /// <summary>
    /// uint16 unitsPerEm range from 64 to 16384 
    /// </summary>
    uint32_t unitsPerEm;
    /// <summary>
    /// longDateTime created international date 
    /// </summary>
    System::DateTime created;
    /// <summary>
    /// longDateTime modified international date
    /// </summary>
    System::DateTime modified;
    /// <summary>
    /// FWord xMin for all glyph bounding boxes 
    /// </summary>
    int16_t xMin;
    /// <summary>
    /// FWord yMin for all glyph bounding boxes 
    /// </summary>
    int16_t yMin;
    /// <summary>
    /// FWord xMax for all glyph bounding boxes 
    /// </summary>
    int16_t xMax;
    /// <summary>
    /// FWord yMax for all glyph bounding boxes 
    /// </summary>
    int16_t yMax;
    /// <summary>
    /// uint16 macStyle 
    /// </summary>
    uint16_t macStyle;
    /// <summary>
    /// uint16 lowestRecPPEM smallest readable size in pixels 
    /// </summary>
    uint16_t lowestRecPPEM;
    /// <summary>
    /// int16 fontDirectionHint 
    /// 0 Mixed directional glyphs
    /// 1 Only strongly left to right glyphs
    /// 2 Like 1 but also contains neutrals
    /// -1 Only strongly right to left glyphs
    /// -2 Like -1 but also contains neutrals 
    /// </summary>
    int16_t fontDirectionHint;
    /// <summary>
    /// int16 indexToLocFormat 0 for short offsets, 1 for long 
    /// </summary>
    int16_t indexToLocFormat;
    /// <summary>
    /// int16 glyphDataFormat 0 for current format 
    /// </summary>
    int16_t glyphDataFormat;
    
};

DECLARE_ENUM_OPERATORS(Aspose::Font::TtfTables::TtfHeadTable::FontFlagsEnum);
DECLARE_USING_GLOBAL_OPERATORS

DECLARE_ENUM_OPERATORS(Aspose::Font::TtfTables::TtfHeadTable::MacStyleEnum);
DECLARE_USING_GLOBAL_OPERATORS
} // namespace TtfTables
} // namespace Font
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Font::TtfTables);



