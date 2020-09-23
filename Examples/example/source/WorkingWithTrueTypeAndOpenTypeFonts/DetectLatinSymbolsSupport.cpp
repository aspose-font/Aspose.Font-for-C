#include "stdafx.h"
#include "DetectLatinSymbolsSupport.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <Aspose.Font.Cpp/src/Ttf/TtfFont.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FileSystemStreamSource.h>
#include <Aspose.Font.Cpp/src/IFontEncoding.h>
#include <Aspose.Font.Cpp/src/Glyphs/GlyphUInt32Id.h>
#include <Aspose.Font.Cpp/src/Glyphs/GlyphId.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/Font.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Font::Glyphs;
using namespace Aspose::Font::Sources;
using namespace Aspose::Font::Ttf;
namespace Aspose {

namespace Font {

namespace Examples {

namespace WorkingWithTrueTypeAndOpenTypeFonts {

RTTI_INFO_IMPL_HASH(1906919048u, ::Aspose::Font::Examples::WorkingWithTrueTypeAndOpenTypeFonts::DetectLatinSymbolsSupport, ThisTypeBaseTypesInfo);

void DetectLatinSymbolsSupport::Run()
{
    System::String dataDir = RunExamples::GetDataDir_Data();
    //ExStart: 1
    System::String fileName = dataDir + u"Montserrat-Regular.ttf";
    //Font file name with full path
    
    System::SharedPtr<FontDefinition> fd = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(u"ttf", System::MakeObject<FileSystemStreamSource>(fileName)));
    System::SharedPtr<TtfFont> ttfFont = System::DynamicCast_noexcept<Aspose::Font::Ttf::TtfFont>(Aspose::Font::Font::Open(fd));
    
    bool latinText = true;
    
    
    for (uint32_t code = 65; code < static_cast<uint32_t>(123); code++)
    {
        System::SharedPtr<GlyphId> gid = ttfFont->get_Encoding()->DecodeToGid(code);
        if (gid == nullptr || gid == System::StaticCast<System::Object>(GlyphUInt32Id::get_NotDefId()))
        {
            latinText = false;
        }
    }
    
    if (latinText)
    {
        System::Console::WriteLine(System::String::Format(u"Font {0} supports latin symbols.", ttfFont->get_FontName()));
    }
    else
    {
        System::Console::WriteLine(System::String::Format(u"Latin symbols are not supported by font {0}.", ttfFont->get_FontName()));
    }
    //ExEnd: 1
}

} // namespace WorkingWithTrueTypeAndOpenTypeFonts
} // namespace Examples
} // namespace Font
} // namespace Aspose
