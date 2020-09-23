#include "stdafx.h"
#include "LoadCFFFont.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/file.h>
#include <system/exceptions.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FileSystemStreamSource.h>
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

RTTI_INFO_IMPL_HASH(483204047u, ::Aspose::Font::Examples::WorkingWithCFFFonts::LoadCFFFont, ThisTypeBaseTypesInfo);

void LoadCFFFont::Run()
{
    System::String dataDir = RunExamples::GetDataDir_Data();
    //ExStart: LoadCFFFromDisc
    System::String fileName = dataDir + u"OpenSans-Regular.cff";
    //Font file name with full path
    
    System::SharedPtr<FontDefinition> fd = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, System::MakeObject<FontFileDefinition>(u"cff", System::MakeObject<FileSystemStreamSource>(fileName)));
    System::SharedPtr<CffFont> ttfFont = System::DynamicCast_noexcept<Aspose::Font::Cff::CffFont>(Aspose::Font::Font::Open(fd));
    //ExEnd: LoadCFFFromDisc
}

void LoadCFFFont::LoadCffFromByteArray()
{
    System::String dataDir = RunExamples::GetDataDir_Data();
    //ExStart: LoadCffFromByteArray
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(dataDir + u"OpenSans-Regular.cff");
    System::SharedPtr<FontDefinition> fd = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, System::MakeObject<FontFileDefinition>(u"cff", System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<CffFont> cffFont = System::DynamicCast_noexcept<Aspose::Font::Cff::CffFont>(Aspose::Font::Font::Open(fd));
    //ExEnd: LoadCffFromByteArray
}

} // namespace WorkingWithCFFFonts
} // namespace Examples
} // namespace Font
} // namespace Aspose
