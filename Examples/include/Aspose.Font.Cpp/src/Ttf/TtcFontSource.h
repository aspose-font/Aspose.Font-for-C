#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/array.h>

#include "Aspose.Font.Cpp/src/IFontSource.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Sources { class StreamSource; } } }
namespace Aspose { namespace Font { namespace Sources { class FontDefinition; } } }

namespace Aspose {

namespace Font {

namespace Ttf {

/// <summary>
/// Represents TTC Font source.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtcFontSource : public Aspose::Font::IFontSource
{
    typedef TtcFontSource ThisType;
    typedef Aspose::Font::IFontSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates TTC Font source based on IStreamSource stream providing object.
    /// </summary>
    /// <param name="source">Source stream to extract TTC Font collection data from.</param>
    ASPOSE_FONT_SHARED_API TtcFontSource(System::SharedPtr<Aspose::Font::Sources::StreamSource> source);
    /// <summary>
    /// Creates TTC Font source based on ttc font collection file path.
    /// </summary>
    /// <param name="filePath">Font collection file.</param>
    ASPOSE_FONT_SHARED_API TtcFontSource(System::String filePath);
    
    /// <summary>
    /// Returns Font definition array of the TTC Font source.
    /// </summary>
    /// <returns>All font definitions from TTC Font source.</returns>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Font::Sources::FontDefinition>> GetFontDefinitions() override;
    
protected:

    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Font::Sources::StreamSource> source;
    static const System::String ttcTableTag;
    
};

} // namespace Ttf
} // namespace Font
} // namespace Aspose


