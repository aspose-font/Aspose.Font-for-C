#include "stdafx.h"
#include "AddLicenseFromFile.h"

#include <system/shared_ptr.h>
#include <system/object.h>
#include <Aspose.Font.Cpp/src/License.h>

namespace Aspose {

namespace Font {

namespace Examples {

namespace Licensing {

RTTI_INFO_IMPL_HASH(1611825513u, ::Aspose::Font::Examples::Licensing::AddLicenseFromFile, ThisTypeBaseTypesInfo);

void AddLicenseFromFile::Run()
{
    //ExStart: 1
    System::SharedPtr<License> lic = System::MakeObject<License>();
    
    lic->SetLicense(u"path-to-licence-file.lic");
    //ExEnd: 1
}

} // namespace Licensing
} // namespace Examples
} // namespace Font
} // namespace Aspose
