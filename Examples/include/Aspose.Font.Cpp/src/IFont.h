#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { enum class FontType; } }
namespace Aspose { namespace Font { enum class FontStyle; } }
namespace Aspose { namespace Font { class MultiLanguageString; } }
namespace Aspose { namespace Font { class IFontMetrics; } }
namespace Aspose { namespace Font { class IFontEncoding; } }
namespace Aspose { namespace Font { namespace Glyphs { class IGlyphAccessor; } } }
namespace Aspose { namespace Font { namespace Sources { class FontDefinition; } } }
namespace Aspose { namespace Font { class IFontSaver; } }

namespace Aspose {

namespace Font {

/// <summary>
/// Declares common functionality for all font formats.
/// Implemented by Font classes.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS IFont : public virtual System::Object
{
    typedef IFont ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets Font type.
    /// </summary>
    /// <example>Type1, TrueType etc</example>
    virtual Aspose::Font::FontType get_FontType() = 0;
    /// <summary>
    /// Gets or Sets Font style.
    /// This is a raw string value provided by Font file.
    /// </summary>
    virtual System::String get_Style() = 0;
    /// <summary>
    /// Gets or Sets Font style.
    /// This is a raw string value provided by Font file.
    /// </summary>
    virtual void set_Style(System::String value) = 0;
    /// <summary>
    /// Gets Font style.
    /// This is a value computed and represented in generalized type.
    /// </summary>
    virtual Aspose::Font::FontStyle get_FontStyle() = 0;
    /// <summary>
    /// Gets or Sets Font family.
    /// </summary>
    virtual System::String get_FontFamily() = 0;
    /// <summary>
    /// Gets or Sets Font family.
    /// </summary>
    virtual void set_FontFamily(System::String value) = 0;
    /// <summary>
    /// Gets or Sets Font face name.
    /// </summary>
    virtual System::String get_FontName() = 0;
    /// <summary>
    /// Gets or Sets Font face name.
    /// </summary>
    virtual void set_FontName(System::String value) = 0;
    /// <summary>
    /// Gets Font names.
    /// </summary>
    virtual System::SharedPtr<MultiLanguageString> get_FontNames() = 0;
    /// <summary>
    /// Gets postscript Font names.
    /// </summary>
    virtual System::SharedPtr<MultiLanguageString> get_PostscriptNames() = 0;
    /// <summary>
    /// Gets number of glyphs in the Font.
    /// </summary>
    virtual int32_t get_NumGlyphs() = 0;
    /// <summary>
    /// Gets Font metrics.
    /// </summary>
    virtual System::SharedPtr<IFontMetrics> get_Metrics() = 0;
    /// <summary>
    /// Gets Font encoding.
    /// </summary>
    virtual System::SharedPtr<IFontEncoding> get_Encoding() = 0;
    /// <summary>
    /// Gets Font glyph accessor. 
    /// Retrieves glyphs and glyph identifiers.
    /// </summary>
    virtual System::SharedPtr<Glyphs::IGlyphAccessor> get_GlyphAccessor() = 0;
    /// <summary>
    /// Gets Font definition.
    /// </summary>
    virtual System::SharedPtr<Aspose::Font::Sources::FontDefinition> get_FontDefinition() = 0;
    /// <summary>
    /// Gets Font save functionality.
    /// </summary>
    virtual System::SharedPtr<IFontSaver> get_FontSaver() = 0;
    
};

} // namespace Font
} // namespace Aspose


