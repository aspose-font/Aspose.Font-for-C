#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Font.Cpp/src/ISupportsNameAddressing.h"
#include "Aspose.Font.Cpp/src/IFontEncoding.h"

namespace Aspose { namespace Font { namespace Type1 { class Type1Font; } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1FontParser; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class Type1_Common; } } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class Type1MetricFont_Common; } } } }
namespace Aspose { namespace Font { class NameToCodeMap; } }
namespace Aspose { namespace Font { namespace Type1 { namespace Internals { class EncodingArray; } } } }
namespace Aspose { namespace Font { class IUnicodeList; } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }
namespace Aspose { namespace Font { class IEncodingParameters; } }

namespace Aspose {

namespace Font {

namespace Type1 {

/// <summary>
/// Represents Type1 Font encoding.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS Type1Encoding : public Aspose::Font::IFontEncoding, public Aspose::Font::ISupportsNameAddressing
{
    typedef Type1Encoding ThisType;
    typedef Aspose::Font::IFontEncoding BaseType;
    typedef Aspose::Font::ISupportsNameAddressing BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Type1::Type1Font;
    friend class Aspose::Font::Type1::Type1FontParser;
    friend class Aspose::Font::Tests::FunctionalTests::Type1_Common;
    friend class Aspose::Font::Tests::FunctionalTests::Type1MetricFont_Common;
    
public:

    /// <summary>
    /// Decodes Gid to unicode.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// For example:
    ///    Type1's id is a glyph name, instance of (<see cref="GlyphStringId"></see>) class.
    ///    TTF's id is an int index, instance of (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="charCode">Character code to get glyph identifier for.</param>
    /// <returns>Glyph identifier related to character code passed.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::GlyphId> DecodeToGid(uint32_t charCode) override;
    /// <summary>
    /// Parameterized decode method.
    /// Not supported for Type1 Font type.
    /// </summary>
    /// <param name="parameters">Not supported for Type1 Font type.</param>
    /// <param name="charCode">Not supported for Type1 Font type.</param>
    /// <returns>Not supported for Type1 Font type.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::GlyphId> DecodeToGidParameterized(System::SharedPtr<IEncodingParameters> parameters, uint32_t charCode) override;
    /// <summary>
    /// Encodes the glyph.
    /// For TTF Fonts the character code is unicode.
    /// Not supported for Type1 Font types.
    /// </summary>
    /// <param name="gid">Glyph id.</param>
    /// <param name="charCode">Character code associated with the glyph id.</param>
    ASPOSE_FONT_SHARED_API void Encode(uint32_t gid, uint32_t charCode) override;
    /// <summary>
    /// Decodes Gid to Unicode.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// For example:
    ///    Type1's id is a glyph name, instance of (<see cref="GlyphStringId"></see>) class.
    ///    TTF's id is an int index, instance of (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="gid">Glyph identifier of symbol to decode.</param>
    /// <returns>Unicode value related to glyph id passed.</returns>
    ASPOSE_FONT_SHARED_API uint32_t GidToUnicode(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> gid) override;
    /// <summary>
    /// Returns GlyphId for unicode. Or notdef if font doesn't contain glyph for the unicode.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// For example:
    ///    Type1's id is a glyph name, instance of (<see cref="GlyphStringId"></see>) class.
    ///    TTF's id is an int index, instance of (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="unicode">Unicode to get glyph identifier for.</param>
    /// <returns>Glyph identifier related to unicode passed.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::GlyphId> UnicodeToGid(uint32_t unicode) override;
    /// <summary>
    /// Returns name to character code encoding map.
    /// Note: Character code is not a unicode. Character code is a char index in Font encoding "table".
    /// </summary>
    /// <returns>Name to character code encoding map.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<NameToCodeMap> GetNameToCharCodeIndex() override;
    
protected:

    System::SharedPtr<Aspose::Font::Type1::Internals::EncodingArray> get_EncodingArray() const;
    System::SharedPtr<IUnicodeList> get_UnicodeList();
    void set_UnicodeList(System::SharedPtr<IUnicodeList> value);
    
    Type1Encoding(System::SharedPtr<Type1Font> font);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Type1Encoding, CODEPORTING_ARGS(System::SharedPtr<Type1Font> font));
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<NameToCodeMap> nameToCodeIndex;
    System::WeakPtr<Type1Font> font;
    System::SharedPtr<Aspose::Font::Type1::Internals::EncodingArray> _encodingArray;
    System::SharedPtr<IUnicodeList> _unicodeList;
    System::SharedPtr<System::Object> _initLock;
    System::SharedPtr<System::Object> _initLock2;
    
};

} // namespace Type1
} // namespace Font
} // namespace Aspose


