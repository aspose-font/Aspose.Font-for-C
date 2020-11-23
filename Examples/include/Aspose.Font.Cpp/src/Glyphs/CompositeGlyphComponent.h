#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }
namespace Aspose { namespace Font { class TransformationMatrix; } }

namespace Aspose {

namespace Font {

namespace Glyphs {

/// <summary>
/// Represents composite glyph component (glyph with placement matrix).
/// </summary>
class ASPOSE_FONT_SHARED_CLASS CompositeGlyphComponent : public System::Object
{
    typedef CompositeGlyphComponent ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::TtfTables::TtfGlyfTable;
    
public:

    /// <summary>
    /// Gets the component glyph.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::Glyph> get_Glyph() const;
    /// <summary>
    /// Gets the component transformation matrix.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TransformationMatrix> get_Matrix() const;
    
    ASPOSE_FONT_SHARED_API int32_t CompareTo(System::SharedPtr<CompositeGlyphComponent> other);
    
protected:

    /// <summary>
    /// Initializes new <see cref="CompositeGlyphComponent"></see> object.
    /// </summary>
    /// <param name="glyph">Glyph object.</param>
    /// <param name="componentMatrix">Component matrix.</param>                
    CompositeGlyphComponent(System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph, System::SharedPtr<TransformationMatrix> componentMatrix);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CompositeGlyphComponent, CODEPORTING_ARGS(System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph, System::SharedPtr<TransformationMatrix> componentMatrix));
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Font::Glyphs::Glyph> _glyph;
    System::SharedPtr<TransformationMatrix> _componentMatrix;
    
};

} // namespace Glyphs
} // namespace Font
} // namespace Aspose


