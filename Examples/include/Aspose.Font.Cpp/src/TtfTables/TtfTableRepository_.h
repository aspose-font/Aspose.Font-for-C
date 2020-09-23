#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { class Font; } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class OtlGlyphsPositioner; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TextScriptDetector; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFGSUBLkpChainContextSubstFmt2Impl; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFGPOSLkpMarkToBaseImpl; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFGPOSLkpPairPosAdjFmt2Impl; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFLookupManagerBase; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFGSUBPOSContextLookupsApplierBase; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFGSUBLkpLigSubstProcessor; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFLookupResourceLocator; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Bytecode { class BytecodeInterpreter; } } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class PdfOpenTypeFontParser; } } } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontParser; } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontSaver; } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontDefinitionParser; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFontMetrics; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfEncoding; } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontSubset; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Utils { class TTFUtils; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Validation { class PdfAFontValidator; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Validation { class TTFFontCorrector; } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfHheaTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfHmtxTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfLocaTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfOs2Table; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfPostTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfSubsetGlyfTable; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class TTF_Common; } } } }
namespace Aspose { namespace Font { namespace Tests { namespace OpenTypeLayoutTests { class TTFMangalTests; } } } }
namespace Aspose { namespace Font { namespace Tests { namespace OpenTypeLayoutTests { class TTFTeluguTest; } } } }
namespace Aspose { namespace Page { namespace EPS { namespace GraphicsIO { namespace Aps { class FontConverter; } } } } }
namespace Aspose { namespace Page { namespace EPS { namespace Postscript { class DefineFont; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class OpenTypeLayoutFont; } } } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfOffsetSubtable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfHeadTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfNameTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfMaxpTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfCMapTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfKernTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfCffTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfCvtTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfFpgmTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfPrepTable; } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TtfGposTable; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TtfGSubTable; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TtfGdefTable; } } } }

