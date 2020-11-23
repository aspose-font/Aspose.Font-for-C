﻿#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
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
/// Represents Format10 CMap subtable of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfCMapFormat10Table : public Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable
{
    typedef TtfCMapFormat10Table ThisType;
    typedef Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::TtfTables::TtfCMapTable;
    
public:

    /// <summary>
    /// Gets a glyph index for a given character code.
    /// </summary>
    /// <param name="charCode">Character code.</param>
    /// <returns>Glyph index.</returns>
    ASPOSE_FONT_SHARED_API uint32_t GetGlyphIndex(uint32_t charCode) override;
    
protected:

    TtfCMapFormat10Table(uint16_t platformId, uint16_t platformSpecificId, System::SharedPtr<Aspose::Font::TtfTables::TtfCMapTable> baseTable);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfCMapFormat10Table, CODEPORTING_ARGS(uint16_t platformId, uint16_t platformSpecificId, System::SharedPtr<Aspose::Font::TtfTables::TtfCMapTable> baseTable));
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<uint16_t> glyphs;
    uint32_t startCharCode;
    uint32_t numChars;
    
};

} // namespace TtfCMapFormats
} // namespace Font
} // namespace Aspose


