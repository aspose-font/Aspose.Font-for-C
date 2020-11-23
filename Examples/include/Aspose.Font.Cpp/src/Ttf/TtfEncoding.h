#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.Font.Cpp/src/IFontEncoding.h"

namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }
namespace Aspose { namespace Font { class IEncodingParameters; } }
namespace Aspose { namespace Font { namespace TtfCMapFormats { class TtfCMapFormatBaseTable; } } }

namespace Aspose {

namespace Font {

namespace Ttf {

/// <summary>
/// Represents TTF Font encoding.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfEncoding : public Aspose::Font::IFontEncoding
{
    typedef TtfEncoding ThisType;
    typedef Aspose::Font::IFontEncoding BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Ttf::TtfFont;
    
public:

    /// <summary>
    /// Decodes glyph id to unicode.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// For example:
    ///    Type1's id is a glyph name, instance of (<see cref="GlyphStringId"></see>) class.
    ///    TTF's id is an int index, instance of (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="glyphId">Glyph identifier of symbol to decode.</param>
    /// <returns>Unicode value related to glyph id passed.</returns>
    ASPOSE_FONT_SHARED_API uint32_t GidToUnicode(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId) override;
    /// <summary>
    /// Encodes the glyph.
    /// For TTF Fonts the character code is unicode.
    /// </summary>
    /// <param name="gid">Glyph identifier.</param>
    /// <param name="charCode">Character code.</param>
    ASPOSE_FONT_SHARED_API void Encode(uint32_t gid, uint32_t charCode) override;
    /// <summary> 
    /// Decodes a unicode and returns glyph id.
    /// </summary>
    /// <param name="unicode">Unicode to get glyph identifier for.</param>
    /// <returns>Glyph identifier related to unicode passed.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::GlyphId> UnicodeToGid(uint32_t unicode) override;
    /// <summary>
    /// TTF Font's DecodeToGlyphId implementation finds unicode table and returns glyph id for unicode char.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// For example:
    ///    Type1's id is a glyph name, instance of (<see cref="GlyphStringId"></see>) class.
    ///    TTF's id is an int index, instance of (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="unicode">Character code to get glyph identifier for.</param>
    /// <returns>Glyph identifier related to character code passed.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::GlyphId> DecodeToGid(uint32_t unicode) override;
    /// <summary>
    /// Parametrized version allows to use specific CMap table (not unicode).
    /// </summary>
    /// <param name="parameters">Implementation of <see cref="IEncodingParameters"></see>interface.</param>
    /// <param name="charCode">Character code to get glyph identifier for.</param>
    /// <returns>Glyph identifier related to character code passed.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::GlyphId> DecodeToGidParameterized(System::SharedPtr<IEncodingParameters> parameters, uint32_t charCode) override;
    
protected:

    TtfEncoding(System::SharedPtr<TtfFont> font);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfEncoding, CODEPORTING_ARGS(System::SharedPtr<TtfFont> font));
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::WeakPtr<TtfFont> font;
    System::ArrayPtr<uint32_t> _gidToUnicode;
    
    uint32_t GetGlyphIndexFromUnicodeTable(System::SharedPtr<Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable> unicodeTable, uint32_t unicode);
    
};

} // namespace Ttf
} // namespace Font
} // namespace Aspose