namespace Aspose {

namespace Font {

namespace TtfTables {

/// <summary>
/// Represents repository of TTF tables.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfTableRepository : public System::Object
{
    typedef TtfTableRepository ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Font;
    friend class Aspose::Font::Otl::AdvancedTypographicTables::OtlGlyphsPositioner;
    friend class Aspose::Font::Otl::AdvancedTypographicTables::TextScriptDetector;
    friend class Aspose::Font::Otl::AdvancedTypographicTables::TTFGSUBLkpChainContextSubstFmt2Impl;
    friend class Aspose::Font::Otl::AdvancedTypographicTables::TTFGPOSLkpMarkToBaseImpl;
    friend class Aspose::Font::Otl::AdvancedTypographicTables::TTFGPOSLkpPairPosAdjFmt2Impl;
    friend class Aspose::Font::Otl::AdvancedTypographicTables::TTFLookupManagerBase;
    friend class Aspose::Font::Otl::AdvancedTypographicTables::TTFGSUBPOSContextLookupsApplierBase;
    friend class Aspose::Font::Otl::AdvancedTypographicTables::TTFGSUBLkpLigSubstProcessor;
    friend class Aspose::Font::Otl::AdvancedTypographicTables::TTFLookupResourceLocator;
    friend class Aspose::Font::Ttf::Internals::Bytecode::BytecodeInterpreter;
    friend class Aspose::Font::Ttf::Internals::Parsing::PdfOpenTypeFontParser;
    friend class Aspose::Font::Ttf::TTFFontParser;
    friend class Aspose::Font::Ttf::TTFFontSaver;
    friend class Aspose::Font::Ttf::TTFFontDefinitionParser;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::Ttf::TtfFontMetrics;
    friend class Aspose::Font::Ttf::TtfEncoding;
    friend class Aspose::Font::Ttf::TTFFontSubset;
    friend class Aspose::Font::Ttf::Utils::TTFUtils;
    friend class Aspose::Font::Ttf::Validation::PdfAFontValidator;
    friend class Aspose::Font::Ttf::Validation::TTFFontCorrector;
    friend class Aspose::Font::TtfTables::TtfGlyfTable;
    friend class Aspose::Font::TtfTables::TtfHheaTable;
    friend class Aspose::Font::TtfTables::TtfHmtxTable;
    friend class Aspose::Font::TtfTables::TtfLocaTable;
    friend class Aspose::Font::TtfTables::TtfOs2Table;
    friend class Aspose::Font::TtfTables::TtfPostTable;
    friend class Aspose::Font::TtfTables::TtfSubsetGlyfTable;
    friend class Aspose::Font::Tests::FunctionalTests::TTF_Common;
    friend class Aspose::Font::Tests::OpenTypeLayoutTests::TTFMangalTests;
    friend class Aspose::Font::Tests::OpenTypeLayoutTests::TTFTeluguTest;
    friend class Aspose::Page::EPS::GraphicsIO::Aps::FontConverter;
    friend class Aspose::Page::EPS::Postscript::DefineFont;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::OpenTypeLayoutFont;
    
public:

    /// <summary>
    /// Gets head table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfHeadTable> get_HeadTable() const;
    /// <summary>
    /// Gets name table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfNameTable> get_NameTable() const;
    /// <summary>
    /// Gets maxp table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfMaxpTable> get_MaxpTable() const;
    /// <summary>
    /// Gets loca table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfLocaTable> get_LocaTable() const;
    /// <summary>
    /// Gets glyf table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfGlyfTable> get_GlyfTable() const;
    /// <summary>
    /// Gets CMap table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfCMapTable> get_CMapTable() const;
    /// <summary>
    /// Gets hhea table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfHheaTable> get_HheaTable() const;
    /// <summary>
    /// Gets hmtx table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfHmtxTable> get_HmtxTable() const;
    /// <summary>
    /// Gets post table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfPostTable> get_PostTable() const;
    /// <summary>
    /// Gets cff table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfCffTable> get_CffTable() const;
    /// <summary>
    /// Gets cvt table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfCvtTable> get_CvtTable() const;
    /// <summary>
    /// Gets fpgm table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfFpgmTable> get_FpgmTable() const;
    /// <summary>
    /// Gets prep table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfPrepTable> get_PrepTable() const;
    /// <summary>
    /// Gets OS/2 table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfOs2Table> get_Os2Table() const;
    
protected:

    System::SharedPtr<System::Collections::Generic::List<System::String>> TagSequence;
    
    /// <summary>
    /// Gets offset table
    /// </summary>
    System::SharedPtr<TtfOffsetSubtable> get_OffsetSubtable() const;
    /// <summary>
    /// Sets offset table
    /// </summary>
    void set_OffsetSubtable(System::SharedPtr<TtfOffsetSubtable> value);
    /// <summary>
    /// Gets head table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_HeadTable(System::SharedPtr<TtfHeadTable> value);
    /// <summary>
    /// Gets name table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_NameTable(System::SharedPtr<TtfNameTable> value);
    /// <summary>
    /// Gets maxp table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_MaxpTable(System::SharedPtr<TtfMaxpTable> value);
    /// <summary>
    /// Gets loca table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_LocaTable(System::SharedPtr<TtfLocaTable> value);
    /// <summary>
    /// Gets glyf table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_GlyfTable(System::SharedPtr<TtfGlyfTable> value);
    /// <summary>
    /// Gets CMap table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_CMapTable(System::SharedPtr<TtfCMapTable> value);
    /// <summary>
    /// Gets hhea table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_HheaTable(System::SharedPtr<TtfHheaTable> value);
    /// <summary>
    /// Gets hmtx table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_HmtxTable(System::SharedPtr<TtfHmtxTable> value);
    /// <summary>
    /// Gets post table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_PostTable(System::SharedPtr<TtfPostTable> value);
    /// <summary>
    /// Gets kern table.
    /// </summary>
    System::SharedPtr<TtfKernTable> get_KernTable() const;
    /// <summary>
    /// Sets kern table.
    /// </summary>
    void set_KernTable(System::SharedPtr<TtfKernTable> value);
    /// <summary>
    /// Gets cff table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_CffTable(System::SharedPtr<TtfCffTable> value);
    /// <summary>
    /// Gets cvt table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_CvtTable(System::SharedPtr<TtfCvtTable> value);
    /// <summary>
    /// Gets fpgm table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_FpgmTable(System::SharedPtr<TtfFpgmTable> value);
    /// <summary>
    /// Gets prep table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_PrepTable(System::SharedPtr<TtfPrepTable> value);
    /// <summary>
    /// Gets OS/2 table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Os2Table(System::SharedPtr<TtfOs2Table> value);
    System::String get_DiagnosticsInfo() const;
    void set_DiagnosticsInfo(System::String value);
    /// <summary>
    /// Gets GPOS table
    /// </summary>
    System::SharedPtr<Aspose::Font::Otl::AdvancedTypographicTables::TtfGposTable> get_GPOSTable() const;
    /// <summary>
    /// Gets GPOS table
    /// </summary>
    void set_GPOSTable(System::SharedPtr<Aspose::Font::Otl::AdvancedTypographicTables::TtfGposTable> value);
    /// <summary>
    /// Gets GSUB table
    /// </summary>
    System::SharedPtr<Aspose::Font::Otl::AdvancedTypographicTables::TtfGSubTable> get_GSUBTable() const;
    /// <summary>
    /// Gets GSUB table
    /// </summary>
    void set_GSUBTable(System::SharedPtr<Aspose::Font::Otl::AdvancedTypographicTables::TtfGSubTable> value);
    /// <summary>
    /// Gets GDEF table
    /// </summary>
    System::SharedPtr<Aspose::Font::Otl::AdvancedTypographicTables::TtfGdefTable> get_GDEFTable() const;
    /// <summary>
    /// Gets GDEF table
    /// </summary>
    void set_GDEFTable(System::SharedPtr<Aspose::Font::Otl::AdvancedTypographicTables::TtfGdefTable> value);
    
    /// <summary>
    /// Creates regular empty repository
    /// </summary>
    /// <returns></returns>
    static System::SharedPtr<TtfTableRepository> CreateTableRepository();
    /// <summary>
    /// Creates new repository for font subset
    /// </summary>
    static System::SharedPtr<TtfTableRepository> CreateSubsetTableRepository(System::SharedPtr<TtfTableRepository> originalRepository);
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<TtfOffsetSubtable> offsetSubtable;
    System::SharedPtr<TtfHeadTable> headTable;
    System::SharedPtr<TtfNameTable> nameTable;
    System::SharedPtr<TtfMaxpTable> maxpTable;
    System::SharedPtr<TtfGlyfTable> glyfTable;
    System::SharedPtr<TtfLocaTable> locaTable;
    System::SharedPtr<TtfCMapTable> cMapTable;
    System::SharedPtr<TtfHheaTable> hheaTable;
    System::SharedPtr<TtfHmtxTable> hmtxTable;
    System::SharedPtr<TtfPostTable> postTable;
    System::SharedPtr<TtfKernTable> kernTable;
    System::SharedPtr<TtfCffTable> cffTable;
    System::SharedPtr<TtfCvtTable> cvtTable;
    System::SharedPtr<TtfFpgmTable> fpgmTable;
    System::SharedPtr<TtfPrepTable> prepTable;
    System::SharedPtr<TtfOs2Table> os2Table;
    System::String diagnosticsInfo;
    System::SharedPtr<Aspose::Font::Otl::AdvancedTypographicTables::TtfGposTable> gposTable;
    System::SharedPtr<Aspose::Font::Otl::AdvancedTypographicTables::TtfGSubTable> gsubTable;
    System::SharedPtr<Aspose::Font::Otl::AdvancedTypographicTables::TtfGdefTable> gdefTable;
    
    /// <summary>
    /// Constructor
    /// </summary>
    TtfTableRepository();
    
};

} // namespace TtfTables
} // namespace Font
} // namespace Aspose


