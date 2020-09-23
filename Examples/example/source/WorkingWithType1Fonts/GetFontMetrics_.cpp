#include "stdafx.h"
#include "GetFontMetrics_.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <Aspose.Font.Cpp/src/Type1/Type1Font.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FileSystemStreamSource.h>
#include <Aspose.Font.Cpp/src/IFontMetrics.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/Font.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Font::Sources;
using namespace Aspose::Font::Type1;
namespace Aspose {

namespace Font {

namespace Examples {

namespace WorkingWithType1Fonts {

RTTI_INFO_IMPL_HASH(3523655943u, ::Aspose::Font::Examples::WorkingWithType1Fonts::GetFontMetrics, ThisTypeBaseTypesInfo);

void GetFontMetrics::Run()
{
    System::String dataDir = RunExamples::GetDataDir_Data();
    //ExStart: 1
    System::String fileName = dataDir + u"courier.pfb";
    //Font file name with full path
    
    System::SharedPtr<FontDefinition> fd = System::MakeObject<FontDefinition>(Aspose::Font::FontType::Type1, System::MakeObject<FontFileDefinition>(u"pfb", System::MakeObject<FileSystemStreamSource>(fileName)));
    System::SharedPtr<Type1Font> font = System::DynamicCast_noexcept<Aspose::Font::Type1::Type1Font>(Aspose::Font::Font::Open(fd));
    
    System::String name = font->get_FontName();
    System::Console::WriteLine(System::String(u"Font name: ") + name);
    System::Console::WriteLine(System::String(u"Glyph count: ") + font->get_NumGlyphs());
    System::String metrics = System::String::Format(u"Font metrics: ascender - {0}, descender - {1}, typo ascender = {2}, typo descender = {3}, UnitsPerEm = {4}", font->get_Metrics()->get_Ascender(), font->get_Metrics()->get_Descender(), font->get_Metrics()->get_TypoAscender(), font->get_Metrics()->get_TypoDescender(), font->get_Metrics()->get_UnitsPerEM());
    
    System::Console::WriteLine(metrics);
    //ExEnd: 1
}

} // namespace WorkingWithType1Fonts
} // namespace Examples
} // namespace Font
} // namespace Aspose
