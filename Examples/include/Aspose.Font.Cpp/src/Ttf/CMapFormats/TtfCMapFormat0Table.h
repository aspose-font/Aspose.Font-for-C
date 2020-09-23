#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
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
/// Represents Format0 CMap subtable of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfCMapFormat0Table : public Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable
{
    typedef TtfCMapFormat0Table ThisType;
    typedef Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
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

    TtfCMapFormat0Table(uint16_t platformId, uint16_t platformSpecificId, System::SharedPtr<Aspose::Font::TtfTables::TtfCMapTable> baseTable);
    
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    /// <summary>
    /// Saves the table.
    /// </summary>
    /// <param name="tableBytes">Saved table bytes.</param>
    /// <param name="length">Resultant table length in bytes.</param>
    ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length) override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<uint8_t> glyphIndexArray;
    uint16_t language;
    
};

} // namespace TtfCMapFormats
} // namespace Font
} // namespace Aspose


