#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose {

namespace Font {

namespace Glyphs {

/// <summary>
/// Represents glyph id.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS GlyphId : public System::Object
{
    typedef GlyphId ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend ASPOSE_FONT_SHARED_API bool operator ==(System::SharedPtr<GlyphId> const &obj1, System::SharedPtr<System::Object> const &obj2);
    friend ASPOSE_FONT_SHARED_API bool operator !=(System::SharedPtr<GlyphId> const &obj1, System::SharedPtr<System::Object> const &obj2);
    
public:

    /// <summary>
    /// Returns hashcode of object.
    /// </summary>
    /// <returns>Hashcode of object.</returns>
    ASPOSE_FONT_SHARED_API int32_t GetHashCode() const override = 0;
    /// <summary>
    /// Returns true if two glyph ids are not equal.
    /// </summary>
    /// <param name="obj">Glyph identifier to compare with.</param>
    /// <returns>Comparison result.</returns>
    ASPOSE_FONT_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    virtual ASPOSE_FONT_SHARED_API int32_t CompareTo(System::SharedPtr<GlyphId> other) = 0;
    ASPOSE_FONT_SHARED_API System::String ToString() const override = 0;
    
protected:

    GlyphId();
    
    virtual ASPOSE_FONT_SHARED_API ~GlyphId();
    
};

ASPOSE_FONT_SHARED_API bool operator ==(System::SharedPtr<GlyphId> const &obj1, System::SharedPtr<System::Object> const &obj2);
ASPOSE_FONT_SHARED_API bool operator !=(System::SharedPtr<GlyphId> const &obj1, System::SharedPtr<System::Object> const &obj2);

} // namespace Glyphs
} // namespace Font
} // namespace Aspose


