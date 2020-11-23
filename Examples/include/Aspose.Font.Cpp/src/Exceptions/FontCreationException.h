#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Font.Cpp/src/Exceptions/FontException.h"

namespace Aspose {

namespace Font {

namespace Exceptions {

class Details_FontCreationException;
using FontCreationException = System::ExceptionWrapper<Details_FontCreationException>;

/// <summary>
/// Represents Font creation exception.
/// The exception can be thrown in case errors during font creation process.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS Details_FontCreationException : public Aspose::Font::Exceptions::Details_FontException
{
    typedef Details_FontCreationException ThisType;
    typedef Aspose::Font::Exceptions::Details_FontException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Initializes new <see cref="FontCreationException"></see> object.
    /// </summary>
    ASPOSE_FONT_SHARED_API Details_FontCreationException();
    
    ASPOSE_FONT_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_FontCreationException, CODEPORTING_ARGS());
    
    /// <summary>
    /// Initializes new <see cref="FontCreationException"></see> object.
    /// </summary>
    /// <param name="message">A message that describes the error.</param>
    ASPOSE_FONT_SHARED_API Details_FontCreationException(System::String message);
    
    ASPOSE_FONT_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_FontCreationException, CODEPORTING_ARGS(System::String message));
    
    /// <summary>
    /// Initializes new <see cref="FontCreationException"></see> object.
    /// </summary>
    /// <param name="message">A message that describes the error.</param>
    /// <param name="innerException">The exception that is the cause of the current exception.</param>
    ASPOSE_FONT_SHARED_API Details_FontCreationException(System::String message, System::Exception innerException);
    
    ASPOSE_FONT_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_FontCreationException, CODEPORTING_ARGS(System::String message, System::Exception innerException));
    
    /// <summary>
    /// Initializes new <see cref="FontCreationException"></see> object.
    /// </summary>
    /// <param name="info">The object that holds the serialized object data.</param>
    /// <param name="context">The contextual information about the source or destination.</param>
    ASPOSE_FONT_SHARED_API Details_FontCreationException(System::SharedPtr<System::Runtime::Serialization::SerializationInfo> info, System::Runtime::Serialization::StreamingContext context);
    
    ASPOSE_FONT_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_FontCreationException, CODEPORTING_ARGS(System::SharedPtr<System::Runtime::Serialization::SerializationInfo> info, System::Runtime::Serialization::StreamingContext context));
    
};

} // namespace Exceptions
} // namespace Font
} // namespace Aspose


