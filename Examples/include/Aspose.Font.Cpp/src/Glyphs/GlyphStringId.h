#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Font.Cpp/src/Glyphs/GlyphId.h"


namespace Aspose {

namespace Font {

namespace Glyphs {

/// <summary>
/// Represents string glyph id.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS GlyphStringId : public Aspose::Font::Glyphs::GlyphId
{
    typedef GlyphStringId ThisType;
    typedef Aspose::Font::Glyphs::GlyphId BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    /// <summary>
    /// Gets string value.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_Value() const;
    /// <summary>
    /// Sets string value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Value(System::String value);
    /// <summary>
    /// Gets not default value.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::SharedPtr<GlyphStringId> get_NotDefId();
    
    /// <summary>
    /// Initializes new <see cref="GlyphStringId"></see> object.
    /// </summary>
    /// <param name="value">Glyph identifier.</param>
    ASPOSE_FONT_SHARED_API GlyphStringId(System::String value);
    
    /// <summary>
    /// Returns true if string IDs are equal.
    /// </summary>
    /// <param name="obj">Glyph string identifier to compare with.</param>
    /// <returns>Comparison result.</returns>
    ASPOSE_FONT_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// GetHashCode implementation.
    /// </summary>
    /// <returns>Hash code of object.</returns>
    ASPOSE_FONT_SHARED_API int32_t GetHashCode() const override;
    ASPOSE_FONT_SHARED_API int32_t CompareTo(System::SharedPtr<GlyphId> other) override;
    ASPOSE_FONT_SHARED_API System::String ToString() const override;
    
private:

    System::String value;
    
    /// <summary>
    /// Notdef value.
    /// </summary>
    static System::SharedPtr<GlyphStringId>& notDefId();
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
    /// <summary>
    /// Returns string value the glyph id.
    /// </summary>
    /// <returns>Glyph identifier.</returns>
    System::String ToString_NonConst();
    
};

} // namespace Glyphs
} // namespace Font
} // namespace Aspose


