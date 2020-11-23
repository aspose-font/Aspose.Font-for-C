#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/dictionary.h>
#include <system/array.h>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { class FontEnvironment; } }
namespace Aspose { namespace Font { namespace Type1 { class Type1FontParser; } } }
namespace Aspose { namespace Font { namespace Type1 { namespace Internals { class EncodingArray; } } } }

namespace Aspose {

namespace Font {

namespace Type1 {

/// <summary>
/// Represents specific encodings for consumer-aware Fonts.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS FontSpecificEncodings : public System::Object
{
    typedef FontSpecificEncodings ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::FontEnvironment;
    friend class Aspose::Font::Type1::Type1FontParser;
    
public:

    /// <summary>
    /// Register encoding for consumer-aware Fonts.
    /// </summary>
    /// <param name="fontName">Font name.</param>
    /// <param name="encoding">Encoding.</param>
    ASPOSE_FONT_SHARED_API void RegisterEncoding(System::String fontName, System::ArrayPtr<System::String> encoding);
    
protected:

    FontSpecificEncodings();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontSpecificEncodings, CODEPORTING_ARGS());
    System::SharedPtr<Internals::EncodingArray> GetEncoding(System::String fontName);
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<Internals::EncodingArray>>> cachedEncodings;
    System::SharedPtr<System::Object> syncObject;
    
};

} // namespace Type1
} // namespace Font
} // namespace Aspose


