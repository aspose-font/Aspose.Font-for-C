#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/text/regularexpressions/regex.h>

#include "Aspose.Font.Cpp/src/IFontSaver.h"
#include "Aspose.Font.Cpp/src/IFont.h"
#include "Aspose.Font.Cpp/src/Glyphs/IGlyphAccessor.h"

namespace Aspose { namespace Font { namespace Ttf { class TTFFontParser; } } }
namespace Aspose { namespace Font { namespace Type1 { namespace PostScriptExtension { class Type1CharStringCommandProcessor; } } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class Common_JavaPorting; } } } }
namespace Aspose { namespace Font { namespace Tests { namespace BaseTesting { class BaseFunctionalTests; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace TextShowing { class ShowTextBase; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class FontUtils; } } } } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace Text { class FontSubstitutionRegistrator; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class PdfFont; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class PdfFontDescriptor; } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class CharCodeSubstitutorTests; } } } }
namespace Aspose { namespace Font { enum class FontType; } }
namespace Aspose { namespace Font { enum class FontStyle; } }
namespace Aspose { namespace Font { namespace Glyphs { enum class GlyphIdType; } } }
namespace Aspose { namespace Font { namespace Exceptions { class IErrorHandler; } } }
namespace Aspose { namespace Font { class MultiLanguageString; } }
namespace Aspose { namespace Font { class IFontMetrics; } }
namespace Aspose { namespace Font { class IFontEncoding; } }
namespace Aspose { namespace Font { namespace Sources { class FontDefinition; } } }
namespace Aspose { namespace Font { namespace Rendering { class FontRenderingContext; } } }
namespace Aspose { namespace Font { class IFontSource; } }
namespace Aspose { namespace Font { namespace Sources { class IFontSearcher; } } }
namespace Aspose { namespace Font { namespace Sources { class StreamSource; } } }
namespace Aspose { namespace Font { class FontAdoptionOptions; } }
namespace Aspose { namespace Font { class IFontSubset; } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }
namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }

