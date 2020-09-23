#include "stdafx.h"
#include "RunExamples.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/path.h>
#include <system/io/directory_info.h>
#include <system/io/directory.h>
#include <system/console.h>
#include <system/array.h>

#include "WorkingWithType1Fonts/RenderingText_.h"
#include "WorkingWithType1Fonts/LoadType1Fonts.h"
#include "WorkingWithType1Fonts/GetFontMetrics_.h"
#include "WorkingWithType1Fonts/DetectLatinSymbolsSupport_.h"
#include "WorkingWithTrueTypeAndOpenTypeFonts/SaveTTFToDisc.h"
#include "WorkingWithTrueTypeAndOpenTypeFonts/RenderingText.h"
#include "WorkingWithTrueTypeAndOpenTypeFonts/LoadTrueTypeFonts.h"
#include "WorkingWithTrueTypeAndOpenTypeFonts/GetFontMetrics.h"
#include "WorkingWithTrueTypeAndOpenTypeFonts/ExtractLicenseRestrictions.h"
#include "WorkingWithTrueTypeAndOpenTypeFonts/DetectLatinSymbolsSupport.h"
#include "WorkingWithCFFFonts/SaveCFFToDisc.h"
#include "WorkingWithCFFFonts/LoadCFFFont.h"


using namespace Aspose::Font::Examples::WorkingWithCFFFonts;
using namespace Aspose::Font::Examples::WorkingWithTrueTypeAndOpenTypeFonts;
using namespace Aspose::Font::Examples::WorkingWithType1Fonts;
namespace Aspose {

namespace Font {

namespace Examples {

RTTI_INFO_IMPL_HASH(454056953u, ::Aspose::Font::Examples::RunExamples, ThisTypeBaseTypesInfo);

void RunExamples::Main(System::ArrayPtr<System::String> args)
{
    System::Console::WriteLine(u"Open RunExamples.cs. \nIn Main() method uncomment the example that you want to run.");
    System::Console::WriteLine(u"=====================================================");
    
    
    // Set License
    //License lic = new License();
    //lic.SetLicense("C:\\Program Files (x86)\\Aspose\\Licenses\\Aspose.Font.NET.lic");
    
    
    // C# preprocessor directive: #region Working wtih TTF Fonts
    
    WorkingWithTrueTypeAndOpenTypeFonts::DetectLatinSymbolsSupport::Run();
    WorkingWithTrueTypeAndOpenTypeFonts::ExtractLicenseRestrictions::Run();
    WorkingWithTrueTypeAndOpenTypeFonts::GetFontMetrics::Run();
    WorkingWithTrueTypeAndOpenTypeFonts::RenderingText::Run();
    WorkingWithTrueTypeAndOpenTypeFonts::LoadTrueTypeFonts::Run();
    WorkingWithTrueTypeAndOpenTypeFonts::SaveTTFToDisc::Run();
    
    // C# preprocessor directive: #endregion
    
    
    
    // C# preprocessor directive: #region Wroking Type1 Fonts
    
    WorkingWithType1Fonts::DetectLatinSymbolsSupport::Run();
    WorkingWithType1Fonts::GetFontMetrics::Run();
    WorkingWithType1Fonts::RenderingText::Run();
    WorkingWithType1Fonts::LoadType1Fonts::Run();
    
    // C# preprocessor directive: #endregion
    
    
    
    // C# preprocessor directive: #region Wroking CFF Fonts
    
    WorkingWithCFFFonts::LoadCFFFont::Run();
    WorkingWithCFFFonts::LoadCFFFont::LoadCffFromByteArray();
    WorkingWithCFFFonts::SaveCFFToDisc::Run();
    
    // C# preprocessor directive: #endregion
    
    
    // Stop before exiting
    System::Console::WriteLine(u"\n\nProgram Finished. Press any key to exit....");
    System::Console::ReadKey();
}

System::String RunExamples::GetDataDir_Data()
{
	auto parent = System::IO::Directory::GetParent(System::IO::Directory::GetCurrentDirectory());// ->get_Parent();
    System::String startDirectory;
    if (parent != nullptr)
    {
		startDirectory = parent->get_FullName();
	}
    return System::IO::Path::Combine(startDirectory, u"Data\\");
}

} // namespace Examples
} // namespace Font
} // namespace Aspose

int main(int argc, char** argv)
{
    System::ArrayPtr<System::String> args = System::MakeObject<System::Array<System::String>>(argc - 1);
    
    for (int i = 1, j = 0; i < argc; ++i, ++j)
    {
        args[j] = System::String::FromUtf8(argv[i]);
    }
    
    Aspose::Font::Examples::RunExamples::Main(args);
    return 0;
}
