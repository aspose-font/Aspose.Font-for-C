#include "stdafx.h"
#include "SaveCFFToDisc.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/file.h>
#include <system/exceptions.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/ByteContentStreamSource.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/Font.h>
#include <Aspose.Font.Cpp/src/Cff/CffFont.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Font::Cff;
using namespace Aspose::Font::Sources;
namespace Aspose {

namespace Font {

namespace Examples {

namespace WorkingWithCFFFonts {

RTTI_INFO_IMPL_HASH(3276540665u, ::Aspose::Font::Examples::WorkingWithCFFFonts::SaveCFFToDisc, ThisTypeBaseTypesInfo);

void SaveCFFToDisc::Run()
{
    //ExStart: 1
    //byte array to load Font from
    System::String dataDir = RunExamples::GetDataDir_Data();
    
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(dataDir + u"OpenSans-Regular.cff");
    System::SharedPtr<FontDefinition> fd = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, System::MakeObject<FontFileDefinition>(u"cff", System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<CffFont> cffFont = System::DynamicCast_noexcept<Aspose::Font::Cff::CffFont>(Aspose::Font::Font::Open(fd));
    
    //Work with data from just loaded TtfFont object
    
    //Save TtfFont to disk
    //Output Font file name with full path
    System::String outputFile = RunExamples::GetDataDir_Data() + u"OpenSans-Regular_out.cff";
    
    cffFont->Save(outputFile);
    //ExEnd: 1
}

} // namespace WorkingWithCFFFonts
} // namespace Examples
} // namespace Font
} // namespace Aspose
