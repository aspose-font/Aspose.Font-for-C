#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>

namespace Aspose { namespace Font { namespace Sources { class FontDefinition; } } }

namespace Aspose {

namespace Font {

/// <summary>
/// represents a font source
/// often it is a font collection
/// example: ttc files, folders etc. 
/// </summary>
class IFontSource : public System::Object
{
    typedef IFontSource ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns font definition array of the Font source.
    /// </summary>
    /// <returns>font definition array</returns>
    virtual System::ArrayPtr<System::SharedPtr<Sources::FontDefinition>> GetFontDefinitions() = 0;
    
};

} // namespace Font
} // namespace Aspose


