#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose {

namespace Font {

namespace Sources {

// IZ: not needed, but possibly breaks obfuscation
//    [XmlInclude(typeof(FileSystemStreamSource))]
//    [XmlInclude(typeof(ByteContentStreamSource))]
/// <summary>
/// Defines a way to get a file stream when it is needed.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS StreamSource : public System::Object
{
    typedef StreamSource ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets offset inside the source.
    /// </summary>
    ASPOSE_FONT_SHARED_API int64_t get_Offset() const;
    /// <summary>
    /// Sets offset inside the source.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Offset(int64_t value);
    
    /// <summary>
    /// Initializes stream source instance.
    /// </summary>
    ASPOSE_FONT_SHARED_API StreamSource();
    
    /// <summary>
    /// Returns Font stream.
    /// </summary>
    /// <returns>Font stream.</returns>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<System::IO::Stream> GetFontStream() = 0;
    /// <summary>
    /// The inheritors may prevent stream from closing.
    /// Returns true if the stream source wants the stream to be closed after use.
    /// Otherwise returns false.
    /// </summary>
    /// <returns>True if the stream source wants the stream to be closed after use, otherwise false.</returns>
    virtual ASPOSE_FONT_SHARED_API bool MustCloseAfterUse();
    /// <summary>
    /// Clones the stream source object.
    /// </summary>
    /// <returns>Copy of the stream source object.</returns>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<System::Object> Clone() = 0;
    
private:

    int64_t offset;
    
};

} // namespace Sources
} // namespace Font
} // namespace Aspose


