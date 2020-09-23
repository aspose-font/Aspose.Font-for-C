#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/sorted_list.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/Ttf/CMapFormats/TtfCMapFormatBaseTable.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace TtfTables { class TtfCMapTable; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }

namespace Aspose {

namespace Font {

namespace TtfCMapFormats {

/// <summary>
/// Represents Format4 CMap subtable of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfCMapFormat4Table : public Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable
{
    typedef TtfCMapFormat4Table ThisType;
    typedef Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::TtfTables::TtfCMapTable;
    friend class Aspose::Font::TtfTables::TtfCMapTable;
    
public:

    /// <summary>
    /// Gets a glyph index for a given character code.
    /// </summary>
    /// <param name="charCode">Character code.</param>
    /// <returns>Glyph index.</returns>
    ASPOSE_FONT_SHARED_API uint32_t GetGlyphIndex(uint32_t charCode) override;
    /// <summary>
    /// Gets all the codes from current CMap's subtable.
    /// </summary>
    /// <returns>All codes from current CMap's subtable.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<System::Collections::Generic::List<uint32_t>> GetAllCodes() override;
    
protected:

    TtfCMapFormat4Table(System::SharedPtr<Aspose::Font::TtfTables::TtfCMapTable> baseTable);
    TtfCMapFormat4Table(uint16_t platformId, uint16_t platformSpecificId, System::SharedPtr<Aspose::Font::TtfTables::TtfCMapTable> baseTable);
    
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    /// <summary>
    /// Maps code code to glyph index.
    /// </summary>
    /// <param name="code">Character code.</param>
    /// <param name="glyphIndex">Glyph index.</param>
    ASPOSE_FONT_SHARED_API void MapCode(uint32_t code, uint32_t glyphIndex) override;
    ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length) override;
    /// <summary>
    /// Prepares table for edit operations
    /// </summary>
    ASPOSE_FONT_SHARED_API void PrepareToEdit() override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    uint16_t segCount;
    System::ArrayPtr<uint16_t> endCode;
    System::ArrayPtr<uint16_t> startCode;
    System::ArrayPtr<uint16_t> idDelta;
    System::ArrayPtr<uint16_t> glyphIndexArray;
    System::ArrayPtr<uint16_t> idRangeOffset;
    System::SharedPtr<System::Collections::Generic::SortedList<uint16_t, uint16_t>> codeToGid;
    
};

} // namespace TtfCMapFormats
} // namespace Font
} // namespace Aspose


