#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>

#include "Aspose.Font.Cpp/src/Font.h"

namespace Aspose { namespace Font { namespace Cff { class CFFFontParser; } } }
namespace Aspose { namespace Font { namespace Cff { class CffEncoding; } } }
namespace Aspose { namespace Font { namespace Cff { namespace Internals { namespace Parsing { class CFFCharsetParser; } } } } }
namespace Aspose { namespace Font { namespace Cff { namespace Internals { namespace Parsing { class CFFRootParser; } } } } }
namespace Aspose { namespace Font { namespace Cff { namespace Internals { namespace Parsing { class CFFEncodingParser; } } } } }
namespace Aspose { namespace Font { namespace Cff { namespace Internals { namespace Parsing { class CFFFDSelectParser; } } } } }
namespace Aspose { namespace Font { namespace Cff { class CffFontMetrics; } } }
namespace Aspose { namespace Font { namespace Cff { namespace PostScriptExtension { class CFFCharStringCommandProcessor; } } } }
namespace Aspose { namespace Font { namespace Cff { class CFFFontSaver; } } }
namespace Aspose { namespace Font { namespace Cff { class CFFFontSubset; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class Common_JavaPorting; } } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class CFF_Common; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfUaConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace GlyphWidths { class GlyphWidthsUtils; } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { class TestBase; } } }
namespace Aspose { namespace Font { enum class FontStyle; } }
namespace Aspose { namespace Font { enum class FontType; } }
namespace Aspose { namespace Font { namespace Glyphs { enum class GlyphIdType; } } }
namespace Aspose { namespace Font { namespace Cff { namespace Internals { class CFFSubfont; } } } }
namespace Aspose { namespace Font { namespace Cff { namespace Internals { class CFFStructures; } } } }
namespace Aspose { namespace Font { namespace Sources { class FontDefinition; } } }
namespace Aspose { namespace Font { class MultiLanguageString; } }
namespace Aspose { namespace Font { class IFontMetrics; } }
namespace Aspose { namespace Font { class IFontEncoding; } }
namespace Aspose { namespace Font { class IFontSubset; } }
namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }

namespace Aspose {

namespace Font {

namespace Cff {

/// <summary>
/// Represents Compact Font Format (CFF).
/// </summary>
class ASPOSE_FONT_SHARED_CLASS CffFont : public Aspose::Font::Font
{
    typedef CffFont ThisType;
    typedef Aspose::Font::Font BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Cff::CFFFontParser;
    friend class Aspose::Font::Cff::CffEncoding;
    friend class Aspose::Font::Cff::Internals::Parsing::CFFCharsetParser;
    friend class Aspose::Font::Cff::Internals::Parsing::CFFRootParser;
    friend class Aspose::Font::Cff::Internals::Parsing::CFFEncodingParser;
    friend class Aspose::Font::Cff::Internals::Parsing::CFFFDSelectParser;
    friend class Aspose::Font::Cff::CffFontMetrics;
    friend class Aspose::Font::Cff::PostScriptExtension::CFFCharStringCommandProcessor;
    friend class Aspose::Font::Cff::CFFFontSaver;
    friend class Aspose::Font::Cff::CFFFontSubset;
    friend class Aspose::Font::Tests::FunctionalTests::Common_JavaPorting;
    friend class Aspose::Font::Tests::FunctionalTests::CFF_Common;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::GlyphWidths::GlyphWidthsUtils;
    friend class Aspose::Pdf::Tests::TestBase;
    
public:

    /// <summary>
    /// Gets Font type.
    /// Returns FontType.CFF value.
    /// </summary>
    ASPOSE_FONT_SHARED_API Aspose::Font::FontType get_FontType() override;
    /// <summary>
    /// Gets Font family.
    /// The Font family setter is not implemented yet.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_FontFamily() override;
    /// <summary>
    /// Gets Font family.
    /// The Font family setter is not implemented yet.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_FontFamily(System::String value) override;
    /// <summary>
    /// Gets Font face name.
    /// The Font face name setter is not implemented yet.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_FontName() override;
    /// <summary>
    /// Gets Font face name.
    /// The Font face name setter is not implemented yet.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_FontName(System::String value) override;
    /// <summary>
    /// Get Font names.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<MultiLanguageString> get_FontNames() override;
    /// <summary>
    /// Gets postscript Font names.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<MultiLanguageString> get_PostscriptNames() override;
    /// <summary>
    /// Gets Font style.
    /// This is a raw string value provided by Font file.
    /// The Style setter is not implemented yet.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_Style() override;
    /// <summary>
    /// Gets Font style.
    /// This is a raw string value provided by Font file.
    /// The Style setter is not implemented yet.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Style(System::String value) override;
    /// <summary>
    /// Gets Font style.
    /// This is a value computed and represented in generalized type.
    /// </summary>
    ASPOSE_FONT_SHARED_API Aspose::Font::FontStyle get_FontStyle() override;
    /// <summary>
    /// Gets value indicating that the Font is cid-keyed.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_IsCidKeyedFont();
    /// <summary>
    /// Gets number of glyphs in the Font.
    /// </summary>
    ASPOSE_FONT_SHARED_API int32_t get_NumGlyphs() override;
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
    /// CFF Font glyph id can be instance of (<see cref="GlyphStringId"></see>) class or (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="id">Glyph id.</param>
    /// <returns>Glyph.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::Glyph> GetGlyphById(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> id) override;
    /// <summary>
    /// Returns glyph by glyph name.
    /// </summary>
    /// <param name="glyphName">Glyph name.</param>
    /// <returns>Glyph.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::Glyph> GetGlyphById(System::String glyphName);
    /// <summary>
    /// Returns glyph by glyph id.
    /// </summary>
    /// <param name="id">Glyph id.</param>
    /// <returns>Glyph.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::Glyph> GetGlyphById(uint32_t id);
    /// <summary>
    /// Returns array of all glyph ids, available in the Font.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// CFF Font glyph id can be instance of (<see cref="GlyphStringId"></see>) class or (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <returns>All glyph identifiers, available in the Font.</returns>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Font::Glyphs::GlyphId>> GetAllGlyphIds() override;
    
protected:

