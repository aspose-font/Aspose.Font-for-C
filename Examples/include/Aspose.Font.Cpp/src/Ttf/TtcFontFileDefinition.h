#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Font.Cpp/src/Sources/FontFileDefinition.h"

namespace Aspose { namespace Font { namespace Sources { class StreamSource; } } }

namespace Aspose {

namespace Font {

namespace Ttf {

/// <summary>
/// Represents file definition for TTC Font.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtcFontFileDefinition : public Aspose::Font::Sources::FontFileDefinition
{
    typedef TtcFontFileDefinition ThisType;
    typedef Aspose::Font::Sources::FontFileDefinition BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets Font index inside TTC Font.
    /// </summary>
    ASPOSE_FONT_SHARED_API int64_t get_FontIndex() const;
    
    /// <summary>
    /// Creates a file definition using file content only.
    /// </summary>
    /// <param name="fontIndex">Index of font inside TTC font collection.</param>
    /// <param name="fileExtension">Extension of font file collection.</param>
    /// <param name="streamSource">Source of font file collection.</param>
    /// <param name="offset">Offset to font data in font file collection, 
    /// see TTC Header, Offset Table in OpenType Font File specification.</param>
    ASPOSE_FONT_SHARED_API TtcFontFileDefinition(int32_t fontIndex, System::String fileExtension, System::SharedPtr<Aspose::Font::Sources::StreamSource> streamSource, int64_t offset);
    
private:

    int32_t fontIndex;
    
};

} // namespace Ttf
} // namespace Font
} // namespace Aspose


