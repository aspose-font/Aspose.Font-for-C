#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose {

namespace Font {

/// <summary>
/// Defines an interface for Font save functionality.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS IFontSaver : public virtual System::Object
{
    typedef IFontSaver ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Saves the Font into original format.
    /// </summary>
    /// <param name="stream">stream to save font</param>
    virtual void Save(System::SharedPtr<System::IO::Stream> stream) = 0;
    /// <summary>
    /// Saves the Font into original format.
    /// </summary>
    /// <param name="fileName">file to save font</param>
    virtual void Save(System::String fileName) = 0;
    
};

} // namespace Font
} // namespace Aspose


