#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Font.Cpp/src/Rendering/Path/IPathSegment.h"

namespace Aspose { namespace Font { namespace Utils { class GlyphPathUtils; } } }
namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }
namespace Aspose { namespace Font { namespace Vectorizer { class LineVectorizer; } } }
namespace Aspose { namespace Font { namespace Cff { namespace RenderingExtension { class CFFRenderingContextBuilder; } } } }
namespace Aspose { namespace Font { namespace Renderers { namespace Version0 { class Rasterizer; } } } }
namespace Aspose { namespace Font { namespace TtfRendering { class TTFPathDefinition; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace Type1 { namespace RenderingExtension { class Type1RenderingContextBuilder; } } } }
namespace Aspose { namespace Font { namespace Rendering { namespace Hinting { class HintCollection; } } } }
namespace Aspose { namespace Font { class TransformationMatrix; } }

namespace Aspose {

namespace Font {

namespace RenderingPath {

/// <summary>
/// Represents LineTo operation.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS LineTo : public Aspose::Font::RenderingPath::IPathSegment
{
    typedef LineTo ThisType;
    typedef Aspose::Font::RenderingPath::IPathSegment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Utils::GlyphPathUtils;
    friend class Aspose::Font::Glyphs::Glyph;
    friend class Aspose::Font::Vectorizer::LineVectorizer;
    friend class Aspose::Font::Cff::RenderingExtension::CFFRenderingContextBuilder;
    friend class Aspose::Font::Renderers::Version0::Rasterizer;
    friend class Aspose::Font::TtfRendering::TTFPathDefinition;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::TtfTables::TtfGlyfTable;
    friend class Aspose::Font::Type1::RenderingExtension::Type1RenderingContextBuilder;
    
public:

    /// <summary>
    /// Gets coordinate x.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_X() const;
    /// <summary>
    /// Gets coordinate y.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_Y() const;
    
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
    /// Gets coordinate x.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_X(double value);
    /// <summary>
    /// Gets coordinate y.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Y(double value);
    System::SharedPtr<Aspose::Font::Rendering::Hinting::HintCollection> get_Hints() const;
    void set_Hints(System::SharedPtr<Aspose::Font::Rendering::Hinting::HintCollection> value);
    
    /// <summary>
    /// Initializes new <see cref="LineTo"></see> object.
    /// </summary>
    /// <param name="x">Coordinate x.</param>
    /// <param name="y">Coordinate y.</param>
    LineTo(double x, double y);
    
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    double x;
    double y;
    System::SharedPtr<Aspose::Font::Rendering::Hinting::HintCollection> hints;
    
};

} // namespace RenderingPath
} // namespace Font
} // namespace Aspose


