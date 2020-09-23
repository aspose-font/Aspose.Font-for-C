#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/TtfTables/TtfTableBase.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfEncoding; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class TTF_Common; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace TextShowing { class ShowTextBase; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace PdfUa { class PdfUaFontEncodingMappingChecker; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class SymbolicFontEncodingsFixer; } } } } } }
namespace Aspose { namespace Font { namespace TtfCMapFormats { class TtfCMapFormatBaseTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfCMapTable; } } }

namespace Aspose {

namespace Font {

namespace TtfTables {

/// <summary>
/// Represents "cmap" table of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfCMapTable : public Aspose::Font::TtfTables::TtfTableBase
{
    typedef TtfCMapTable ThisType;
    typedef Aspose::Font::TtfTables::TtfTableBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
private:

    class TableDescriptor;
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::Ttf::TtfEncoding;
    friend class Aspose::Font::Tests::FunctionalTests::TTF_Common;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextBase;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUa::PdfUaFontEncodingMappingChecker;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::SymbolicFontEncodingsFixer;
    
public:

    /// <summary>
    /// Provides brief information about CMap subtable.
    /// </summary>
    class ASPOSE_FONT_SHARED_CLASS TtfCMapSubtableDescription : public System::Object
    {
        typedef TtfCMapSubtableDescription ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Font::TtfTables::TtfCMapTable;
        
    public:
    
        /// <summary>
        /// Gets platform id.
        /// </summary>
        ASPOSE_FONT_SHARED_API uint16_t get_PlatformId() const;
        /// <summary>
        /// Gets platform-specific encoding id.
        /// </summary>
        ASPOSE_FONT_SHARED_API uint16_t get_PlatformSpecificId() const;
        /// <summary>
        /// Gets subtable format.
        /// </summary>
        ASPOSE_FONT_SHARED_API uint16_t get_Format() const;
        
    protected:
    
        TtfCMapSubtableDescription(uint16_t platformId, uint16_t platformSpecificId, uint16_t format);
        
    private:
    
        uint16_t _platformId, _platformSpecificId;
        uint16_t _format;
        
    };
    
    
private:

    class TableDescriptor : public Aspose::Font::TtfTables::TtfCMapTable::TtfCMapSubtableDescription
    {
        typedef TableDescriptor ThisType;
        typedef Aspose::Font::TtfTables::TtfCMapTable::TtfCMapSubtableDescription BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::ArrayPtr<uint8_t> SubtableBytes;
        uint32_t SubtableLength;
        System::SharedPtr<Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable> Table;
        
        TableDescriptor(uint16_t platformId, uint16_t platformSpecificId, int32_t format, System::SharedPtr<TtfCMapTable> baseTable);
        
        void PopulateTableBytes();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    
public:

    /// <summary>
    /// Gets table tag.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::String get_Tag();
    
    /// <summary>
    /// Returns CMap subtables for planformId and platformSpecificId.
    /// </summary>
    /// <param name="platformId">Platform Id.</param>
    /// <param name="platformSpecificId">Platform-specific encoding Id.</param>
    /// <returns>CMap subtables.</returns>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable>> GetPlatformTables(uint16_t platformId, uint16_t platformSpecificId);
    /// <summary>
    /// Searches and returns unicode CMap.
    /// if there is ucs-4 CMap - returns it first;
    /// otherwise - returns any unicode cmap it can find.
    /// </summary>
    /// <returns>Unicode subtable.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable> FindUnicodeTable();
    /// <summary>
    /// Returns all the subtables from CMap table.
    /// </summary>
    /// <returns>array of <see cref="TtfCMapSubtableDescription"></see> objects</returns>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<System::SharedPtr<TtfCMapTable::TtfCMapSubtableDescription>> GetAllSubtables();
    
protected:

    /// <summary>
    /// Table Tag.
    /// </summary>
    static const System::String TAG;
    static const System::String LowerTag;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TtfCMapTable"></see> class.
    /// </summary>
    /// <param name="ttfTables">TTF tables repository.</param>
    /// <param name="font">TTF font.</param>
    TtfCMapTable(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font);
    
    /// <summary>
    /// Adds new subtable to cmap table.
    /// </summary>
    /// <param name="platformId">Platform ID</param>
    /// <param name="platformSpecificId">Platform-specific encoding ID</param>
    /// <param name="format">format</param>
    void AddNewSubtable(int32_t platformId, int32_t platformSpecificId, int32_t format);
    
    TtfCMapTable(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length);
    
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void LazyLoadImpl(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    /// <summary>
    /// Maps code to glyph index.
    /// Current implementation supports mapping only for subtables of format 4. 
    /// </summary>
    /// <param name="code">character code</param>
    /// <param name="glyphIndex">glyph index</param>
    void MapCode(uint32_t code, uint32_t glyphIndex);
    ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum) override;
    /// <summary>
    /// Removes subtable with platformId, platformSpecificId specified from cmap table
    /// </summary>
    /// <param name="platformId">platform ID</param>
    /// <param name="platformSpecificId">platform-specific encoding ID</param>
    /// <returns>result of operation, false if fail</returns>
    bool RemoveSubtable(uint16_t platformId, uint16_t platformSpecificId);
    
    virtual ASPOSE_FONT_SHARED_API ~TtfCMapTable();
    
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String subtableKey;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TtfCMapTable::TableDescriptor>>>>> subTableMap;
    System::SharedPtr<Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable> unicodeTableCached;
    
    System::String BuildKey(uint16_t platformId, uint16_t platformSpecificId);
    
};

} // namespace TtfTables
} // namespace Font
} // namespace Aspose


