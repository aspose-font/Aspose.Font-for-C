#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>

#include "Aspose.Font.Cpp/src/Glyphs/CompositeGlyphComponent.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Glyphs { class CompositeGlyph; } } }

namespace Aspose {

namespace Font {

namespace Glyphs {

/// <summary>
/// Represents composite glyph components list.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS CompositeGlyphComponentList : public System::Collections::Generic::List<System::SharedPtr<Aspose::Font::Glyphs::CompositeGlyphComponent>>
{
    typedef CompositeGlyphComponentList ThisType;
    typedef System::Collections::Generic::List<System::SharedPtr<Aspose::Font::Glyphs::CompositeGlyphComponent>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Glyphs::CompositeGlyph;
    
protected:

    /// <summary>
    /// Constructor of the new glyph components list object.
    /// </summary>
    CompositeGlyphComponentList();
    
    virtual ASPOSE_FONT_SHARED_API ~CompositeGlyphComponentList();
    
};

} // namespace Glyphs
} // namespace Font
} // namespace Aspose


