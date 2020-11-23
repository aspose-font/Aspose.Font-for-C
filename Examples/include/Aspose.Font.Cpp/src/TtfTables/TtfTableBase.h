#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/memory_stream.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TtfGdefTable; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TtfGposSubTableBase; } } } }
namespace Aspose { namespace Font { namespace TtfCMapFormats { class TtfCMapFormat4Table; } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontParser; } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontSaver; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Utils { class TTFUtils; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Validation { class TTFFontCorrector; } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfCffTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfCMapTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfCvtTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfFpgmTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfHeadTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfHheaTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfHmtxTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfKernTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfLocaTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfMaxpTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfNameTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TTFNonSupportedTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfOs2Table; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfPostTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfPrepTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfSubsetGlyfTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfSubsetLocalTable; } } }
namespace Aspose { namespace Font { namespace Tests { namespace CommonTests { class TftEditTests; } } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class TTF_Bytecode_Tests; } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileWriter; } } } } }

namespace Aspose {

namespace Font {

namespace TtfTables {

/// <summary>
/// Represents TTF table definition.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfTableBase : public virtual System::Object
{
    typedef TtfTableBase ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Otl::AdvancedTypographicTables::TtfGdefTable;
    friend class Aspose::Font::Otl::AdvancedTypographicTables::TtfGposSubTableBase;
    friend class Aspose::Font::TtfCMapFormats::TtfCMapFormat4Table;
    friend class Aspose::Font::Ttf::TTFFontParser;
    friend class Aspose::Font::Ttf::TTFFontSaver;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::Ttf::Utils::TTFUtils;
    friend class Aspose::Font::Ttf::Validation::TTFFontCorrector;
    friend class Aspose::Font::TtfTables::TtfCffTable;
    friend class Aspose::Font::TtfTables::TtfCMapTable;
    friend class Aspose::Font::TtfTables::TtfCvtTable;
    friend class Aspose::Font::TtfTables::TtfFpgmTable;
    friend class Aspose::Font::TtfTables::TtfGlyfTable;
    friend class Aspose::Font::TtfTables::TtfHeadTable;
    friend class Aspose::Font::TtfTables::TtfHheaTable;
    friend class Aspose::Font::TtfTables::TtfHmtxTable;
    friend class Aspose::Font::TtfTables::TtfKernTable;
    friend class Aspose::Font::TtfTables::TtfLocaTable;
    friend class Aspose::Font::TtfTables::TtfMaxpTable;
    friend class Aspose::Font::TtfTables::TtfNameTable;
    friend class Aspose::Font::TtfTables::TTFNonSupportedTable;
    friend class Aspose::Font::TtfTables::TtfOs2Table;
    friend class Aspose::Font::TtfTables::TtfPostTable;
    friend class Aspose::Font::TtfTables::TtfPrepTable;
    friend class Aspose::Font::TtfTables::TtfSubsetGlyfTable;
    friend class Aspose::Font::TtfTables::TtfSubsetLocalTable;
    friend class Aspose::Font::Tests::CommonTests::TftEditTests;
    friend class Aspose::Font::Tests::FunctionalTests::TTF_Bytecode_Tests;
    
public:

    /// <summary>
    /// Reference to TTF table repository.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfTableRepository> get_TtfTables() const;
    /// <summary>
    /// Gets offset from beginning of sfnt.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_Offset() const;
    
protected:

    /// <summary>
    /// parser context
    /// </summary>
    System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> get_Context() const;
    /// <summary>
    /// indicates that the font is new
    /// </summary>
    bool get_IsNewFont() const;
    /// <summary>
    /// indicates that the font is new
    /// </summary>
    void set_IsNewFont(bool value);
    /// <summary>
    /// Indicates data state in current table, if this flag is true - table data was changd and
    /// needed to be saved.
    /// </summary>
    bool get_IsModified() const;
    /// <summary>
    /// Indicates data state in current table, if this flag is true - table data was changd and
    /// needed to be saved.
    /// </summary>
    void set_IsModified(bool value);
    /// <summary>
    /// Gets length of this table in bytes (actual length not padded length).
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_Length() const;
    
    /// <summary>
    /// Used to detect whether table already loaded
    /// </summary>
    bool loaded;
    
    TtfTableBase(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfTableBase, CODEPORTING_ARGS(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font));
    
    TtfTableBase(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfTableBase, CODEPORTING_ARGS(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length));
    void LazyLoad();
    virtual ASPOSE_FONT_SHARED_API void LazyLoadImpl(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader);
    virtual ASPOSE_FONT_SHARED_API bool IsConsistent();
    /// <summary>
    /// Loads current table
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader);
    /// <summary>
    /// Saves the table to font stream
    /// 
    /// base mathod implementation simply retrieves initial table data 
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum);
    /// <summary>
    /// Saves the initial bytes of the table
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void SaveInitialBytes(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum);
    void FinalizeWriting(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileWriter> writer, System::SharedPtr<System::IO::MemoryStream> stream, System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum);
    static uint32_t CalculateChecksum(System::ArrayPtr<uint8_t> data);
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    /// <summary>
    /// Gets checkSum checksum for this table.
    /// 
    /// NOTE: don't expose Checksum value. the checksum value can be retrieved with SaveTo(... out checksum ) method, to get all the properties in a single transaction.
    /// </summary>
    uint32_t get_CheckSum() const;
    
    bool _isNewFont;
    bool _isModified;
    /// <summary>
    /// Reference to TTF table repository
    /// </summary>
    System::WeakPtr<TtfTableRepository> ttfTables;
    /// <summary>
    /// parser context
    /// </summary>
    System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context;
    /// <summary>
    /// Spec: uint32 checkSum checksum for this table 
    /// </summary>
    uint32_t checkSum;
    /// <summary>
    /// Spec: uint32 offset offset from beginning of sfnt 
    /// </summary>
    uint32_t offset;
    /// <summary>
    /// Spec: uint32 length length of this table in byte (actual length not padded length) 
    /// </summary>
    uint32_t length;
    System::SharedPtr<System::Object> initSync;
    
};

} // namespace TtfTables
} // namespace Font
} // namespace Aspose


