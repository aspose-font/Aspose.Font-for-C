#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose {

namespace Font {

/// <summary>
/// Common interface to support encoding parameters.
/// Some Font types can have multiple encoding algorithms/maps.
/// So, this interface should be used to create concrete font encoding parameters.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS IEncodingParameters : public System::Object
{
    typedef IEncodingParameters ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Font
} // namespace Aspose