    /// <summary>
    /// Internal CFF structures 
    /// </summary>
    System::SharedPtr<Internals::CFFStructures> get_Internals() const;
    /// <summary>
    /// CFF subfonts
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Internals::CFFSubfont>> get_SubFonts() const;
    /// <summary>
    /// CFF subfonts
    /// </summary>
    void set_SubFonts(System::ArrayPtr<System::SharedPtr<Internals::CFFSubfont>> value);
    System::SharedPtr<Internals::CFFSubfont> get_TopmostFont() const;
    void set_TopmostFont(System::SharedPtr<Internals::CFFSubfont> value);
    /// <summary>
    /// the SeacSequence is used to control stack overflow with incorrect seac declarations in Type1 fonts
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<int32_t>> get_SeacSequence() const;
    /// <summary>
    /// Get Font names.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_FontNames(System::SharedPtr<MultiLanguageString> value) override;
    /// <summary>
    /// Gets postscript Font names.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_PostscriptNames(System::SharedPtr<MultiLanguageString> value) override;
    
    /// <summary>
    /// Internal constructor.
    /// A factory should be used to create the Font.
    /// </summary>
    CffFont(System::SharedPtr<Aspose::Font::Sources::FontDefinition> fontDefinition);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CffFont, CODEPORTING_ARGS(System::SharedPtr<Aspose::Font::Sources::FontDefinition> fontDefinition));
    /// <summary>
    /// Internal Font family setter.
    /// </summary>
    /// <param name="value">New Font family.</param>
    void SetFontFamilyInternally(System::String value);
    /// <summary>
    /// Internal Font face name setter.
    /// </summary>
    /// <param name="value">New Font face name.</param>
    void SetFontNameInternally(System::String value);
    /// <summary>
    /// Internal Style setter.
    /// </summary>
    /// <param name="value">New Style.</param>
    void SetStyleInternally(System::String value);
    /// <summary>
    /// Creates font subset.
    /// </summary>
    /// <returns>IFontSubset.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<IFontSubset> DoSubset() override;
    /// <summary>
    /// Converts string id to int id
    /// </summary>
    /// <param name="glyphName">glyph name</param>
    /// <returns>glyph identifier</returns>
    int32_t GetGlyphIndexByGlyphName(System::String glyphName);
    /// <summary>
    /// Returns all the SIDs for the current charset. Using of this method 
    /// meaningful only when current CFF Font is CIDKeyed font. In this case
    /// font encoding data is empty and charset SIDs become font CIDs, see
    /// CFF spec. index 18 CID-keyed Fonts.
    /// </summary>
    /// <returns>all the SIDs for the current charset</returns>
    System::ArrayPtr<uint16_t> GetAllCharsetSIDs();
    /// <summary>
    /// Gets a width for the glyph specified by SID parameter. Using of this method 
    /// meaningful only when current CFF Font is CIDKeyed font. In this case
    /// font encoding data is empty and charset SIDs become font CIDs, see
    /// CFF spec. index 18 CID-keyed Fonts. For another cases, when font is not CIDKeyed font 
    /// and charset's SIDs are not CIDs using of this method leads to get incorrect glyph width.
    /// </summary>
    /// <param name="SID">glyph string identifier</param>
    /// <returns>width for the glyph specified by SID parameter</returns>
    double GetGlyphWidthBySID(int32_t SID);
    
    virtual ASPOSE_FONT_SHARED_API ~CffFont();
    
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String fontName;
    System::String fontFamily;
    System::String fontStyle;
    System::SharedPtr<Internals::CFFSubfont> topmostFont;
    System::ArrayPtr<System::SharedPtr<Internals::CFFSubfont>> subFonts;
    Aspose::Font::FontStyle generalizedFontStyle;
    System::SharedPtr<CffFontMetrics> fontMetrics;
    System::SharedPtr<Internals::CFFStructures> cFFStructures;
    System::SharedPtr<CffEncoding> cffEncoding;
    System::SharedPtr<Aspose::Font::Sources::FontDefinition> fontDefinition;
    System::SharedPtr<MultiLanguageString> fontNames;
    System::SharedPtr<MultiLanguageString> postscriptNames;
    System::SharedPtr<System::Collections::Generic::List<int32_t>> seacSequence;
    System::SharedPtr<System::Object> initLock1;
    System::SharedPtr<System::Object> initLock2;
    
    /// <summary>
    /// parses font style information
    /// </summary>
    static Aspose::Font::FontStyle ParseAndGeneralizeFontStyle(System::String fontStyle);
    
};

} // namespace Cff
} // namespace Font
} // namespace Aspose


