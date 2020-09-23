#include "stdafx.h"
#include "AddLicenseFromStream.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <Aspose.Font.Cpp/src/License.h>

namespace Aspose {

namespace Font {

namespace Examples {

namespace Licensing {

RTTI_INFO_IMPL_HASH(1401511661u, ::Aspose::Font::Examples::Licensing::AddLicenseFromStream, ThisTypeBaseTypesInfo);

void AddLicenseFromStream::Run()
{
    //ExStart: 1
    System::String dataDir = u"c:\\temp\\";
    // Load an existing Visio file in the stream
    System::SharedPtr<System::IO::FileStream> LicStream = System::MakeObject<System::IO::FileStream>(dataDir + u"Aspose.Font.lic", System::IO::FileMode::Open);
    
    System::SharedPtr<License> license = System::MakeObject<License>();
    license->SetLicense(LicStream);
    //ExEnd: 1
}

} // namespace Licensing
} // namespace Examples
} // namespace Font
} // namespace Aspose
