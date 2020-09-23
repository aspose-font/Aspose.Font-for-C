#pragma once

#include <system/string.h>
#include <system/object.h>
#include <system/array.h>

namespace Aspose {

namespace Font {

namespace Examples {

class RunExamples : public System::Object
{
    typedef RunExamples ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String GetDataDir_Data();
    
    static void Main(System::ArrayPtr<System::String> args);
    
};

} // namespace Examples
} // namespace Font
} // namespace Aspose


