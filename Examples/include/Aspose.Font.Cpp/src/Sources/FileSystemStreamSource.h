#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "Aspose.Font.Cpp/src/Sources/StreamSource.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose {

namespace Font {

namespace Sources {

/// <summary>
/// Represents a stream source based on file system.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS FileSystemStreamSource : public Aspose::Font::Sources::StreamSource
{
    typedef FileSystemStreamSource ThisType;
    typedef Aspose::Font::Sources::StreamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    /// <summary>
    /// Gets file name.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_FileName() const;
    /// <summary>
    /// Sets file name.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_FileName(System::String value);
    
    /// <summary>
    /// Initializes new <see cref="FileSystemStreamSource"></see> object.
    /// </summary>
    /// <param name="fileName">File name.</param>
    ASPOSE_FONT_SHARED_API FileSystemStreamSource(System::String fileName);
    
    /// <summary>
    /// Returns font file stream.
    /// Don't forget to close the stream after use.
    /// </summary>
    /// <returns>Font file stream.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<System::IO::Stream> GetFontStream() override;
    /// <summary>
    /// Clones the FileSystemStreamSource object.
    /// </summary>
    /// <returns>Copy of FileSystemStreamSource object.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
private:

    System::String fileName;
    
    /// <summary>
    /// for serialization
    /// </summary>
    FileSystemStreamSource();
    
};

} // namespace Sources
} // namespace Font
} // namespace Aspose


