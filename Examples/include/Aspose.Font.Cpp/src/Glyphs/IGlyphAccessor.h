#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Glyphs { enum class GlyphIdType; } } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }
namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }

namespace Aspose {

namespace Font {

namespace Glyphs {

/// <summary>
/// Defines functionality to retrieve specified glyph identifiers and glyphs.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS IGlyphAccessor : public virtual System::Object
{
    typedef IGlyphAccessor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Glyph id type specification.
    /// </summary>
    virtual Aspose::Font::Glyphs::GlyphIdType get_GlyphIdType() = 0;
    
    /// <summary>
    /// Returns all glyph ids, available in the Font.
    /// Glyph id is a unique number for a glyph, which is font type dependent.
    /// For example:
    ///    Type1's id is a glyph name, instance of (<see cref="GlyphStringId"></see>) class.
    ///    TTF's id is an int index, instance of (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <returns>Glyph identifiers.</returns>
    virtual System::ArrayPtr<System::SharedPtr<GlyphId>> GetAllGlyphIds() = 0;
    /// <summary>
    /// Get glyphs representation for text.
    /// </summary>
    /// <param name="text">Input text.</param>
    /// <returns>GlyphId array.</returns>
    virtual System::ArrayPtr<System::SharedPtr<GlyphId>> GetGlyphsForText(System::String text) = 0;
    /// <summary>
    /// Returns glyph by glyph id.
    /// Glyph id is a unique number for a glyph, which is font type dependent. GlyphId - derived object.
    /// For example:
    ///    Type1's id is a glyph name, instance of (<see cref="GlyphStringId"></see>) class.
    ///    TTF's id is an int index, instance of (<see cref="GlyphUInt32Id"></see>) class.
    /// </summary>
    /// <param name="id">glyph ID.</param>
    /// <returns>Glyph</returns>
    virtual System::SharedPtr<Glyph> GetGlyphById(System::SharedPtr<GlyphId> id) = 0;
    
};

} // namespace Glyphs
} // namespace Font
} // namespace Aspose


