#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { class NameToCodeMap; } }

namespace Aspose {

namespace Font {

/// <summary>
/// Defines members that are specific to encodings that support glyph name addressing.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS ISupportsNameAddressing : public virtual System::Object
{
    typedef ISupportsNameAddressing ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns name to code map object.
    /// </summary>
    /// <returns>name to code map object</returns>
    virtual System::SharedPtr<NameToCodeMap> GetNameToCharCodeIndex() = 0;
    
};

} // namespace Font
} // namespace Aspose


