#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/collections/list.h>

#include "Aspose.Font.Cpp/src/Rendering/Path/IPathSegment.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace RenderingPath { class SegmentPath; } } }

namespace Aspose {

namespace Font {

namespace RenderingPath {

/// <summary>
/// Represents a path segments collection.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS PathSegmentCollection : public System::Collections::Generic::List<System::SharedPtr<Aspose::Font::RenderingPath::IPathSegment>>
{
    typedef PathSegmentCollection ThisType;
    typedef System::Collections::Generic::List<System::SharedPtr<Aspose::Font::RenderingPath::IPathSegment>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::RenderingPath::SegmentPath;
    
public:

    ASPOSE_FONT_SHARED_API void SetTemplateWeakPtr(unsigned int argument) override;
    
protected:

    /// <summary>
    /// internal ctor
    /// </summary>
    PathSegmentCollection();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PathSegmentCollection, CODEPORTING_ARGS());
    
    virtual ASPOSE_FONT_SHARED_API ~PathSegmentCollection();
    
};

} // namespace RenderingPath
} // namespace Font
} // namespace Aspose


