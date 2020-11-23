#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/runtime/serialization/streaming_context.h>
#include <system/runtime/serialization/serialization_info.h>

#include "Aspose.Font.Cpp/src/Exceptions/FontException.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose {

namespace Font {

namespace Exceptions {

class Details_FontAgrumentException;
using FontAgrumentException = System::ExceptionWrapper<Details_FontAgrumentException>;

/// <summary>
/// Represents Font argument exception.
/// The exception can be thrown in case improper agrument usages.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS Details_FontAgrumentException : public Aspose::Font::Exceptions::Details_FontException
{
    typedef Details_FontAgrumentException ThisType;
    typedef Aspose::Font::Exceptions::Details_FontException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes new <see cref="FontAgrumentException"></see> object.
    /// </summary>
    ASPOSE_FONT_SHARED_API Details_FontAgrumentException();
    
    ASPOSE_FONT_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_FontAgrumentException, CODEPORTING_ARGS());
    
    /// <summary>
    /// Initializes new <see cref="FontAgrumentException"></see> object.
    /// </summary>
    /// <param name="message">A message that describes the error.</param>
    ASPOSE_FONT_SHARED_API Details_FontAgrumentException(System::String message);
    
    ASPOSE_FONT_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_FontAgrumentException, CODEPORTING_ARGS(System::String message));
    
    /// <summary>
    /// Initializes new <see cref="FontAgrumentException"></see> object.
    /// </summary>
    /// <param name="message">A message that describes the error.</param>
    /// <param name="innerException">The exception that is the cause of the current exception.</param>
    ASPOSE_FONT_SHARED_API Details_FontAgrumentException(System::String message, System::Exception innerException);
    
    ASPOSE_FONT_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_FontAgrumentException, CODEPORTING_ARGS(System::String message, System::Exception innerException));
    
    /// <summary>
    /// Initializes new <see cref="FontAgrumentException"></see> object.
    /// </summary>
    /// <param name="info">The object that holds the serialized object data.</param>
    /// <param name="context">The contextual information about the source or destination.</param>
    ASPOSE_FONT_SHARED_API Details_FontAgrumentException(System::SharedPtr<System::Runtime::Serialization::SerializationInfo> info, System::Runtime::Serialization::StreamingContext context);
    
    ASPOSE_FONT_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_FontAgrumentException, CODEPORTING_ARGS(System::SharedPtr<System::Runtime::Serialization::SerializationInfo> info, System::Runtime::Serialization::StreamingContext context));
    
};

} // namespace Exceptions
} // namespace Font
} // namespace Aspose


