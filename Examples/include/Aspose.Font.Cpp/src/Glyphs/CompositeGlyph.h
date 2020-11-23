#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "Aspose.Font.Cpp/src/Glyphs/Glyph.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Ttf { class TTFFontParser; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class TTF_Common; } } } }
namespace Aspose { namespace Font { namespace Glyphs { class CompositeGlyphComponentList; } } }
namespace Aspose { namespace Font { namespace RenderingPath { class PathDefinition; } } }

namespace Aspose {

namespace Font {

namespace Glyphs {

/// <summary>
/// Represents a font composite glyph.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS CompositeGlyph : public Aspose::Font::Glyphs::Glyph
{
    typedef CompositeGlyph ThisType;
    typedef Aspose::Font::Glyphs::Glyph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Ttf::TTFFontParser;
    friend class Aspose::Font::TtfTables::TtfGlyfTable;
    friend class Aspose::Font::Tests::FunctionalTests::TTF_Common;
    
public:

    /// <summary>
    /// Gets components list.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<CompositeGlyphComponentList> get_Components() const;
    
    /// <summary>
    /// Returns copy of glyph.
    /// </summary>
    /// <returns>Copy of Glyph.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    /// <summary>
    /// Gets PathDefinition.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::RenderingPath::PathDefinition> get_PathDefinition() override;
    /// <summary>
    /// Sets PathDefinition.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_PathDefinition(System::SharedPtr<Aspose::Font::RenderingPath::PathDefinition> value) override;
    
    /// <summary>
    /// Creates the new CompositeGlyph object.
    /// </summary>
    CompositeGlyph();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CompositeGlyph, CODEPORTING_ARGS());
    /// <summary>
    /// Returns flat glyph made from the composite one.
    /// </summary>
    System::SharedPtr<Glyph> ToFlatGlyph();
    /// <summary>
    /// Designed for glyph copy operations. An objective - to be helper as pattern factory
    /// method for method Clone(). Design - method Clone() is need to create correct Glyph object
    /// independently from where this method called - base Glyph class or in descendant classes like
    /// <see cref="CompositeGlyph"></see> - in any case correct object must be instantiated. So, this method
    /// must take care for creation of correct Glyph object. Method Clone() to return correct copy of 
    /// Glyph object will call this method Create(), get new appropriate Glyph object and then 
    /// fill this new object with data from source Glyph object.
    /// </summary>
    /// <returns>Glyph object.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Glyph> Create() override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<CompositeGlyphComponentList> _components;
    bool _isPathDefinitionBuilt;
    System::SharedPtr<System::Object> _sync;
    
};

} // namespace Glyphs
} // namespace Font
} // namespace Aspose


