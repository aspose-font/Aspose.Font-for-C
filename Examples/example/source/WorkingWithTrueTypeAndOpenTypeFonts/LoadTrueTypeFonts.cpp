#include "stdafx.h"
#include "LoadTrueTypeFonts.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/exceptions.h>
#include <Aspose.Font.Cpp/src/Ttf/TtfFont.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FileSystemStreamSource.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/Font.h>

#include "RunExamples.h"


using namespace Aspose::Font::Sources;
using namespace Aspose::Font::Ttf;
namespace Aspose {

namespace Font {

namespace Examples {

namespace WorkingWithTrueTypeAndOpenTypeFonts {

RTTI_INFO_IMPL_HASH(1316574281u, ::Aspose::Font::Examples::WorkingWithTrueTypeAndOpenTypeFonts::LoadTrueTypeFonts, ThisTypeBaseTypesInfo);

void LoadTrueTypeFonts::Run()
{
    System::String dataDir = RunExamples::GetDataDir_Data();
    //ExStart: 1
    System::String fileName = dataDir + u"Montserrat-Regular.ttf";
    //Font file name with full path
    
    System::SharedPtr<FontDefinition> fd = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(u"ttf", System::MakeObject<FileSystemStreamSource>(fileName)));
    System::SharedPtr<TtfFont> ttfFont = System::DynamicCast_noexcept<Aspose::Font::Ttf::TtfFont>(Aspose::Font::Font::Open(fd));
    //ExEnd: 1
}

} // namespace WorkingWithTrueTypeAndOpenTypeFonts
} // namespace Examples
} // namespace Font
} // namespace Aspose
