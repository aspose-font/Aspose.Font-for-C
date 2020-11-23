#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/Sources/StreamSource.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose {

namespace Font {

namespace Sources {

/// <summary>
/// Represents a stream source based on content stream.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS ByteContentStreamSource : public Aspose::Font::Sources::StreamSource
{
    typedef ByteContentStreamSource ThisType;
    typedef Aspose::Font::Sources::StreamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes new <see cref="ByteContentStreamSource"></see> object.
    /// </summary>
    /// <param name="fileContent">File bytes.</param>
    ASPOSE_FONT_SHARED_API ByteContentStreamSource(System::ArrayPtr<uint8_t> fileContent);
    
    /// <summary>
    /// Returns font file stream.
    /// Don't forget to close the stream after use.
    /// </summary>
    /// <returns>Font file stream.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<System::IO::Stream> GetFontStream() override;
    /// <summary>
    /// Clones the ByteContentStreamSource object.
    /// </summary>
    /// <returns>Copy of object.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<uint8_t> content;
    
    /// <summary>
    /// for serialization
    /// </summary>
    ByteContentStreamSource();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ByteContentStreamSource, CODEPORTING_ARGS());
    
};

} // namespace Sources
} // namespace Font
} // namespace Aspose


