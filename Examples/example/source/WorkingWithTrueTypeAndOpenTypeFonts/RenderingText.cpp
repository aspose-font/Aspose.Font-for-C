#include "stdafx.h"
#include "RenderingText.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/exceptions.h>
#include <Aspose.Font.Cpp/src/Ttf/TtfFont.h>
#include <Aspose.Font.Cpp/src/TransformationMatrix.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FileSystemStreamSource.h>
#include <Aspose.Font.Cpp/src/Rendering/Renderers/Outline/GlyphOutlineRenderer.h>
#include <Aspose.Font.Cpp/src/Rendering/Renderers/IGlyphRenderer.h>
#include <Aspose.Font.Cpp/src/Rendering/Path/MoveTo.h>
#include <Aspose.Font.Cpp/src/Rendering/Path/LineTo.h>
#include <Aspose.Font.Cpp/src/Rendering/Path/CurveTo.h>
#include <Aspose.Font.Cpp/src/IFontMetrics.h>
#include <Aspose.Font.Cpp/src/IFontEncoding.h>
#include <Aspose.Font.Cpp/src/IFont.h>
#include <Aspose.Font.Cpp/src/Glyphs/IGlyphAccessor.h>
#include <Aspose.Font.Cpp/src/Glyphs/GlyphId.h>
#include <Aspose.Font.Cpp/src/Glyphs/Glyph.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/Font.h>
#include <drawing/point_f.h>
#include <drawing/graphics.h>
#include <drawing/drawing2d/smoothing_mode.h>
#include <drawing/drawing2d/graphics_path.h>
#include <drawing/drawing2d/fill_mode.h>
#include <drawing/brushes.h>
#include <drawing/brush.h>
#include <drawing/bitmap.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Font::Glyphs;
using namespace Aspose::Font::Rendering;
using namespace Aspose::Font::RenderingPath;
using namespace Aspose::Font::Sources;
using namespace Aspose::Font::Ttf;
namespace Aspose {

namespace Font {

namespace Examples {

namespace WorkingWithTrueTypeAndOpenTypeFonts {

RTTI_INFO_IMPL_HASH(2997372681u, ::Aspose::Font::Examples::WorkingWithTrueTypeAndOpenTypeFonts::RenderingText::GlyphOutlinePainter, ThisTypeBaseTypesInfo);
//ExStart: 2
RenderingText::GlyphOutlinePainter::GlyphOutlinePainter(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path)
{
    _path = path;
}

void RenderingText::GlyphOutlinePainter::MoveTo(System::SharedPtr<Aspose::Font::RenderingPath::MoveTo> moveTo)
{
    _path->CloseFigure();
    _currentPoint.set_X((float)moveTo->get_X());
    _currentPoint.set_Y((float)moveTo->get_Y());
}

void RenderingText::GlyphOutlinePainter::LineTo(System::SharedPtr<Aspose::Font::RenderingPath::LineTo> lineTo)
{
    float x = (float)lineTo->get_X();
    float y = (float)lineTo->get_Y();
    _path->AddLine(_currentPoint.get_X(), _currentPoint.get_Y(), x, y);
    _currentPoint.set_X(x);
    _currentPoint.set_Y(y);
}

void RenderingText::GlyphOutlinePainter::CurveTo(System::SharedPtr<Aspose::Font::RenderingPath::CurveTo> curveTo)
{
    float x3 = (float)curveTo->get_X3();
    float y3 = (float)curveTo->get_Y3();
    
    _path->AddBezier(_currentPoint.get_X(), _currentPoint.get_Y(), (float)curveTo->get_X1(), (float)curveTo->get_Y1(), (float)curveTo->get_X2(), (float)curveTo->get_Y2(), x3, y3);
    
    _currentPoint.set_X(x3);
    _currentPoint.set_Y(y3);
}

void RenderingText::GlyphOutlinePainter::ClosePath()
{
    _path->CloseFigure();
}

System::Object::shared_members_type Aspose::Font::Examples::WorkingWithTrueTypeAndOpenTypeFonts::RenderingText::GlyphOutlinePainter::GetSharedMembers()
{
    auto result = System::Object::GetSharedMembers();
    
    result.Add("Aspose::Font::Examples::WorkingWithTrueTypeAndOpenTypeFonts::RenderingText::GlyphOutlinePainter::_path", this->_path);
    result.Add("Aspose::Font::Examples::WorkingWithTrueTypeAndOpenTypeFonts::RenderingText::GlyphOutlinePainter::_currentPoint", this->_currentPoint);
    
    return result;
}
//ExEnd: 2

RTTI_INFO_IMPL_HASH(1003253548u, ::Aspose::Font::Examples::WorkingWithTrueTypeAndOpenTypeFonts::RenderingText, ThisTypeBaseTypesInfo);

void RenderingText::Run()
{
    //ExStart: 1
    System::String dataDir = RunExamples::GetDataDir_Data();
    
    System::String fileName1 = dataDir + u"Montserrat-Bold.ttf";
    //Font file name with full path
    System::SharedPtr<FontDefinition> fd1 = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(u"ttf", System::MakeObject<FileSystemStreamSource>(fileName1)));
    System::SharedPtr<TtfFont> ttfFont1 = System::DynamicCast_noexcept<Aspose::Font::Ttf::TtfFont>(Aspose::Font::Font::Open(fd1));
    
