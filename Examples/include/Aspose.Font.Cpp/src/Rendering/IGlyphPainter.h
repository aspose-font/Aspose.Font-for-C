#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose {

namespace Font {

namespace Rendering {

/// <summary>
/// Defines a way to draw glyphs.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS IGlyphPainter : public System::Object
{
    typedef IGlyphPainter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
};

/// <summary>
/// Defines a way to draw glyphs.
/// </summary>
class IGlyphRasterPainter : public Aspose::Font::Rendering::IGlyphPainter
{
    typedef IGlyphRasterPainter ThisType;
    typedef Aspose::Font::Rendering::IGlyphPainter BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual void SetRasterGridProperties(int32_t left, int32_t bottom, int32_t width, int32_t height) = 0;
    virtual void DrawPixel(int32_t x, int32_t y, int32_t saturation) = 0;
    
};

} // namespace Rendering
} // namespace Font
} // namespace Aspose


