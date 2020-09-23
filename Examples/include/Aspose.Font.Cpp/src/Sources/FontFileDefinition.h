#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/file_info.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Sources { class StreamSource; } } }

namespace Aspose {

namespace Font {

namespace Sources {

/// <summary>
/// Represents Font file definition.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS FontFileDefinition : public System::Object
{
    typedef FontFileDefinition ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    /// <summary>
    /// Gets Font file name.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_FileName() const;
    /// <summary>
    /// Gets Font file extension.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::String get_FileExtension() const;
    /// <summary>
    /// Gets the stream source.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Sources::StreamSource> get_StreamSource() const;
    /// <summary>
    /// Gets offset inside the stream.
    /// </summary>
    ASPOSE_FONT_SHARED_API int64_t get_Offset() const;
    
    /// <summary>
    /// Creates a file definition using file content only.
    /// </summary>
    /// <param name="streamSource">Font stream source.</param>
    ASPOSE_FONT_SHARED_API FontFileDefinition(System::SharedPtr<Aspose::Font::Sources::StreamSource> streamSource);
    /// <summary>
    /// Creates a file definition using file content only.
    /// </summary>
    /// <param name="fileExtension">Font file extension.</param>
    /// <param name="streamSource">Font stream source.</param>
    ASPOSE_FONT_SHARED_API FontFileDefinition(System::String fileExtension, System::SharedPtr<Aspose::Font::Sources::StreamSource> streamSource);
    /// <summary>
    /// Creates a file definition using file content only.
    /// </summary>
    /// <param name="fileExtension">Font file extension.</param>
    /// <param name="streamSource">Font stream source.</param>
    /// <param name="offset">Offset to font data in stream source.</param>
    ASPOSE_FONT_SHARED_API FontFileDefinition(System::String fileExtension, System::SharedPtr<Aspose::Font::Sources::StreamSource> streamSource, int64_t offset);
    /// <summary>
    /// Creates a file definition using font file (represented by FileInfo) and file content.
    /// </summary>
    /// <param name="fontFile">Font FileInfo object.</param>
    ASPOSE_FONT_SHARED_API FontFileDefinition(System::SharedPtr<System::IO::FileInfo> fontFile);
    
protected:

    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String fileName;
    System::String fileExtension;
    System::SharedPtr<Aspose::Font::Sources::StreamSource> streamSource;
    int64_t offset;
    
    /// <summary>
    /// Creates a file definition using Font name. Font extension and font file content.
    /// </summary>
    /// <param name="fileName">Font file name.</param>
    /// <param name="fileExtension">Font file extension.</param>
    /// <param name="streamSource">Font stream source.</param>
    FontFileDefinition(System::String fileName, System::String fileExtension, System::SharedPtr<Aspose::Font::Sources::StreamSource> streamSource);
    /// <summary>
    /// Creates a file definition using font name. font extension, font file content and offset.
    /// </summary>
    /// <param name="fileName">Font file name.</param>
    /// <param name="fileExtension">Font file extension.</param>
    /// <param name="streamSource">Font stream source.</param>
    /// <param name="offset">Offset to font data in stream source.</param>
    FontFileDefinition(System::String fileName, System::String fileExtension, System::SharedPtr<Aspose::Font::Sources::StreamSource> streamSource, int64_t offset);
    
};

} // namespace Sources
} // namespace Font
} // namespace Aspose


