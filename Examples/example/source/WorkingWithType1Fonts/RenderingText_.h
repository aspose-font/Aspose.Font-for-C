#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Aspose.Font.Cpp/src/Rendering/IGlyphOutlinePainter.h>
#include <drawing/point_f.h>
#include <drawing/drawing2d/graphics_path.h>
#include <drawing/brush.h>
#include <cstdint>

namespace Aspose { namespace Font { namespace RenderingPath { class MoveTo; } } }
namespace Aspose { namespace Font { namespace RenderingPath { class LineTo; } } }
namespace Aspose { namespace Font { namespace RenderingPath { class CurveTo; } } }
namespace Aspose { namespace Font { class IFont; } }

namespace Aspose {

namespace Font {

namespace Examples {

namespace WorkingWithType1Fonts {

class RenderingText : public System::Object
{
    typedef RenderingText ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
private:

    class GlyphOutlinePainter : public Aspose::Font::Rendering::IGlyphOutlinePainter
    {
        typedef GlyphOutlinePainter ThisType;
        typedef Aspose::Font::Rendering::IGlyphOutlinePainter BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        GlyphOutlinePainter(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path);
        
        void MoveTo(System::SharedPtr<Aspose::Font::RenderingPath::MoveTo> moveTo) override;
        void LineTo(System::SharedPtr<Aspose::Font::RenderingPath::LineTo> lineTo) override;
        void CurveTo(System::SharedPtr<Aspose::Font::RenderingPath::CurveTo> curveTo) override;
        void ClosePath() override;
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> _path;
        System::Drawing::PointF _currentPoint;
        
    };
    
    
public:

    static void Run();
    
private:

    static void DrawText(System::String text, System::SharedPtr<IFont> font, double fontSize, System::SharedPtr<System::Drawing::Brush> backgroundBrush, System::SharedPtr<System::Drawing::Brush> textBrush, System::String outFile);
    static double FontWidthToImageWith(double width, int32_t fontSourceResulution, double fontSize, double dpi = 300);
    
};

} // namespace WorkingWithType1Fonts
} // namespace Examples
} // namespace Font
} // namespace Aspose


