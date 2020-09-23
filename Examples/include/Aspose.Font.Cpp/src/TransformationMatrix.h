#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/icloneable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose {

namespace Font {

/// <summary>
/// Represents 3x3 transformation matrix
/// | A   B   0 |
/// | C   D   0 |
/// | TX  TY  1 |.
/// 
/// Transforms coordinates in the following way:
/// x1 = A*x + C*y + TX;
/// y1 = B*x + D*y + TY.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TransformationMatrix : public System::ICloneable
{
    typedef TransformationMatrix ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets A transformation matrix value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_A();
    /// <summary>
    /// Sets A transformation matrix value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_A(double value);
    /// <summary>
    /// Gets B transformation matrix value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_B();
    /// <summary>
    /// Sets B transformation matrix value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_B(double value);
    /// <summary>
    /// Gets C transformation matrix value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_C();
    /// <summary>
    /// Sets C transformation matrix value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_C(double value);
    /// <summary>
    /// Gets D transformation matrix value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_D();
    /// <summary>
    /// Sets D transformation matrix value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_D(double value);
    /// <summary>
    /// Gets TX transformation matrix value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_TX();
    /// <summary>
    /// Sets TX transformation matrix value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_TX(double value);
    /// <summary>
    /// Gets TY transformation matrix value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_TY();
    /// <summary>
    /// Sets TY transformation matrix value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_TY(double value);
    
    /// <summary>
    /// Creates standard 1 to 1 transformation matrix:
    /// [ A B C D TX TY ] = [ 1, 0, 0, 1, 0, 0].
    /// </summary>
    ASPOSE_FONT_SHARED_API TransformationMatrix();
    /// <summary>
    /// Accepts a transformation matrix with following array representation:
    /// [ A B C D TX TY ].
    /// </summary>
    /// <param name="matrixArray">Array with transformation matrix values, must have 6 elements.</param>
    ASPOSE_FONT_SHARED_API TransformationMatrix(System::ArrayPtr<double> matrixArray);
    
    /// <summary>
    /// Transforms x and y with the transformation matrix:
    /// x1 = A*x + C*y + TX;
    /// y1 = B*x + D*y + TY.
    /// </summary>
    /// <param name="x">Original x coordinate.</param>
    /// <param name="y">Original y coordinate.</param>
    /// <param name="x1">Transformed x coordinate.</param>
    /// <param name="y1">Transformed y coordinate.</param>
    ASPOSE_FONT_SHARED_API void Transform(double x, double y, double& x1, double& y1);
    /// <summary>
    /// Transforms back x1 and y1 and returns x and y before the transformation matrix.
    /// </summary>
    /// <param name="x1">Coordinate x1.</param>
    /// <param name="y1">Coordinate y1.</param>
    /// <param name="x">Coordinate x transformed back.</param>
    /// <param name="y">Coordinate y transformed back.</param>
    ASPOSE_FONT_SHARED_API void UnTransform(double x1, double y1, double& x, double& y);
    /// <summary>
    /// Scales back x1 and y1 and returns x and y before the transformation matrix.
    /// </summary>
    /// <param name="x1">Coordinate x1.</param>
    /// <param name="y1">Coordinate y1.</param>
    /// <param name="x">Coordinate x scaled back.</param>
    /// <param name="y">Coordinate y scaled back.</param>
    ASPOSE_FONT_SHARED_API void UnScale(double x1, double y1, double& x, double& y);
    /// <summary>
    /// Scales x and y with the transformation matrix:
    /// x1 = A*x + C*y;
    /// y1 = B*x + D*y.
    /// </summary>
    /// <param name="x">Original x coordinate.</param>
    /// <param name="y">Original y coordinate.</param>
    /// <param name="x1">Coordinate x scaled.</param>
    /// <param name="y1">Coordinate y scaled.</param>
    ASPOSE_FONT_SHARED_API void Scale(double x, double y, double& x1, double& y1);
    /// <summary>
    /// Multiplies with another transformation matrix.
    /// Doesn't change original transformation matrix, returns a new TransformationMatrix object.
    /// </summary>
    /// <param name="matrix">Transformation matrix to multiply with.</param>
    /// <returns>New TransformationMatrix object.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TransformationMatrix> Multiply(System::SharedPtr<TransformationMatrix> matrix);
    /// <summary>
    /// Allocates new array, copies the transformation matrix and returns it.
    /// </summary>
    /// <returns>TransformationMatrix in array form.</returns>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<double> ToArray();
    
    /// <summary>
    /// Provides access to underlying array.
    /// </summary>
    /// <param name="index">Index in transformation matrix array.</param>
    ASPOSE_FONT_SHARED_API double idx_get(int32_t index);
    
    /// <summary>
    /// Returns copy of transformation matrix.
    /// </summary>
    /// <returns>Copy of transformation matrix.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<double> matrixArray;
    
};

} // namespace Font
} // namespace Aspose


