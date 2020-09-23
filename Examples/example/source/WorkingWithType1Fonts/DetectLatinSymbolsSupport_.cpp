#include "stdafx.h"
#include "DetectLatinSymbolsSupport_.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <Aspose.Font.Cpp/src/Type1/Type1Font.h>
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
using namespace Aspose::Font::Type1;
namespace Aspose {

namespace Font {

namespace Examples {

namespace WorkingWithType1Fonts {

RTTI_INFO_IMPL_HASH(164258828u, ::Aspose::Font::Examples::WorkingWithType1Fonts::DetectLatinSymbolsSupport, ThisTypeBaseTypesInfo);

void DetectLatinSymbolsSupport::Run()
{
    System::String dataDir = RunExamples::GetDataDir_Data();
    //ExStart: 1
    System::String fileName = dataDir + u"courier.pfb";
    //Font file name with full path
    
    System::SharedPtr<FontDefinition> fd = System::MakeObject<FontDefinition>(Aspose::Font::FontType::Type1, System::MakeObject<FontFileDefinition>(u"pfb", System::MakeObject<FileSystemStreamSource>(fileName)));
    System::SharedPtr<Type1Font> font = System::DynamicCast_noexcept<Aspose::Font::Type1::Type1Font>(Aspose::Font::Font::Open(fd));
    
    bool latinText = true;
    
    
    for (uint32_t code = 65; code < static_cast<uint32_t>(123); code++)
    {
        System::SharedPtr<GlyphId> gid = font->get_Encoding()->DecodeToGid(code);
        if (gid == nullptr || gid == System::StaticCast<System::Object>(GlyphUInt32Id::get_NotDefId()))
        {
            latinText = false;
        }
    }
    
    if (latinText)
    {
        System::Console::WriteLine(System::String::Format(u"Font {0} supports latin symbols.", font->get_FontName()));
    }
    else
    {
        System::Console::WriteLine(System::String::Format(u"Latin symbols are not supported by font {0}.", font->get_FontName()));
    }
    //ExEnd: 1
}

} // namespace WorkingWithType1Fonts
} // namespace Examples
} // namespace Font
} // namespace Aspose