    System::String fileName2 = dataDir + u"Lora-Bold.ttf";
    //Font file name with full path
    System::SharedPtr<FontDefinition> fd2 = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(u"ttf", System::MakeObject<FileSystemStreamSource>(fileName2)));
    System::SharedPtr<TtfFont> ttfFont2 = System::DynamicCast_noexcept<Aspose::Font::Ttf::TtfFont>(Aspose::Font::Font::Open(fd2));
    
    DrawText(u"Hello world", ttfFont1, 14, System::Drawing::Brushes::get_White(), System::Drawing::Brushes::get_Black(), dataDir + u"hello1_montserrat_out.jpg");
    DrawText(u"Hello world", ttfFont2, 14, System::Drawing::Brushes::get_Yellow(), System::Drawing::Brushes::get_Red(), dataDir + u"hello2_lora_out.jpg");
    //ExEnd: 1
}

//ExStart: 3
void RenderingText::DrawText(System::String text, System::SharedPtr<IFont> font, double fontSize, System::SharedPtr<System::Drawing::Brush> backgroundBrush, System::SharedPtr<System::Drawing::Brush> textBrush, System::String outFile)
{
    //Get glyph identifiers for every symbol in text line
    System::ArrayPtr<System::SharedPtr<GlyphId>> gids = System::MakeArray<System::SharedPtr<Aspose::Font::Glyphs::GlyphId>>(text.get_Length());
    for (int32_t i = 0; i < text.get_Length(); i++)
    {
        gids[i] = font->get_Encoding()->DecodeToGid(text[i]);
    }
    // set common drawing settings
    double dpi = 300;
    
    double resolutionCorrection = dpi / 72;
    // 72 is font's internal dpi
    // prepare output bitmap
    System::SharedPtr<System::Drawing::Bitmap> outBitmap = System::MakeObject<System::Drawing::Bitmap>(960, 720);
    outBitmap->SetResolution((float)dpi, (float)dpi);
    System::SharedPtr<System::Drawing::Graphics> outGraphics = System::Drawing::Graphics::FromImage(outBitmap);
    outGraphics->FillRectangle(backgroundBrush, 0, 0, outBitmap->get_Width(), outBitmap->get_Height());
    outGraphics->set_SmoothingMode(System::Drawing::Drawing2D::SmoothingMode::HighQuality);
    //declare coordinate variables and previous gid
    System::SharedPtr<GlyphId> previousGid;
    double glyphXCoordinate = 0;
    double glyphYCoordinate = fontSize * resolutionCorrection;
    //loop which paints every glyph in gids
    
    {
        for (System::SharedPtr<GlyphId> gid : gids)
        {
            // if the font contains the gid
            if (gid != nullptr)
            {
                System::SharedPtr<Glyph> glyph = font->get_GlyphAccessor()->GetGlyphById(gid);
                if (glyph == nullptr)
                {
                    continue;
                }
                
                // path that accepts drawing instructions
                System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path = System::MakeObject<System::Drawing::Drawing2D::GraphicsPath>();
                
                // Create IGlyphOutlinePainter implementation
                System::SharedPtr<RenderingText::GlyphOutlinePainter> outlinePainter = System::MakeObject<RenderingText::GlyphOutlinePainter>(path);
                
                // Create the renderer
                System::SharedPtr<Aspose::Font::Renderers::IGlyphRenderer> renderer = System::MakeObject<Aspose::Font::Renderers::GlyphOutlineRenderer>(outlinePainter);
                
                // get common glyph properties
                double kerning = 0;
                
                // get kerning value
                if (previousGid != nullptr)
                {
                    kerning = (font->get_Metrics()->GetKerningValue(previousGid, gid) / glyph->get_SourceResolution()) * fontSize * resolutionCorrection;
                    kerning += FontWidthToImageWith(font->get_Metrics()->GetGlyphWidth(previousGid), glyph->get_SourceResolution(), fontSize);
                }
                
                // glyph positioning - increase glyph X coordinate according to kerning distance
                glyphXCoordinate += kerning;
                
                // Glyph placement matrix
                System::SharedPtr<TransformationMatrix> glyphMatrix = System::MakeObject<TransformationMatrix>(System::MakeArray<double>({fontSize * resolutionCorrection, 0, 0, -fontSize * resolutionCorrection, glyphXCoordinate, glyphYCoordinate}));
                
                // render current glyph
                renderer->RenderGlyph(font, gid, glyphMatrix);
                // fill the path
                path->set_FillMode(System::Drawing::Drawing2D::FillMode::Winding);
                outGraphics->FillPath(textBrush, path);
            }
            //set current gid as previous to get correct kerning for next glyph
            previousGid = gid;
        }
        
    }
    //Save results
    outBitmap->Save(outFile);
}
//ExEnd: 3

//ExStart: 4
double RenderingText::FontWidthToImageWith(double width, int32_t fontSourceResulution, double fontSize, double dpi /* = 300*/)
{
    double resolutionCorrection = dpi / 72;
    // 72 is font's internal dpi
    return (width / fontSourceResulution) * fontSize * resolutionCorrection;
}
//ExEnd: 4
} // namespace WorkingWithTrueTypeAndOpenTypeFonts
} // namespace Examples
} // namespace Font
} // namespace Aspose
