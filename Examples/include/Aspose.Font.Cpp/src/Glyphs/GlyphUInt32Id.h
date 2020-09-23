#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Font.Cpp/src/Glyphs/GlyphId.h"


namespace Aspose {

namespace Font {

namespace Glyphs {

/// <summary>
/// Represents integer glyph id.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS GlyphUInt32Id : public Aspose::Font::Glyphs::GlyphId
{
    typedef GlyphUInt32Id ThisType;
    typedef Aspose::Font::Glyphs::GlyphId BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend ASPOSE_FONT_SHARED_API bool operator ==(System::SharedPtr<GlyphUInt32Id> const &obj1, System::SharedPtr<System::Object> const &obj2);
    friend ASPOSE_FONT_SHARED_API bool operator !=(System::SharedPtr<GlyphUInt32Id> const &obj1, System::SharedPtr<System::Object> const &obj2);
    
public:

    /// <summary>
    /// Gets not default value.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::SharedPtr<GlyphUInt32Id> get_NotDefId();
    /// <summary>
    /// Gets int value of the ID.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint32_t get_Value() const;
    /// <summary>
    /// Sets int value of the ID.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Value(uint32_t value);
    
    /// <summary>
    /// Initializes new <see cref="GlyphUInt32Id"></see> object.
    /// </summary>
    /// <param name="value">Glyph identifier.</param>
    ASPOSE_FONT_SHARED_API GlyphUInt32Id(uint32_t value);
    
    /// <summary>
    /// Returns true if Ids are equal.
    /// </summary>
    /// <param name="obj">glyph identifier to compare with</param>
    /// <returns>comparison result</returns>
    ASPOSE_FONT_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// GetHashCode implementation.
    /// </summary>
    /// <returns>hash code of object</returns>
    ASPOSE_FONT_SHARED_API int32_t GetHashCode() const override;
    ASPOSE_FONT_SHARED_API int32_t CompareTo(System::SharedPtr<GlyphId> other) override;
    ASPOSE_FONT_SHARED_API System::String ToString() const override;
    
protected:

    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    /// <summary>
    /// Notdef value.
    /// </summary>
    static System::SharedPtr<GlyphUInt32Id>& notDefId();
    
    uint32_t value;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
    /// <summary>
    /// Gets or sets string representation of the integer value.
    /// </summary>
    /// <returns>glyph identifier</returns>
    System::String ToString_NonConst();
    
};

ASPOSE_FONT_SHARED_API bool operator ==(System::SharedPtr<GlyphUInt32Id> const &obj1, System::SharedPtr<System::Object> const &obj2);
ASPOSE_FONT_SHARED_API bool operator !=(System::SharedPtr<GlyphUInt32Id> const &obj1, System::SharedPtr<System::Object> const &obj2);

} // namespace Glyphs
} // namespace Font
} // namespace Aspose


