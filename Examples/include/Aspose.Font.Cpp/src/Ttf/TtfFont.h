#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/eventargs.h>
#include <system/collections/list.h>

#include "Aspose.Font.Cpp/src/TtfTables/TtfNameTable.h"
#include "Aspose.Font.Cpp/src/Font.h"

namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class OtlGlyphsPositioner; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TextScriptDetector; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFGSUBLkpChainContextSubstFmt2Impl; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFGPOSLkpMarkToBaseImpl; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFGPOSLkpPairPosAdjFmt2Impl; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFLookupManagerBase; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFGSUBPOSContextLookupsApplierBase; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFGSUBLkpLigSubstProcessor; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class TTFLookupResourceLocator; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class PdfOpenTypeFontParser; } } } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontParser; } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontSaver; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFontMetrics; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfEncoding; } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontSubset; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Utils { class TTFUtils; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Validation { class PdfAFontValidator; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Validation { class TTFFontCorrector; } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfCffTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfSubsetGlyfTable; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class TTFFontValidator; } } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class TTF_Bytecode_Tests; } } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class TTF_Common; } } } }
namespace Aspose { namespace Page { namespace EPS { namespace GraphicsIO { namespace Aps { class FontConverter; } } } } }
namespace Aspose { namespace Page { namespace EPS { namespace Postscript { class DefineFont; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace TextShowing { class ShowTextBase; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class FontUtils; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace TextShowing { namespace AuxillaryObjects { class Type0FontLigaturesProcessor; } } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsSubsetter; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class TTFSubsetterBase; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class NotDefGlyphVerifierBase; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class OpenTypeLayoutFont; } } } } } }
namespace Aspose { namespace Font { enum class FontStyle; } }
namespace Aspose { namespace Font { enum class FontType; } }
namespace Aspose { namespace Font { namespace Glyphs { enum class GlyphIdType; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { namespace Sources { class FontDefinition; } } }
namespace Aspose { namespace Font { class MultiLanguageString; } }
namespace Aspose { namespace Font { namespace TtfTables { class TTFNonSupportedTable; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { class IFontMetrics; } }
namespace Aspose { namespace Font { class IFontEncoding; } }
namespace Aspose { namespace Font { class FontAdoptionOptions; } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfNameTable; } } }
namespace Aspose { namespace Font { class IFontSubset; } }
namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphIdList; } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { class OtlTextContext; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { enum class FeatureTypeEnum; } } } }
namespace Aspose { namespace Font { namespace Otl { namespace AdvancedTypographicTables { enum class UnicodeRangesEnum : uint8_t; } } } }

