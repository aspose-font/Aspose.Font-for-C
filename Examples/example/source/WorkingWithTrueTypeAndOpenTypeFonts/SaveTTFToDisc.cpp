#include "stdafx.h"
#include "SaveTTFToDisc.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/file.h>
#include <system/exceptions.h>
#include <Aspose.Font.Cpp/src/Ttf/TtfFont.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/ByteContentStreamSource.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/Font.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Font::Sources;
using namespace Aspose::Font::Ttf;
namespace Aspose {

namespace Font {

namespace Examples {

namespace WorkingWithTrueTypeAndOpenTypeFonts {

RTTI_INFO_IMPL_HASH(1237559756u, ::Aspose::Font::Examples::WorkingWithTrueTypeAndOpenTypeFonts::SaveTTFToDisc, ThisTypeBaseTypesInfo);

void SaveTTFToDisc::Run()
{
    //ExStart: 1
    //byte array to load Font from
    System::String dataDir = RunExamples::GetDataDir_Data();
    
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(dataDir + u"Montserrat-Regular.ttf");
    System::SharedPtr<FontDefinition> fd = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(u"ttf", System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<TtfFont> ttfFont = System::DynamicCast_noexcept<Aspose::Font::Ttf::TtfFont>(Aspose::Font::Font::Open(fd));
    
    //Work with data from just loaded TtfFont object
    
    //Save CffFont to disk
    //Output Font file name with full path
    System::String outputFile = RunExamples::GetDataDir_Data() + u"Montserrat-Regular_out.ttf";
    
    ttfFont->Save(outputFile);
    //ExEnd: 1
}

} // namespace WorkingWithTrueTypeAndOpenTypeFonts
} // namespace Examples
} // namespace Font
} // namespace Aspose
