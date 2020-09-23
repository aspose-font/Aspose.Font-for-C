#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "Aspose.Font.Cpp/src/ISupportsNameAddressing.h"
#include "Aspose.Font.Cpp/src/IFontEncoding.h"

namespace Aspose { namespace Font { namespace Cff { class CffFont; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class CFF_Common; } } } }
namespace Aspose { namespace Font { class NameToCodeMap; } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }
namespace Aspose { namespace Font { class IEncodingParameters; } }

namespace Aspose {

namespace Font {

namespace Cff {

/// <summary>
/// Represents CFF Font encoding.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS CffEncoding : public Aspose::Font::IFontEncoding, public Aspose::Font::ISupportsNameAddressing
{
    typedef CffEncoding ThisType;
    typedef Aspose::Font::IFontEncoding BaseType;
    typedef Aspose::Font::ISupportsNameAddressing BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Cff::CffFont;
    friend class Aspose::Font::Tests::FunctionalTests::CFF_Common;
    
public:

    /// <summary>
    /// Decodes Gid to unicode.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// CFF Font glyph id can be instance of (<see cref="GlyphStringId"></see>) class or (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="gid">Glyph identifier of symbol to decode.</param>
    /// <returns>Unicode value related to glyph id passed.</returns>
    ASPOSE_FONT_SHARED_API uint32_t GidToUnicode(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> gid) override;
    /// <summary>
    /// Encodes the glyph.
    /// Not supported for CFF Font types.
    /// </summary>
    /// <param name="gid">Glyph id.</param>
    /// <param name="charCode">CharCode associated with the glyph id.</param>
    ASPOSE_FONT_SHARED_API void Encode(uint32_t gid, uint32_t charCode) override;
    /// <summary>
    /// Decodes a unicode and returns glyph id.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// CFF Font glyph id can be instance of (<see cref="GlyphStringId"></see>) class or (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="unicode">Unicode to get glyph identifier for.</param>
    /// <returns>Glyph identifier related to unicode passed.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::GlyphId> UnicodeToGid(uint32_t unicode) override;
    /// <summary>
    /// Decodes Gid to Unicode.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// CFF Font glyph id can be instance of (<see cref="GlyphStringId"></see>) class or (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="charCode">Character code to get glyph identifier for.</param>
    /// <returns>Glyph identifier related to charCode passed.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::GlyphId> DecodeToGid(uint32_t charCode) override;
    /// <summary>
    /// Parameterized decode method.
    /// Not supported for CFF Font type.
    /// </summary>
    /// <param name="parameters">Implementation of <see cref="IEncodingParameters"></see>interface.</param>
    /// <param name="charCode">Character code to get glyph identifier for.</param>
    /// <returns>Glyph identifier related to charCode passed.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::GlyphId> DecodeToGidParameterized(System::SharedPtr<IEncodingParameters> parameters, uint32_t charCode) override;
    /// <summary>
    /// Returns name to character code encoding map.
    /// Note: character code is not a unicode. Character code is a char index in Font encoding "table".
    /// </summary>
    /// <returns>Name to character code encoding map.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<NameToCodeMap> GetNameToCharCodeIndex() override;
    /// <summary>
    /// Returns name to character code encoding map.
    /// Note: Character code is not a unicode. Character code is a char index in Font encoding "table".
    /// </summary>
    /// <returns>Name to character code encoding map.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<NameToCodeMap> GetNameToGidIndex();
    /// <summary>
    /// Returns name to character code encoding map.
    /// Note: Character code is not a unicode. Character code is a char index in Font encoding "table".
    /// </summary>        
    /// <returns>Name to character code encoding map.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<NameToCodeMap> GetNameToSidIndex();
    /// <summary>
    /// Gets name for the SID specified.
    /// </summary>
    /// <param name="sid">String identifier.</param>
    /// <returns>Name from string INDEX if found.</returns>
    ASPOSE_FONT_SHARED_API System::String GetSidName(int32_t sid);
    
protected:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<CffEncoding>>> get_EncodingDictionary() const;
    bool get_UseStandardEncoding() const;
    void set_UseStandardEncoding(bool value);
    /// <summary>
    /// standard CFF strings
    /// </summary>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<System::String> get_StandardStrings();
    
    CffEncoding(System::SharedPtr<CffFont> font);
    
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool useStandardEncoding;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<CffEncoding>>> encodingDictionary;
    System::SharedPtr<CffFont> font;
    static const int32_t maxStandardStringsIndex;
    System::SharedPtr<NameToCodeMap> nameToCodeIndex;
    System::SharedPtr<NameToCodeMap> nameToGidIndex;
    System::SharedPtr<NameToCodeMap> nameToSidIndex;
    System::ArrayPtr<System::String> standardStrings;
    System::SharedPtr<System::Object> initSync1;
    System::SharedPtr<System::Object> initSync2;
    System::SharedPtr<System::Object> initSync3;
    
    void InitStandardStrings();
    
};

} // namespace Cff
} // namespace Font
} // namespace Aspose


