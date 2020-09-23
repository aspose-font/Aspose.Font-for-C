#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/TtfTables/TtfTableBase.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { class Font; } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFontMetrics; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfEncoding; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Utils { class TTFUtils; } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfHheaTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfHmtxTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfLocaTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfPostTable; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace TextShowing { class ShowTextBase; } } } } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }

namespace Aspose {

namespace Font {

namespace TtfTables {

/// <summary>
/// Represents "maxp" table of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfMaxpTable : public Aspose::Font::TtfTables::TtfTableBase
{
    typedef TtfMaxpTable ThisType;
    typedef Aspose::Font::TtfTables::TtfTableBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Font;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::Ttf::TtfFontMetrics;
    friend class Aspose::Font::Ttf::TtfEncoding;
    friend class Aspose::Font::Ttf::Utils::TTFUtils;
    friend class Aspose::Font::TtfTables::TtfGlyfTable;
    friend class Aspose::Font::TtfTables::TtfHheaTable;
    friend class Aspose::Font::TtfTables::TtfHmtxTable;
    friend class Aspose::Font::TtfTables::TtfLocaTable;
    friend class Aspose::Font::TtfTables::TtfPostTable;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextBase;
    
public:

    /// <summary>
    /// Gets table tag.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::String get_Tag();
    /// <summary>
    /// Gets fixed version 0x00010000 if (version 1.0).
    /// </summary>
    ASPOSE_FONT_SHARED_API float get_Version() const;
    /// <summary>
    /// Gets uint16 numGlyphs the number of glyphs in the Font.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_NumGlyphs() const;
    /// <summary>
    /// Gets uint16 maxPoints points in non-compound glyph.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_MaxPoints() const;
    /// <summary>
    /// Gets uint16 maxContours contours in non-compound glyph.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_MaxContours() const;
    /// <summary>
    /// Gets uint16 maxComponentPoints points in compound glyph.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_MaxComponentPoints() const;
    /// <summary>
    /// Gets uint16 maxComponentContours contours in compound glyph.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_MaxComponentContours() const;
    /// <summary>
    /// Gets uint16 maxZones set to 2.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_MaxZones() const;
    /// <summary>
    /// Gets uint16 maxTwilightPoints points used in Twilight Zone (Z0).
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_MaxTwilightPoints() const;
    /// <summary>
    /// Gets uint16 maxStorage number of Storage Area locations.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_MaxStorage() const;
    /// <summary>
    /// Gets uint16 maxFunctionDefs number of FDEFs.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_MaxFunctionDefs() const;
    /// <summary>
    /// Gets uint16 maxInstructionDefs number of IDEFs.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_MaxInstructionDefs() const;
    /// <summary>
    /// Gets uint16 maxStackElements maximum stack depth.
    /// </summary> 
    ASPOSE_FONT_SHARED_API uint16_t get_MaxStackElements() const;
    /// <summary>
    /// Gets uint16 maxSizeOfInstructions byte count for glyph instructions.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_MaxSizeOfInstructions() const;
    /// <summary>
    /// Gets uint16 maxComponentElements number of glyphs referenced at top level.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_MaxComponentElements() const;
    /// <summary>
    /// Gets uint16 maxComponentDepth levels of recursion, set to 0 if font has only simple glyphs.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_MaxComponentDepth() const;
    
protected:

    /// <summary>
    /// Table Tag.
    /// </summary>
    static const System::String TAG;
    static const System::String LowerTag;
    
    /// <summary>
    /// Gets uint16 numGlyphs the number of glyphs in the Font.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_NumGlyphs(uint16_t value);
    /// <summary>
    /// Gets uint16 maxTwilightPoints points used in Twilight Zone (Z0).
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_MaxTwilightPoints(uint16_t value);
    /// <summary>
    /// Gets uint16 maxStorage number of Storage Area locations.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_MaxStorage(uint16_t value);
    /// <summary>
    /// Gets uint16 maxFunctionDefs number of FDEFs.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_MaxFunctionDefs(uint16_t value);
    /// <summary>
    /// Gets uint16 maxInstructionDefs number of IDEFs.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_MaxInstructionDefs(uint16_t value);
    /// <summary>
    /// Gets uint16 maxStackElements maximum stack depth.
    /// </summary> 
    ASPOSE_FONT_SHARED_API void set_MaxStackElements(uint16_t value);
    /// <summary>
    /// Gets uint16 maxSizeOfInstructions byte count for glyph instructions.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_MaxSizeOfInstructions(uint16_t value);
    /// <summary>
    /// Gets uint16 maxComponentElements number of glyphs referenced at top level.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_MaxComponentElements(uint16_t value);
    
    TtfMaxpTable(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font);
    TtfMaxpTable(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length);
    
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum) override;
    
private:

    /// <summary>
    /// Fixed version 0x00010000 if (version 1.0) 
    /// </summary>
    float version;
    /// <summary>
    /// uint16 numGlyphs the number of glyphs in the font 
    /// </summary>
    uint16_t numGlyphs;
    /// <summary>
    /// uint16 maxPoints points in non-compound glyph 
    /// </summary>
    uint16_t maxPoints;
    /// <summary>
    /// uint16 maxContours contours in non-compound glyph 
    /// </summary>
    uint16_t maxContours;
    /// <summary>
    /// uint16 maxComponentPoints points in compound glyph 
    /// </summary>
    uint16_t maxComponentPoints;
    /// <summary>
    /// uint16 maxComponentContours contours in compound glyph 
    /// </summary>
    uint16_t maxComponentContours;
    /// <summary>
    /// uint16 maxZones set to 2 
    /// </summary>
    uint16_t maxZones;
    /// <summary>
    /// uint16 maxTwilightPoints points used in Twilight Zone (Z0) 
    /// </summary>
    uint16_t maxTwilightPoints;
    /// <summary>
    /// uint16 maxStorage number of Storage Area locations 
    /// </summary>
    uint16_t maxStorage;
    /// <summary>
    /// uint16 maxFunctionDefs number of FDEFs 
    /// </summary>
    uint16_t maxFunctionDefs;
    /// <summary>
    /// uint16 maxInstructionDefs number of IDEFs 
    /// </summary>
    uint16_t maxInstructionDefs;
    /// <summary>
    /// uint16 maxStackElements maximum stack depth
    /// </summary> 
    uint16_t maxStackElements;
    /// <summary>
    /// uint16 maxSizeOfInstructions byte count for glyph instructions 
    /// </summary>
    uint16_t maxSizeOfInstructions;
    /// <summary>
    /// uint16 maxComponentElements number of glyphs referenced at top level 
    /// </summary>
    uint16_t maxComponentElements;
    /// <summary>
    /// uint16 maxComponentDepth levels of recursion, set to 0 if font has only simple glyphs 
    /// </summary>
    uint16_t maxComponentDepth;
    
};

} // namespace TtfTables
} // namespace Font
} // namespace Aspose


