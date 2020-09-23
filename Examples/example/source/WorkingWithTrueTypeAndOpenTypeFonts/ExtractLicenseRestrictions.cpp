#include "stdafx.h"
#include "ExtractLicenseRestrictions.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <Aspose.Font.Cpp/src/TtfTables/TtfTableRepository_.h>
#include <Aspose.Font.Cpp/src/TtfTables/TtfOs2Table.h>
#include <Aspose.Font.Cpp/src/Ttf/TtfFont.h>
#include <Aspose.Font.Cpp/src/Ttf/TtfEmbeddedLicenseFlags.h>
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

RTTI_INFO_IMPL_HASH(4141369172u, ::Aspose::Font::Examples::WorkingWithTrueTypeAndOpenTypeFonts::ExtractLicenseRestrictions, ThisTypeBaseTypesInfo);

void ExtractLicenseRestrictions::Run()
{
    //ExStart: 1
    System::String dataDir = RunExamples::GetDataDir_Data();
    //Font to check
    System::String fileName = dataDir + u"Montserrat-Regular.ttf";
    //Font file name with full path
    
    System::SharedPtr<FontDefinition> fd = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(u"ttf", System::MakeObject<FileSystemStreamSource>(fileName)));
    System::SharedPtr<TtfFont> font = System::DynamicCast_noexcept<Aspose::Font::Ttf::TtfFont>(Aspose::Font::Font::Open(fd));
    System::SharedPtr<LicenseFlags> licenseFlags;
    if (font->get_TtfTables()->get_Os2Table() != nullptr)
    {
        licenseFlags = font->get_TtfTables()->get_Os2Table()->GetLicenseFlags();
    }
    
    if (licenseFlags == nullptr || licenseFlags->get_FSTypeAbsent())
    {
        System::Console::WriteLine(System::String::Format(u"Font {0} has no embedded license restrictions", font->get_FontName()));
    }
    else
    {
        if (licenseFlags->get_IsEditableEmbedding())
        {
            System::Console::WriteLine(System::String::Format(u"Font {0} may be embedded, and may be temporarily loaded on other systems.", font->get_FontName()) + u" In addition, editing is permitted, including ability to format new text" + u" using the embedded font, and changes may be saved.");
        }
        else if (licenseFlags->get_IsInstallableEmbedding())
        {
            System::Console::WriteLine(System::String::Format(u"Font {0} may be embedded, and may be permanently installed", font->get_FontName()) + u" for use on a remote systems, or for use by other users.");
        }
        else if (licenseFlags->get_IsPreviewAndPrintEmbedding())
        {
            System::Console::WriteLine(System::String::Format(u"Font {0} may be embedded, and may be temporarily loaded", font->get_FontName()) + u"  on other systems for purposes of viewing or printing the document.");
        }
        else if (licenseFlags->get_IsRestrictedLicenseEmbedding())
        {
            System::Console::WriteLine(System::String::Format(u"Font {0} must not be modified, embedded or exchanged in any manner", font->get_FontName()) + u" without first obtaining explicit permission of the legal owner.");
        }
    }
    //ExEnd: 1
}

} // namespace WorkingWithTrueTypeAndOpenTypeFonts
} // namespace Examples
} // namespace Font
} // namespace Aspose
