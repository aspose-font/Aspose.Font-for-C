#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/Rendering/Path/IPathSegment.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Utils { class GlyphPathUtils; } } }
namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }
namespace Aspose { namespace Font { namespace Cff { namespace RenderingExtension { class CFFRenderingContextBuilder; } } } }
namespace Aspose { namespace Font { namespace Renderers { namespace Version0 { class Rasterizer; } } } }
namespace Aspose { namespace Font { namespace TtfRendering { class TTFPathDefinition; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace Type1 { namespace RenderingExtension { class Type1RenderingContextBuilder; } } } }
namespace Aspose { namespace Font { namespace Rendering { namespace Hinting { class HintCollection; } } } }
namespace Aspose { namespace Font { class TransformationMatrix; } }

namespace Aspose {

namespace Font {

namespace RenderingPath {

/// <summary>
/// Represents CurveTo operation.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS CurveTo : public Aspose::Font::RenderingPath::IPathSegment
{
    typedef CurveTo ThisType;
    typedef Aspose::Font::RenderingPath::IPathSegment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Utils::GlyphPathUtils;
    friend class Aspose::Font::Glyphs::Glyph;
    friend class Aspose::Font::Cff::RenderingExtension::CFFRenderingContextBuilder;
    friend class Aspose::Font::Renderers::Version0::Rasterizer;
    friend class Aspose::Font::TtfRendering::TTFPathDefinition;
    friend class Aspose::Font::TtfTables::TtfGlyfTable;
    friend class Aspose::Font::Type1::RenderingExtension::Type1RenderingContextBuilder;
    
public:

    /// <summary>
    /// Gets coordinate x1.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_X1() const;
    /// <summary>
    /// Gets coordinate y1.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_Y1() const;
    /// <summary>
    /// Gets coordinate x2.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_X2() const;
    /// <summary>
    /// Gets coordinate y2.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_Y2() const;
    /// <summary>
    /// Gets coordinate x3.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_X3() const;
    /// <summary>
    /// Gets coordinate y3.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_Y3() const;
    
    /// <summary>
    /// Creates copy of the segment object.
    /// </summary>
    /// <returns>Copy of the segment object.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<IPathSegment> Copy() override;
    /// <summary>
    /// Performs shift by x and y coordinates.
    /// </summary>
    /// <param name="dx">Value dx.</param>
    /// <param name="dy">Value dy.</param>
    ASPOSE_FONT_SHARED_API void Shift(double dx, double dy) override;
    /// <summary>
    /// Transforms coordinates with the transformation matrix.
    /// </summary>
    /// <param name="matrix">Transformation matrix.</param>
    ASPOSE_FONT_SHARED_API void Transform(System::SharedPtr<TransformationMatrix> matrix) override;
    /// <summary>
    /// Creates a new object that is a copy of the current instance.
    /// </summary>
    /// <returns>
    /// A new object that is a copy of this instance.
    /// </returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<System::Object> Clone() override;
    ASPOSE_FONT_SHARED_API int32_t CompareTo(System::SharedPtr<IPathSegment> segment) override;
    
protected:

    /// <summary>
    /// Gets coordinate x1.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_X1(double value);
    /// <summary>
    /// Gets coordinate y1.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Y1(double value);
    /// <summary>
    /// Gets coordinate x2.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_X2(double value);
    /// <summary>
    /// Gets coordinate y2.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Y2(double value);
    /// <summary>
    /// Gets coordinate x3.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_X3(double value);
    /// <summary>
    /// Gets coordinate y3.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Y3(double value);
    System::SharedPtr<Aspose::Font::Rendering::Hinting::HintCollection> get_Hints() const;
    void set_Hints(System::SharedPtr<Aspose::Font::Rendering::Hinting::HintCollection> value);
    
    /// <summary>
    /// Initializes new <see cref="CurveTo"></see> object.
    /// </summary>
    /// <param name="x1">Coordinate x1.</param>
    /// <param name="y1">Coordinate y1.</param>
    /// <param name="x2">Coordinate x2.</param>
    /// <param name="y2">Coordinate y2.</param>
    /// <param name="x3">Coordinate x3.</param>
    /// <param name="y3">Coordinate y3.</param>
    CurveTo(double x1, double y1, double x2, double y2, double x3, double y3);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CurveTo, CODEPORTING_ARGS(double x1, double y1, double x2, double y2, double x3, double y3));
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    double x1, x2, x3;
    double y1, y2, y3;
    System::SharedPtr<Aspose::Font::Rendering::Hinting::HintCollection> hints;
    
};

} // namespace RenderingPath
} // namespace Font
} // namespace Aspose


