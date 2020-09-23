#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }
namespace Aspose { namespace Font { class IEncodingParameters; } }

namespace Aspose {

namespace Font {

/// <summary>
/// Defines an interface for Font encoding.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS IFontEncoding : public virtual System::Object
{
    typedef IFontEncoding ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Decodes Gid to unicode.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// For example:
    ///    Type1's id is a glyph name, instance of (<see cref="GlyphStringId"></see>) class.
    ///    TTF's id is an int index, instance of (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="gid">Glyph identifier of symbol to decode.</param>
    /// <returns>Unicode value related to glyph id passed.</returns>
    virtual uint32_t GidToUnicode(System::SharedPtr<Glyphs::GlyphId> gid) = 0;
    /// <summary>
    /// Encodes the glyph.
    /// For TTF Fonts the charCode is unicode.
    /// </summary>
    /// <param name="gid">Glyph id.</param>
    /// <param name="charCode">Character code associated with the glyph id.</param>
    virtual void Encode(uint32_t gid, uint32_t charCode) = 0;
    /// <summary>
    /// Decodes a unicode and returns glyph id.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// For example:
    ///    Type1's id is a glyph name, instance of (<see cref="GlyphStringId"></see>) class.
    ///    TTF's id is an int index, instance of (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="unicode">Unicode to get glyph identifier for.</param>
    /// <returns>Glyph identifier related to unicode passed.</returns>
    virtual System::SharedPtr<Glyphs::GlyphId> UnicodeToGid(uint32_t unicode) = 0;
    /// <summary>
    /// Decodes a character code and returns glyph id.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// For example:
    ///    Type1's id is a glyph name, instance of (<see cref="GlyphStringId"></see>) class.
    ///    TTF's id is an int index, instance of (<see cref="GlyphUInt32Id"></see>) class.
    /// Note: character code is not necessary a unicode. Character code is a char index in Font encoding "table".
    /// </summary>
    /// <param name="charCode">Character code to get glyph identifier for.</param>
    /// <returns>Glyph identifier related to charCode passed.</returns>
    virtual System::SharedPtr<Glyphs::GlyphId> DecodeToGid(uint32_t charCode) = 0;
    /// <summary>
    /// Parameterized decode method.
    /// 
    /// Some font types can have multiple encoding algorithms/maps.
    /// So, IEncodingParameters interface is used to create concrete font encoding parameters.
    /// </summary>
    /// <param name="parameters">Implementation of <see cref="IEncodingParameters"></see>interface.</param>
    /// <param name="charCode">Character code to get glyph identifier for.</param>
    /// <returns>Glyph identifier related to char code passed.</returns>
    virtual System::SharedPtr<Glyphs::GlyphId> DecodeToGidParameterized(System::SharedPtr<IEncodingParameters> parameters, uint32_t charCode) = 0;
    
};

} // namespace Font
} // namespace Aspose


