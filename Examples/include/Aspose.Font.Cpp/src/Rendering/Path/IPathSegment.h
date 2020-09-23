#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/icloneable.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { class TransformationMatrix; } }

namespace Aspose {

namespace Font {

namespace RenderingPath {

/// <summary>
/// Represents interface of any path segment.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS IPathSegment : public System::ICloneable
{
    typedef IPathSegment ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates copy of the segment object.
    /// </summary>
    /// <returns>Copy of the segment object.</returns>
    virtual System::SharedPtr<IPathSegment> Copy() = 0;
    /// <summary>
    /// Performs shift by x and y coordinates.
    /// </summary>
    /// <param name="dx">Value dx.</param>
    /// <param name="dy">Value dy.</param>
    virtual void Shift(double dx, double dy) = 0;
    /// <summary>
    /// Transforms coordinates with the transformation matrix.
    /// </summary>
    /// <param name="matrix">Transformation matrix.</param>
    virtual void Transform(System::SharedPtr<TransformationMatrix> matrix) = 0;
    virtual int32_t CompareTo(System::SharedPtr<IPathSegment> segment) = 0;
    
};

} // namespace RenderingPath
} // namespace Font
} // namespace Aspose


