#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace TtfCMapFormats { class TtfCMapFormat0Table; } } }
namespace Aspose { namespace Font { namespace TtfCMapFormats { class TtfCMapFormat10Table; } } }
namespace Aspose { namespace Font { namespace TtfCMapFormats { class TtfCMapFormat12Table; } } }
namespace Aspose { namespace Font { namespace TtfCMapFormats { class TtfCMapFormat2Table; } } }
namespace Aspose { namespace Font { namespace TtfCMapFormats { class TtfCMapFormat4Table; } } }
namespace Aspose { namespace Font { namespace TtfCMapFormats { class TtfCMapFormat6Table; } } }
namespace Aspose { namespace Font { namespace TtfCMapFormats { class TtfCMapFormat8Table; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfEncoding; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfCMapTable; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class TTF_Common; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace TextShowing { class ShowTextBase; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace PdfUa { class PdfUaFontEncodingMappingChecker; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace PdfUa { class PdfUaSymbolicFontEncodingsFixer; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class SymbolicFontEncodingsFixer; } } } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }

namespace Aspose {

namespace Font {

namespace TtfCMapFormats {

/// <summary>
/// Represents CMap subtable base class.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfCMapFormatBaseTable : public System::Object
{
    typedef TtfCMapFormatBaseTable ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::TtfCMapFormats::TtfCMapFormat0Table;
    friend class Aspose::Font::TtfCMapFormats::TtfCMapFormat10Table;
    friend class Aspose::Font::TtfCMapFormats::TtfCMapFormat12Table;
    friend class Aspose::Font::TtfCMapFormats::TtfCMapFormat2Table;
    friend class Aspose::Font::TtfCMapFormats::TtfCMapFormat4Table;
    friend class Aspose::Font::TtfCMapFormats::TtfCMapFormat6Table;
    friend class Aspose::Font::TtfCMapFormats::TtfCMapFormat8Table;
    friend class Aspose::Font::Ttf::TtfEncoding;
    friend class Aspose::Font::TtfTables::TtfCMapTable;
    friend class Aspose::Font::TtfTables::TtfCMapTable;
    friend class Aspose::Font::Tests::FunctionalTests::TTF_Common;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextBase;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUa::PdfUaFontEncodingMappingChecker;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUa::PdfUaSymbolicFontEncodingsFixer;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::SymbolicFontEncodingsFixer;
    
public:

    /// <summary>
    /// Gets PlatformId.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_PlatformId() const;
    /// <summary>
    /// Gets PlatformSpecificId.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_PlatformSpecificId() const;
    
    /// <summary>
    /// Gets a glyph index for a given character code
    /// </summary>
    /// <param name="charCode">character code</param>
    /// <returns>glyph index</returns>
    virtual ASPOSE_FONT_SHARED_API uint32_t GetGlyphIndex(uint32_t charCode);
    /// <summary>
    /// Gets all the codes from current CMap's subtable.
    /// </summary>
    /// <returns>All codes from current CMap's subtable.</returns>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<System::Collections::Generic::List<uint32_t>> GetAllCodes();
    
protected:

    System::SharedPtr<Aspose::Font::TtfTables::TtfCMapTable> get_BaseTable() const;
    /// <summary>
    /// Gets PlatformId.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_PlatformId(uint16_t value);
    /// <summary>
    /// Gets PlatformSpecificId.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_PlatformSpecificId(uint16_t value);
    /// <summary>
    /// Returns true in case encoding is unicode.
    /// </summary>
    bool get_IsUnicodeEncoding();
    
    TtfCMapFormatBaseTable(System::SharedPtr<Aspose::Font::TtfTables::TtfCMapTable> baseTable);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfCMapFormatBaseTable, CODEPORTING_ARGS(System::SharedPtr<Aspose::Font::TtfTables::TtfCMapTable> baseTable));
    
    TtfCMapFormatBaseTable(uint16_t platformId, uint16_t platformSpecificId, System::SharedPtr<Aspose::Font::TtfTables::TtfCMapTable> baseTable);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfCMapFormatBaseTable, CODEPORTING_ARGS(uint16_t platformId, uint16_t platformSpecificId, System::SharedPtr<Aspose::Font::TtfTables::TtfCMapTable> baseTable));
    /// <summary>
    /// Loads current table
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader);
    /// <summary>
    /// Saves the table.
    /// </summary>
    /// <param name="tableBytes"></param>
    /// <param name="length"></param>
    virtual ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length);
    /// <summary>
    /// Gets specific code in case non unicode encoding.
    /// </summary>
    /// <param name="charCode"></param>
    /// <returns></returns>
    System::ArrayPtr<uint8_t> GetSpecificCode(char16_t charCode);
    /// <summary>
    /// Maps code code to glyph index.
    /// </summary>
    /// <param name="code">character code</param>
    /// <param name="glyphIndex">glyph index</param>
    virtual ASPOSE_FONT_SHARED_API void MapCode(uint32_t code, uint32_t glyphIndex);
    /// <summary>
    /// Prepares table for edit operations
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void PrepareToEdit();
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    uint16_t platformId;
    uint16_t platformSpecificId;
    System::WeakPtr<Aspose::Font::TtfTables::TtfCMapTable> baseTable;
    
};

} // namespace TtfCMapFormats
} // namespace Font
} // namespace Aspose


