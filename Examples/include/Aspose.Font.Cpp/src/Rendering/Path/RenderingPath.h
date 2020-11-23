#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/icloneable.h>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }
namespace Aspose { namespace Font { namespace RenderingPath { class PathDefinition; } } }
namespace Aspose { namespace Font { namespace RenderingPath { class PathSegmentCollection; } } }

namespace Aspose {

namespace Font {

namespace RenderingPath {

/// <summary>
/// Represents rendering path.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS SegmentPath : public System::ICloneable
{
    typedef SegmentPath ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Glyphs::Glyph;
    friend class Aspose::Font::RenderingPath::PathDefinition;
    
public:

    /// <summary>
    /// Gets path segments.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<PathSegmentCollection> get_Segments() const;
    
    /// <summary>
    /// Clones Path.
    /// </summary>
    /// <returns>Copy of path.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    SegmentPath();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SegmentPath, CODEPORTING_ARGS());
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<PathSegmentCollection> segments;
    
};

} // namespace RenderingPath
} // namespace Font
} // namespace Aspose


