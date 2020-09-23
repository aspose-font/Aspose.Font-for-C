#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/runtime/serialization/streaming_context.h>
#include <system/runtime/serialization/serialization_info.h>
#include <system/object.h>

#include "Aspose.Font.Cpp/src/Exceptions/FontException.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose {

namespace Font {

namespace Exceptions {

class Details_FontNotSupportedOperationException;
using FontNotSupportedOperationException = System::ExceptionWrapper<Details_FontNotSupportedOperationException>;

/// <summary>
/// Represents not supported operation exception.
/// The exception can be thrown in case some operation is not supported for particular Font type.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS Details_FontNotSupportedOperationException : public Aspose::Font::Exceptions::Details_FontException
{
    typedef Details_FontNotSupportedOperationException ThisType;
    typedef Aspose::Font::Exceptions::Details_FontException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class System::ExceptionWrapperHelper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes new <see cref="FontNotSupportedOperationException"></see> object.
    /// </summary>
    ASPOSE_FONT_SHARED_API Details_FontNotSupportedOperationException();
    /// <summary>
    /// Initializes new <see cref="FontNotSupportedOperationException"></see> object.
    /// </summary>
    /// <param name="message">A message that describes the error.</param>
    ASPOSE_FONT_SHARED_API Details_FontNotSupportedOperationException(System::String message);
    /// <summary>
    /// Initializes new <see cref="FontNotSupportedOperationException"></see> object.
    /// </summary>
    /// <param name="message">A message that describes the error.</param>
    /// <param name="innerException">The exception that is the cause of the current exception.</param>
    ASPOSE_FONT_SHARED_API Details_FontNotSupportedOperationException(System::String message, System::Exception innerException);
    /// <summary>
    /// Initializes new <see cref="FontNotSupportedOperationException"></see> object.
    /// </summary>
    /// <param name="info">The object that holds the serialized object data.</param>
    /// <param name="context">The contextual information about the source or destination.</param>
    ASPOSE_FONT_SHARED_API Details_FontNotSupportedOperationException(System::SharedPtr<System::Runtime::Serialization::SerializationInfo> info, System::Runtime::Serialization::StreamingContext context);
    
};

} // namespace Exceptions
} // namespace Font
} // namespace Aspose
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.


