#include "stdafx.h"
#include "LoadType1Fonts.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/exceptions.h>
#include <Aspose.Font.Cpp/src/Type1/Type1Font.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FileSystemStreamSource.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/Font.h>

#include "RunExamples.h"


using namespace Aspose::Font::Sources;
using namespace Aspose::Font::Type1;
namespace Aspose {

namespace Font {

namespace Examples {

namespace WorkingWithType1Fonts {

RTTI_INFO_IMPL_HASH(3219065660u, ::Aspose::Font::Examples::WorkingWithType1Fonts::LoadType1Fonts, ThisTypeBaseTypesInfo);

void LoadType1Fonts::Run()
{
    System::String dataDir = RunExamples::GetDataDir_Data();
    //ExStart: 1
    System::String fileName = dataDir + u"courier.pfb";
    //Font file name with full path
    
    System::SharedPtr<FontDefinition> fd = System::MakeObject<FontDefinition>(Aspose::Font::FontType::Type1, System::MakeObject<FontFileDefinition>(u"pfb", System::MakeObject<FileSystemStreamSource>(fileName)));
    System::SharedPtr<Type1Font> font = System::DynamicCast_noexcept<Aspose::Font::Type1::Type1Font>(Aspose::Font::Font::Open(fd));
    //ExEnd: 1
}

} // namespace WorkingWithType1Fonts
} // namespace Examples
} // namespace Font
} // namespace Aspose
