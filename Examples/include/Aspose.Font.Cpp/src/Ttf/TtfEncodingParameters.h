#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Aspose.Font.Cpp/src/IEncodingParameters.h"

namespace Aspose {

namespace Font {

namespace Ttf {

/// <summary>
/// Represents TTF encoding parameters.
/// 
/// Should be used to request specific encoding from TTF Font.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfEncodingParameters : public Aspose::Font::IEncodingParameters
{
    typedef TtfEncodingParameters ThisType;
    typedef Aspose::Font::IEncodingParameters BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets PlatformId value.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_PlatformId() const;
    /// <summary>
    /// Sets PlatformId value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_PlatformId(uint16_t value);
    /// <summary>
    /// Gets PlatformSpecificId value.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_PlatformSpecificId() const;
    /// <summary>
    /// Sets PlatformSpecificId value.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_PlatformSpecificId(uint16_t value);
    
    /// <summary>
    /// Initializes new instance of TtfEncodingParameters class.
    /// Takes Platform Id, Platform-specific encoding id as parameters.
    /// These parameters used to request special CMap subtable from main font CMap table,
    /// see tables CMap, name in OpenType Font File specification.
    /// </summary>
    /// <param name="platformId">Platform id.</param>
    /// <param name="platformSpecificId">Platform-specific encoding id.</param>
    ASPOSE_FONT_SHARED_API TtfEncodingParameters(uint16_t platformId, uint16_t platformSpecificId);
    
private:

    uint16_t platformId;
    uint16_t platformSpecificId;
    
};

} // namespace Ttf
} // namespace Font
} // namespace Aspose


