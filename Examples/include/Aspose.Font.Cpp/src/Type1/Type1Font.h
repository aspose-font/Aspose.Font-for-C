#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>

#include "Aspose.Font.Cpp/src/Font.h"

namespace Aspose { namespace Font { namespace Type1 { class Type1MetricFont; } } }
namespace Aspose { namespace Font { namespace Type1 { namespace PostScriptExtension { class Type1CharStringCommandProcessor; } } } }
namespace Aspose { namespace Font { namespace Ttf { class Type1FontSaver; } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1FontMetrics; } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1FontParser; } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1FontSubset; } } }
namespace Aspose { namespace Font { namespace Tests { namespace RegressionTests { class Type1_Regression; } } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class Type1_Common; } } } }
namespace Aspose { namespace Font { enum class FontType; } }
namespace Aspose { namespace Font { enum class FontStyle; } }
namespace Aspose { namespace Font { namespace Glyphs { enum class GlyphIdType; } } }
namespace Aspose { namespace Font { namespace Type1 { namespace Internals { class Type1FontDictionary; } } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1Encoding; } } }
namespace Aspose { namespace Font { namespace Sources { class FontDefinition; } } }
namespace Aspose { namespace Font { namespace Structs { class ByteArrayAccessor; } } }
namespace Aspose { namespace Font { class MultiLanguageString; } }
namespace Aspose { namespace Font { class IFontMetrics; } }
namespace Aspose { namespace Font { class IFontEncoding; } }
namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }
namespace Aspose { namespace Font { class IFontSubset; } }

namespace Aspose {

namespace Font {

namespace Type1 {

/// <summary>
/// Represents Type1 Font.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS Type1Font : public Aspose::Font::Font
{
    typedef Type1Font ThisType;
    typedef Aspose::Font::Font BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Type1::Type1MetricFont;
    friend class Aspose::Font::Type1::PostScriptExtension::Type1CharStringCommandProcessor;
    friend class Aspose::Font::Ttf::Type1FontSaver;
    friend class Aspose::Font::Type1::Type1FontMetrics;
    friend class Aspose::Font::Type1::Type1FontParser;
    friend class Aspose::Font::Type1::Type1FontSubset;
    friend class Aspose::Font::Tests::RegressionTests::Type1_Regression;
    friend class Aspose::Font::Tests::FunctionalTests::Type1_Common;
    
public:

    /// <summary>
    /// Gets Font type.
    /// Returns FontType.Type1 value.
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
    /// Gets Font names.
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
    /// Glyph id type specification.
    /// </summary>
    ASPOSE_FONT_SHARED_API Aspose::Font::Glyphs::GlyphIdType get_GlyphIdType() override;
    /// <summary>
    /// Gets Font definition.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Sources::FontDefinition> get_FontDefinition() override;
    
    /// <summary>
    /// Returns glyph by glyph id.
    /// </summary>
    /// <param name="id">Glyph id.</param>
    /// <returns>Glyph.</returns>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::Glyph> GetGlyphById(System::String id);
    /// <summary>
    /// Returns glyph by glyph id.
    /// </summary>
    /// <param name="id">Glyph id.</param>
    /// <returns>Glyph.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::Glyph> GetGlyphById(uint32_t id);
    /// <summary>
    /// Returns glyph by glyph id.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// Type1 Font glyph id can be instance of (<see cref="GlyphStringId"></see>) class or (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="id">Glyph id.</param>
    /// <returns>Glyph.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::Glyph> GetGlyphById(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> id) override;
    /// <summary>
    /// Returns array of all glyph ids, available in the Font.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// Type1 Font glyph id can be instance of (<see cref="GlyphStringId"></see>) class or (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <returns>All glyph identifiers, available in the Font.</returns>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Font::Glyphs::GlyphId>> GetAllGlyphIds() override;
    
protected:

    /// <summary> 
    /// Type1 file format dictionary "Type1FontDictionary"
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Type1::Internals::Type1FontDictionary> get_Type1FontDictionary();
    /// <summary> 
    /// Type1 file format dictionary "Type1FontDictionary"
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void set_Type1FontDictionary(System::SharedPtr<Aspose::Font::Type1::Internals::Type1FontDictionary> value);
    /// <summary>
    /// the SeacSequence is used to control stack overflow with incorrect seac declarations in Type1 fonts
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<double>> get_SeacSequence() const;
    /// <summary>
    /// Gets Font names.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_FontNames(System::SharedPtr<MultiLanguageString> value) override;
    /// <summary>
    /// Gets postscript Font names.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_PostscriptNames(System::SharedPtr<MultiLanguageString> value) override;
    
    /// <summary>
    /// Internal constructor.
    /// A factory should be used to create the font
    /// </summary>
    Type1Font(System::SharedPtr<Aspose::Font::Sources::FontDefinition> fontDefinition);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Type1Font, CODEPORTING_ARGS(System::SharedPtr<Aspose::Font::Sources::FontDefinition> fontDefinition));
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
    /// Creates font subset
    /// </summary>
    /// <returns>font subset created</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<IFontSubset> DoSubset() override;
    
    virtual ASPOSE_FONT_SHARED_API ~Type1Font();
    
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Font::Type1::Internals::Type1FontDictionary> type1FontDictionary;
    System::SharedPtr<Type1Encoding> fontEncoding;
    System::SharedPtr<Type1FontMetrics> fontMetrics;
    System::SharedPtr<Aspose::Font::Sources::FontDefinition> fontDefinition;
    System::SharedPtr<Aspose::Font::Structs::ByteArrayAccessor> charstringAccessor;
    System::SharedPtr<System::Collections::Generic::List<double>> seacSequence;
    System::SharedPtr<MultiLanguageString> fontNames;
    System::SharedPtr<MultiLanguageString> postscriptNames;
    System::SharedPtr<System::Object> initLock1;
    System::SharedPtr<System::Object> initLock2;
    System::SharedPtr<System::Object> initLock3;
    System::SharedPtr<System::Object> initLock4;
    
    /// <summary>
    /// parses font style information
    /// </summary>
    Aspose::Font::FontStyle ParseAndGeneralizeFontStyle();
    
};

} // namespace Type1
} // namespace Font
} // namespace Aspose


