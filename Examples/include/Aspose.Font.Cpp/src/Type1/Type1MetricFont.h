#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Font.Cpp/src/Type1/Type1Font.h"

namespace Aspose { namespace Font { namespace Type1 { class Type1FontParser; } } }
namespace Aspose { namespace Font { enum class FontStyle; } }
namespace Aspose { namespace Font { namespace Type1 { namespace Internals { class Type1FontDictionary; } } } }
namespace Aspose { namespace Font { class IFontEncoding; } }
namespace Aspose { namespace Font { namespace Sources { class FontDefinition; } } }
namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }

namespace Aspose {

namespace Font {

namespace Type1 {

/// <summary>
/// Type1 metric font implementation.
/// This type1 font is created using metrics only. 
///   Glyphs retrieval functions and some other that require real font are not allowed,
///      not allowed functions throw exception <see cref="Type1NotSupportedException"></see>.
///   Other properties (FontName, Weight, Metrics and Encoding) are used from metrics file.
///   Note: If metrics file defines Encoding as "FontSpecific", user should provide the specific encoding with following way:
///     
///     <code>
///        System::ArrayPtr<System::String> zapfDingbatsEncoding = System::MakeArray<System::String>({nullptr, nullptr, ..., u"space", u"a1", ...});
///        FontEnvironment::get_Current()->get_FontSpecificEncodings()->RegisterEncoding(u"ZapfDingbats", zapfDingbatsEncoding);
///     </code>
/// </summary>
class ASPOSE_FONT_SHARED_CLASS Type1MetricFont : public Aspose::Font::Type1::Type1Font
{
    typedef Type1MetricFont ThisType;
    typedef Aspose::Font::Type1::Type1Font BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Type1::Type1FontParser;
    
public:

    /// <summary>
    ///     Encoding is defined in metrics file.
    ///     StandardAdobeEncoding:
    ///       the encoding is populated automatically
    ///     FontSpecific:
    ///        user should provide the specific encoding with following way:
    ///           
    ///           <code>
    ///              System::ArrayPtr<System::String> zapfDingbatsEncoding = System::MakeArray<System::String>({nullptr, nullptr, ..., u"space", u"a1", ...});
    ///              FontEnvironment::get_Current()->get_FontSpecificEncodings()->RegisterEncoding(u"ZapfDingbats", zapfDingbatsEncoding);
    ///           </code>
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<IFontEncoding> get_Encoding() override;
    /// <summary>
    /// Gets Font family.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_FontFamily() override;
    /// <summary>
    /// Gets Font name.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_FontName() override;
    /// <summary>
    /// Gets Font style.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_Style() override;
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
    /// Returns glyph by glyph id.
    /// Not supported for <see cref="Type1MetricFont"></see> type.
    /// </summary>
    /// <param name="id">Glyph identifier.</param>
    /// <returns>Glyph.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::Glyph> GetGlyphById(System::String id) override;
    /// <summary>
    /// Returns glyph by glyph id.
    /// Not supported for <see cref="Type1MetricFont"></see> type.
    /// </summary>
    /// <param name="id">Glyph identifier.</param>
    /// <returns>Glyph.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::Glyph> GetGlyphById(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> id) override;
    /// <summary>
    /// Returns all glyph ids, available in the Font.
    /// Not supported for <see cref="Type1MetricFont"></see> type.
    /// </summary>
    /// <returns>All glyph identifiers, available in the Font.</returns>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Font::Glyphs::GlyphId>> GetAllGlyphIds() override;
    
protected:

    /// <summary> 
    /// Type1 file format dictionary "Type1FontDictionary"
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Type1::Internals::Type1FontDictionary> get_Type1FontDictionary() override;
    /// <summary> 
    /// Type1 file format dictionary "Type1FontDictionary"
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Type1FontDictionary(System::SharedPtr<Aspose::Font::Type1::Internals::Type1FontDictionary> value) override;
    
    /// <summary>
    /// Internal constructor.
    /// A factory should be used to create the font
    /// </summary>
    Type1MetricFont(System::SharedPtr<Aspose::Font::Sources::FontDefinition> fontDefinition);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Type1MetricFont, CODEPORTING_ARGS(System::SharedPtr<Aspose::Font::Sources::FontDefinition> fontDefinition));
    
private:

    /// <summary>
    /// Parses font style information.
    /// </summary>
    /// <returns>Font style.</returns>
    Aspose::Font::FontStyle ParseAndGeneralizeFontStyle();
    
};

} // namespace Type1
} // namespace Font
} // namespace Aspose


