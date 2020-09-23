#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
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
/// Represents Format8 CMap subtable of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfCMapFormat8Table : public Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable
{
    typedef TtfCMapFormat8Table ThisType;
    typedef Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::TtfTables::TtfCMapTable;
    
private:

    class Group : public System::Object
    {
        typedef Group ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        uint32_t StartCharCode;
        uint32_t EndCharCode;
        uint32_t StartGlyphCode;
        
        Group();
        
    };
    
    
public:

    /// <summary>
    /// Gets a glyph index for a given character code.
    /// </summary>
    /// <param name="charCode">Character code.</param>
    /// <returns>Glyph index.</returns>
    ASPOSE_FONT_SHARED_API uint32_t GetGlyphIndex(uint32_t charCode) override;
    
protected:

    TtfCMapFormat8Table(System::SharedPtr<Aspose::Font::TtfTables::TtfCMapTable> baseTable);
    TtfCMapFormat8Table(uint16_t platformId, uint16_t platformSpecificId, System::SharedPtr<Aspose::Font::TtfTables::TtfCMapTable> baseTable);
    
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<uint8_t> is32;
    System::ArrayPtr<System::SharedPtr<TtfCMapFormat8Table::Group>> groups;
    
};

} // namespace TtfCMapFormats
} // namespace Font
} // namespace Aspose


