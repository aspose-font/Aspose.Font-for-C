#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/TtfTables/TtfTableBase.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfSubsetLocalTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfLocaTable; } } }

namespace Aspose {

namespace Font {

namespace TtfTables {

/// <summary>
/// Represents "loca" table of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfLocaTable : public Aspose::Font::TtfTables::TtfTableBase
{
    typedef TtfLocaTable ThisType;
    typedef Aspose::Font::TtfTables::TtfTableBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::TtfTables::TtfSubsetLocalTable;
    
public:

    /// <summary>
    /// Represents glyph offsets list.
    /// </summary>
    class ASPOSE_FONT_SHARED_CLASS OffsetsList : public System::Object
    {
        typedef OffsetsList ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Font::Ttf::TtfFont;
        friend class Aspose::Font::TtfTables::TtfGlyfTable;
        friend class Aspose::Font::TtfTables::TtfLocaTable;
        friend class Aspose::Font::TtfTables::TtfSubsetLocalTable;
        
    public:
    
        /// <summary>
        /// Gets glyph offsets count.
        /// </summary>
        ASPOSE_FONT_SHARED_API int32_t get_Count();
        
        /// <summary>
        /// Gets offset by index.
        /// </summary>
        /// <param name="index">Offset index.</param>
        ASPOSE_FONT_SHARED_API uint32_t idx_get(int32_t index);
        
    protected:
    
        OffsetsList(int32_t numGlyphs);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OffsetsList, CODEPORTING_ARGS(int32_t numGlyphs));
        
        /// <summary>
        /// Gets offset by index.
        /// </summary>
        /// <param name="index">Offset index.</param>
        ASPOSE_FONT_SHARED_API void idx_set(int32_t index, uint32_t value);
        
        void Add(uint32_t offset);
        void Add(int32_t offset);
        System::SharedPtr<System::Collections::Generic::List<uint32_t>> GetOffsetsList();
        ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::List<uint32_t>> offsetsList;
        
    };
    
    
public:

    /// <summary>
    /// Gets table tag.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::String get_Tag();
    /// <summary>
    /// Gets glyph offsets list.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<TtfLocaTable::OffsetsList> get_Offsets();
    
protected:

    /// <summary>
    /// Table Tag.
    /// </summary>
    static const System::String TAG;
    static const System::String LowerTag;
    
    TtfLocaTable(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfLocaTable, CODEPORTING_ARGS(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font));
    
    TtfLocaTable(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfLocaTable, CODEPORTING_ARGS(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length));
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void LazyLoadImpl(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum) override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<TtfLocaTable::OffsetsList> offsets;
    
};

} // namespace TtfTables
} // namespace Font
} // namespace Aspose