namespace Aspose {

namespace Font {

/// <summary>
/// Represents base Font class.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS Font : public virtual Aspose::Font::IFont, public Aspose::Font::Glyphs::IGlyphAccessor, public Aspose::Font::IFontSaver
{
    typedef Font ThisType;
    typedef Aspose::Font::IFont BaseType;
    typedef Aspose::Font::Glyphs::IGlyphAccessor BaseType1;
    typedef Aspose::Font::IFontSaver BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Ttf::TTFFontParser;
    friend class Aspose::Font::Type1::PostScriptExtension::Type1CharStringCommandProcessor;
    friend class Aspose::Font::Tests::FunctionalTests::Common_JavaPorting;
    friend class Aspose::Font::Tests::BaseTesting::BaseFunctionalTests;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextBase;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::FontUtils;
    friend class Aspose::Pdf::Text::Font;
    friend class Aspose::Pdf::Text::FontSubstitutionRegistrator;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::PdfFont;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::PdfFontDescriptor;
    friend class Aspose::Pdf::Tests::Text::CharCodeSubstitutorTests;
    
public:

    /// <summary>
    /// Gets Font type.
    /// <example>Type1, TrueType etc.</example>
    /// </summary>
    ASPOSE_FONT_SHARED_API Aspose::Font::FontType get_FontType() override = 0;
    /// <summary>
    /// Gets Font style.
    /// This is a raw string value provided by Font file.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_Style() override = 0;
    /// <summary>
    /// Gets Font style.
    /// This is a value computed and represented in generalized type.
    /// </summary>
    ASPOSE_FONT_SHARED_API Aspose::Font::FontStyle get_FontStyle() override = 0;
    /// <summary>
    /// Gets Font family.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_FontFamily() override = 0;
    /// <summary>
    /// Gets Font name.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_FontName() override = 0;
    /// <summary>
    /// Gets Font names.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<MultiLanguageString> get_FontNames() override = 0;
    /// <summary>
    /// Gets postscript Font names.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<MultiLanguageString> get_PostscriptNames() override = 0;
    /// <summary>
    /// Gets number of glyphs in the Font.
    /// </summary>
    ASPOSE_FONT_SHARED_API int32_t get_NumGlyphs() override = 0;
    /// <summary>
    /// Gets Font metrics.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<IFontMetrics> get_Metrics() override = 0;
    /// <summary>
    /// Gets Font encoding.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<IFontEncoding> get_Encoding() override = 0;
    /// <summary>
    /// Font glyph accessor. 
    /// Retrieves glyphs and glyph identifiers.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Glyphs::IGlyphAccessor> get_GlyphAccessor() override;
    /// <summary>
    /// Glyph id type specification.
    /// For consumers who needs to know the 'bytes[]' real type.
    /// </summary>
    ASPOSE_FONT_SHARED_API Aspose::Font::Glyphs::GlyphIdType get_GlyphIdType() override = 0;
    /// <summary>
    /// Gets Font definition.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Sources::FontDefinition> get_FontDefinition() override = 0;
    /// <summary>
    /// Gets Font save functionality.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<IFontSaver> get_FontSaver() override;
    
    /// <summary>
    /// Opens a font, using FontDefinition object.
    /// </summary>
    /// <param name="fontDefinition">Font definition object.</param>
    /// <returns>Font loaded.</returns>
    static ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Font> Open(System::SharedPtr<Aspose::Font::Sources::FontDefinition> fontDefinition);
    /// <summary>
    /// Opens a font, using font type and stream source.
    /// </summary>
    /// <param name="fontType">Font type.</param>
    /// <param name="fontStreamSource">Stream source for font.</param>
    /// <returns>Font loaded.</returns>
    static ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Font> Open(Aspose::Font::FontType fontType, System::SharedPtr<Sources::StreamSource> fontStreamSource);
    /// <summary>
    /// Opens a font, using font type and font file name.
    /// </summary>
    /// <param name="fontType">Font type.</param>
    /// <param name="fileName">Font file name.</param>
    /// <returns>Font loaded.</returns>
    static ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Font> Open(Aspose::Font::FontType fontType, System::String fileName);
    /// <summary>
    /// Opens a font, using font type and font data byte array.
    /// </summary>
    /// <param name="fontType">Font type.</param>
    /// <param name="fontData">Byte array to load font from.</param>
    /// <returns>Font loaded.</returns>
    static ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Font> Open(Aspose::Font::FontType fontType, System::ArrayPtr<uint8_t> fontData);
    /// <summary>
    /// Saves the Font into original format.
    /// </summary>
    /// <remarks>
    /// Note: following Font types are supported for saving:
    /// New TTF Fonts;
    /// TTF Font subsets;
    /// CFF Font subsets;
    /// Type1 Font subsets.
    /// </remarks>
    /// <param name="stream">Stream to save font.</param>
    ASPOSE_FONT_SHARED_API void Save(System::SharedPtr<System::IO::Stream> stream) override;
    /// <summary>
    /// Saves the Font into original format.
    /// </summary>
    /// <remarks>
    /// Note: following Font types are supported for saving:
    /// New TTF Fonts;
    /// TTF Font subsets;
    /// CFF Font subsets;
    /// Type1 Font subsets.
    /// </remarks>
    /// <param name="fileName">File to save font.</param>
    ASPOSE_FONT_SHARED_API void Save(System::String fileName) override;
    /// <summary>
    /// Gets glyphs representation for text.
    /// </summary>
    /// <param name="text">Input text.</param>
    /// <returns>GlyphId array.</returns>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<System::SharedPtr<Glyphs::GlyphId>> GetGlyphsForText(System::String text) override;
    /// <summary>
    /// Returns glyph by glyph id.
    /// Glyph id is a unique number for a glyph, which is font type dependent. GlyphId - derived object.
    /// For example:
    ///    Type1's id is a glyph name, instance of (<see cref="GlyphStringId"></see>) class.
    ///    TTF's id is an int index, instance of (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="id">Glyph id.</param>
    /// <returns>Glyph.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Glyphs::Glyph> GetGlyphById(System::SharedPtr<Glyphs::GlyphId> id) override = 0;
    /// <summary>
    /// Returns all glyph ids, available in the Font.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// For example:
    ///    Type1's id is a glyph name, instance of (<see cref="GlyphStringId"></see>) class.
    ///    TTF's id is an int index, instance of (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <returns>Glyph identifiers.</returns>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<System::SharedPtr<Glyphs::GlyphId>> GetAllGlyphIds() override = 0;
    
protected:

    /// <summary>
    /// Gets Font style.
    /// This is a raw string value provided by Font file.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void set_Style(System::String value) = 0;
    /// <summary>
    /// Gets Font family.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void set_FontFamily(System::String value) = 0;
    /// <summary>
    /// Gets Font name.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void set_FontName(System::String value) = 0;
    /// <summary>
    /// Gets Font names.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void set_FontNames(System::SharedPtr<MultiLanguageString> value) = 0;
    /// <summary>
    /// Gets postscript Font names.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void set_PostscriptNames(System::SharedPtr<MultiLanguageString> value) = 0;
    System::SharedPtr<Rendering::FontRenderingContext> get_RenderingContext() const;
    
    Font();
    
    /// <summary>
    /// Opens a font: searches for the Font in font source, represented with IFontSource.
    /// </summary>
    /// <param name="fontSource">font source.</param>
    /// <param name="fontSearchSpec">font searcher.</param>
    /// <returns>font loaded, if found, null else</returns>
    static System::SharedPtr<Aspose::Font::Font> Open(System::SharedPtr<IFontSource> fontSource, System::SharedPtr<Sources::IFontSearcher> fontSearchSpec);
    /// <summary>
    /// Creates new font.
    /// </summary>
    /// <remarks>
    /// Note: TTF font type is now supported only.
    /// </remarks>
    /// <param name="fontType">Font type.</param>
    /// <returns>New font.</returns>
    static System::SharedPtr<Aspose::Font::Font> Create(Aspose::Font::FontType fontType);
    /// <summary>
    /// Creates new font based on other font.
    /// FontAdoptionOptions object defines a way how the baseFont is used with the new font creation.
    /// </summary>
    /// <remarks>
    /// Note: TTF font type is now supported only.
    /// </remarks>
    /// <param name="fontType">Font type.</param>
    /// <param name="baseFont">Font to take settings from.</param>
    /// <param name="fontAdoptionOptions">Options to manage how the baseFont settings affects new font settings.</param>
    /// <returns>New font.</returns>
    static System::SharedPtr<Aspose::Font::Font> Create(Aspose::Font::FontType fontType, System::SharedPtr<Aspose::Font::Font> baseFont, System::SharedPtr<FontAdoptionOptions> fontAdoptionOptions);
    /// <summary>
    /// Converts the Font into another format.
    /// </summary>
    /// <remarks>
    /// Note: TTF Font type is now supported only.
    /// </remarks>
    /// <param name="fontType">Font format type to convert into.</param>
    /// <returns>Font converted into new format.</returns>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Font> Convert(Aspose::Font::FontType fontType);
    /// <summary>
    /// Creates font subset
    /// </summary>
    /// <returns>font subset</returns>
    virtual System::SharedPtr<IFontSubset> DoSubset() = 0;
    /// <summary>
    /// Splits subset font name and returns font name and subset tag
    /// </summary>
    /// <param name="subsetFontName">full name of font subset</param>
    /// <param name="fontName">font name part</param>
    /// <param name="subsetTag">tag part</param>
    static void SplitSubsetFontName(System::String subsetFontName, System::String& fontName, System::String& subsetTag);
    
    virtual ASPOSE_FONT_SHARED_API ~Font();
    
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    static System::SharedPtr<Exceptions::IErrorHandler> errorHandler;
    System::SharedPtr<Rendering::FontRenderingContext> renderingContext;
    static System::SharedPtr<System::Text::RegularExpressions::Regex> subsetRegex;
    
    static bool& _isLicensed();
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Font
} // namespace Aspose


