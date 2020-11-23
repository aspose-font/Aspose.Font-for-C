#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>
#include <system/collections/dictionary.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Cff { class CffEncoding; } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1Encoding; } } }

namespace Aspose {

namespace Font {

/// <summary>
/// Represents name to code map.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS NameToCodeMap : public System::Object
{
    typedef NameToCodeMap ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Cff::CffEncoding;
    friend class Aspose::Font::Type1::Type1Encoding;
    
public:

    /// <summary>
    /// Gets count of pairs name-code in the map.
    /// </summary>
    ASPOSE_FONT_SHARED_API int32_t get_Count();
    /// <summary>
    /// Returns string names collection.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>::KeyCollection> get_Keys();
    
    /// <summary>
    /// Gets code by name.
    /// </summary>
    /// <param name="name">Glyph name.</param>
    ASPOSE_FONT_SHARED_API int32_t idx_get(System::String name);
    
    /// <summary>
    /// Returns true in case the key is already in the map.
    /// </summary>
    /// <param name="name">Glyph name.</param>
    /// <returns>True or false.</returns>
    ASPOSE_FONT_SHARED_API bool ContainsKey(System::String name);
    
protected:

    /// <summary>
    /// internal ctor
    /// </summary>
    NameToCodeMap();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NameToCodeMap, CODEPORTING_ARGS());
    
    /// <summary>
    /// Gets code by name.
    /// </summary>
    /// <param name="name">Glyph name.</param>
    ASPOSE_FONT_SHARED_API void idx_set(System::String name, int32_t value);
    
    /// <summary>
    /// Adds new name to code pair into the map.
    /// </summary>
    /// <param name="name">glyph name</param>
    /// <param name="code">glyph code</param>
    void Add(System::String name, int32_t code);
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>> map;
    
};

} // namespace Font
} // namespace Aspose