namespace Aspose {

namespace Font {

namespace Ttf {

/// <summary>
/// Represents TTF Font.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfFont : public Aspose::Font::Font
{
    typedef TtfFont ThisType;
    typedef Aspose::Font::Font BaseType;
    
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
    friend class Aspose::Font::Ttf::Internals::Parsing::PdfOpenTypeFontParser;
    friend class Aspose::Font::Ttf::TTFFontParser;
    friend class Aspose::Font::Ttf::TTFFontSaver;
    friend class Aspose::Font::Ttf::TtfFontMetrics;
    friend class Aspose::Font::Ttf::TtfEncoding;
    friend class Aspose::Font::Ttf::TTFFontSubset;
    friend class Aspose::Font::Ttf::Utils::TTFUtils;
    friend class Aspose::Font::Ttf::Validation::PdfAFontValidator;
    friend class Aspose::Font::Ttf::Validation::TTFFontCorrector;
    friend class Aspose::Font::TtfTables::TtfCffTable;
    friend class Aspose::Font::TtfTables::TtfGlyfTable;
    friend class Aspose::Font::TtfTables::TtfSubsetGlyfTable;
    friend class Aspose::Font::Tests::FunctionalTests::TTFFontValidator;
    friend class Aspose::Font::Tests::FunctionalTests::TTF_Bytecode_Tests;
    friend class Aspose::Font::Tests::FunctionalTests::TTF_Common;
    friend class Aspose::Page::EPS::GraphicsIO::Aps::FontConverter;
    friend class Aspose::Page::EPS::Postscript::DefineFont;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextBase;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::FontUtils;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::AuxillaryObjects::Type0FontLigaturesProcessor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsSubsetter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::TTFSubsetterBase;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::NotDefGlyphVerifierBase;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::OpenTypeLayoutFont;
    
public:

    /// <summary>
    /// Gets TTF tables.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::TtfTables::TtfTableRepository> get_TtfTables();
    /// <summary>
    /// Gets CFF Font if present.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Font> get_CffFont();
    /// <summary>
    /// Gets Font type.
    /// Returns FontType.TTF value.
    /// </summary>
    ASPOSE_FONT_SHARED_API Aspose::Font::FontType get_FontType() override;
    /// <summary>
    /// Gets Font family.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_FontFamily() override;
    /// <summary>
    /// Gets Font style.
    /// This is a raw string value provided by Font file.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_Style() override;
    /// <summary>
    /// Gets Font style.
    /// This is a value computed and represented in generalized type.
    /// </summary>
    ASPOSE_FONT_SHARED_API Aspose::Font::FontStyle get_FontStyle() override;
    /// <summary>
    /// Gets Font name.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_FontName() override;
    /// <summary>
    /// Gets Font names.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<MultiLanguageString> get_FontNames() override;
    /// <summary>
    /// Gets Postscript Font names.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<MultiLanguageString> get_PostscriptNames() override;
    /// <summary>
    /// Gets number of glyphs in the Font.
    /// </summary>
    ASPOSE_FONT_SHARED_API int32_t get_NumGlyphs() override;
    /// <summary>
    /// Returns true in case Font is symbolic.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_IsSymbolic();
    /// <summary>
    /// Gets Font metrics.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<IFontMetrics> get_Metrics() override;
    /// <summary>
    /// Gets Font encoding.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<IFontEncoding> get_Encoding() override;
    /// <summary>
    /// Gets glyph id type specification.
    /// </summary>
    ASPOSE_FONT_SHARED_API Aspose::Font::Glyphs::GlyphIdType get_GlyphIdType() override;
    /// <summary>
    /// Gets Font definition.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Sources::FontDefinition> get_FontDefinition() override;
    
    /// <summary>
    /// Returns glyph by glyph id.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// TTF Font glyph id can be instance of (<see cref="GlyphStringId"></see>) class or (<see cref="GlyphUInt32Id"></see>) class.
    /// Name (string) glyph addressing is supported for TTF Fonts via Post table mapping.
    /// In case CFF Font inside, the CFF structures are used to address glyphs by name.
    /// </summary>
    /// <param name="id">Glyph id.</param>
    /// <returns>Glyph.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::Glyph> GetGlyphById(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> id) override;
    /// <summary>
    /// Returns glyph by glyph name.
    /// Name (string) glyph addressing is supported for TTF fonts via Post table mapping.
    /// In case CFF Font inside, the CFF structures are used to address glyphs by name.
    /// </summary>
    /// <param name="glyphName">Glyph string identifier.</param>
    /// <returns>Glyph.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::Glyph> GetGlyphById(System::String glyphName);
    /// <summary>
    /// Returns glyph by glyph id.
    /// </summary>
    /// <param name="id">Glyph index.</param>
    /// <returns>Glyph.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::Glyph> GetGlyphById(uint32_t id);
    /// <summary>
    /// Returns array of all glyph ids, available in the Font.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// TTF Font glyph id can be instance of (<see cref="GlyphStringId"></see>) class or (<see cref="GlyphUInt32Id"></see>) class.
    /// Name (string) glyph addressing is supported for TTF Fonts via Post table mapping.
    /// In case CFF Font inside, the CFF structures are used to address glyphs by name.
    /// </summary>
    /// <returns>Glyph identifiers.</returns>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Font::Glyphs::GlyphId>> GetAllGlyphIds() override;
    /// <summary>
    /// Gets a glyph by glyph identifier passed and fills passed list of glyph identifiers with components 
    /// of this glyph.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// TTF Font glyph id can be instance of (<see cref="GlyphStringId"></see>) class or (<see cref="GlyphUInt32Id"></see>) class.
    /// Name (string) glyph addressing is supported for TTF Fonts via Post table mapping.
    /// In case CFF Font inside, the CFF structures are used to address glyphs by name.
    /// </summary>
    /// <remarks>
    /// Empty collection componentsToPopulate should be passed that will contain glyph components id list.
    /// </remarks>
    /// <param name="id">Glyph id.</param>
    /// <param name="componentsToPopulate">List of glyph identifiers to fill.</param>
    virtual ASPOSE_FONT_SHARED_API void GetGlyphComponentsById(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> id, System::SharedPtr<Aspose::Font::Glyphs::GlyphIdList> componentsToPopulate);
    /// <summary>
    /// Gets a glyph by glyph name passed and fills passed list of glyph identifiers with components 
    /// of this glyph.
    /// </summary>
    /// <remarks>
    /// Empty collection componentsToPopulate should be passed that will contain glyph components id list.
    /// </remarks>
    /// <param name="glyphName">Glyph name.</param>
    /// <param name="componentsToPopulate">List of glyph identifiers to fill.</param>
    ASPOSE_FONT_SHARED_API void GetGlyphComponentsById(System::String glyphName, System::SharedPtr<Aspose::Font::Glyphs::GlyphIdList> componentsToPopulate);
    /// <summary>
    /// Gets a glyph by glyph index passed and fills passed list of glyph identifiers with components 
    /// of this glyph.
    /// </summary>
    /// <remarks>
    /// Empty collection componentsToPopulate should be passed that will contain glyph components id list.
    /// </remarks>
    /// <param name="id">Glyph index.</param>
    /// <param name="componentsToPopulate">List of glyph identifiers to fill.</param>
    ASPOSE_FONT_SHARED_API void GetGlyphComponentsById(uint32_t id, System::SharedPtr<Aspose::Font::Glyphs::GlyphIdList> componentsToPopulate);
    /// <summary>
    /// Get glyphs representation for text.
    /// </summary>
    /// <param name="text">Input text.</param>
    /// <returns>GlyphId array.</returns>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Font::Glyphs::GlyphId>> GetGlyphsForText(System::String text) override;
    
protected:

    /// <summary>
    /// Returns true if the font requires hinting.
    /// 
    /// This is actual for some tricky fonts that perform composite glyphs alignment with bytecode instructions.
    /// </summary>
    bool get_RequiresBytecodeHinting();
    /// <summary>
    /// Font that provides hinting strustures
    /// </summary>
    System::SharedPtr<Internals::TtfParserContext> get_AdoptedHintingFrom();
    /// <summary>
    /// Font that provides hinting strustures
    /// </summary>
    void set_AdoptedHintingFrom(System::SharedPtr<Internals::TtfParserContext> value);
    /// <summary>
    /// Gets TTF tables.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void set_TtfTables(System::SharedPtr<Aspose::Font::TtfTables::TtfTableRepository> value);
    /// <summary>
    /// Gets Font family.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_FontFamily(System::String value) override;
    /// <summary>
    /// Gets Font style.
    /// This is a raw string value provided by Font file.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Style(System::String value) override;
    /// <summary>
    /// Gets Font name.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_FontName(System::String value) override;
    /// <summary>
    /// Gets Font names.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_FontNames(System::SharedPtr<MultiLanguageString> value) override;
    /// <summary>
    /// Gets Postscript Font names.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_PostscriptNames(System::SharedPtr<MultiLanguageString> value) override;
    bool get_IsPdfOpenTypeExtension() const;
    void set_IsPdfOpenTypeExtension(bool value);
    System::ArrayPtr<System::SharedPtr<Aspose::Font::TtfTables::TTFNonSupportedTable>> get_NonSupportedTables();
    /// <summary>
    /// The Advanced typographic tables (OpenType Layout tables) extend the functionality of fonts with either 
    /// TrueType or CFF outlines. OpenType Layout fonts contain additional information that extends 
    /// the capabilities of the fonts to support high-quality international typography.
    /// Current release supports such tables: GDEF, GPOS, GSUB
    /// </summary>
    bool get_HasAdvancedTypographicTables();
    
    /// <summary>
    /// Creates empty TTF font that adopt some important font characteristics
    /// </summary>
    /// <param name="baseFont"></param>
    TtfFont(System::SharedPtr<TtfFont> baseFont);
    /// <summary>
    /// Creates empty TTF font object.
    /// </summary>
    TtfFont();
    /// <summary>
    /// Internal constructor.
    /// A factory should be used to create the font
    /// </summary>
    TtfFont(System::SharedPtr<Aspose::Font::Sources::FontDefinition> fontDefinition, System::SharedPtr<Aspose::Font::TtfTables::TtfTableRepository> ttfTables);
    
    /// <summary>
    /// Creates new TTF font.
    /// </summary>
    /// <returns>new font</returns>
    static System::SharedPtr<Aspose::Font::Font> Create();
    /// <summary>
    /// Creates new font based on other font.
    /// FontAdoptionOptions object defines a way how the baseFont is used with the new font creation.
    /// </summary>
    /// <param name="baseFont">font to take settings from</param>
    /// <param name="fontAdoptionOptions">options to manage how the baseFont settings affects new font settings</param>
    /// <returns>new font</returns>
    static System::SharedPtr<Aspose::Font::Font> Create(System::SharedPtr<Aspose::Font::Font> baseFont, System::SharedPtr<FontAdoptionOptions> fontAdoptionOptions);
    /// <summary>
    /// Creates font subset
    /// </summary>
    /// <returns>subset created</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<IFontSubset> DoSubset() override;
    /// <summary>
    /// Adds glyph to the font.
    /// Returns glyph index of the newly added glyph.
    /// </summary>
    /// <param name="glyph">glyph to add</param>
    /// <returns>glyph index of the newly added glyph</returns>
    uint16_t AddGlyph(System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph);
    /// <summary>
    /// Gets glyph's context for input text
    /// </summary>
    /// <param name="text">input text</param>
    /// <returns>glyph context</returns>
    System::SharedPtr<Aspose::Font::Otl::AdvancedTypographicTables::OtlTextContext> GetGlyphContextForText(System::String text);
    /// <summary>
    /// returns Glyph id as uint
    /// 
    /// the passed ID can be GlyphUInt32Id or GlyphStringId
    /// </summary>
    /// <param name="id"></param>
    /// <returns></returns>
    uint32_t GlyphIdToUInt(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> id);
    System::SharedPtr<System::Collections::Generic::List<System::String>> GetAllFontTables();
    void AddTable(System::String tableName, System::SharedPtr<Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length);
    
    virtual ASPOSE_FONT_SHARED_API ~TtfFont();
    
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<TtfEncoding> fontEncoding;
    System::SharedPtr<TtfFontMetrics> fontMetrics;
    System::SharedPtr<Aspose::Font::TtfTables::TtfTableRepository> _ttfTables;
    System::SharedPtr<Aspose::Font::Sources::FontDefinition> fontDefinition;
    System::SharedPtr<Aspose::Font::Font> innerCFFFont;
    System::SharedPtr<System::Object> initSync;
    bool cffInitDone;
    System::String fontName;
    System::String fontFamily;
    System::String rawFontStyle;
    Aspose::Font::FontStyle generalizedFontStyle;
    System::SharedPtr<MultiLanguageString> fontNames;
    System::SharedPtr<MultiLanguageString> postscriptNames;
    System::SharedPtr<System::Object> initLock1;
    System::SharedPtr<System::Object> initLock2;
    System::SharedPtr<System::Collections::Generic::List<System::String>> fontTableNames;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Font::TtfTables::TTFNonSupportedTable>>> _nonSupportedTables;
    bool _isPdfOpenTypeExtension;
    
    void NameTableOnNameChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> eventArgs);
    static void CopyName(System::SharedPtr<TtfFont> font, System::SharedPtr<TtfFont> otherFont, TtfTables::TtfNameTable::NameId nameId);
    void EnsureCFFFontLoaded();
    /// <summary>
    /// parses font style information
    /// </summary>
    static Aspose::Font::FontStyle ParseAndGeneralizeFontStyle(System::String fontStyle);
    /// <summary>
    /// Objective of this method - detect is bytecode hinting required for current font.
    /// This is actual for some tricky fonts that perform composite glyphs alignment with bytecode instructions.
    /// </summary>
    /// <returns>true/false</returns>
    bool IsByteCodeHintingRequired();
    static void RunFeatures(System::SharedPtr<TtfFont> Font, Aspose::Font::Otl::AdvancedTypographicTables::FeatureTypeEnum FeatureType, System::SharedPtr<Aspose::Font::Otl::AdvancedTypographicTables::OtlTextContext> Context, System::String ScriptName, Aspose::Font::Otl::AdvancedTypographicTables::UnicodeRangesEnum ScriptType);
    
};

} // namespace Ttf
} // namespace Font
} // namespace Aspose


