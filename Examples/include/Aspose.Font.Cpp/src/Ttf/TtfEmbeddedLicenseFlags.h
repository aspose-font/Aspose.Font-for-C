#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Ttf { namespace Utils { class TTFUtils; } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfOs2Table; } } }

namespace Aspose {

namespace Font {

namespace Ttf {

/// <summary>
/// Represents a helper wrapper for an embedding flags from 'OS/2' table (field fsType).
/// </summary>
class ASPOSE_FONT_SHARED_CLASS LicenseFlags : public System::Object
{
    typedef LicenseFlags ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Ttf::Utils::TTFUtils;
    friend class Aspose::Font::TtfTables::TtfOs2Table;
    
protected:

    enum class FSTypeFlagBitsEnum : uint16_t
    {
        InstallableEmbedding = 0x0000,
        RestrictedLicenseEmbedding = 0x0002,
        PreviewAndPrintEmbedding = 0x0004,
        EditableEmbedding = 0x0008,
        NoSubsettingEmbedding = 0x0100,
        BitmapOnlyEmbedding = 0x0200
    };
    DECLARE_FRIEND_ENUM_OPERATORS(Aspose::Font::Ttf::LicenseFlags::FSTypeFlagBitsEnum);
    
    
    
public:

    /// <summary>
    /// Gets raw fsType value from OS/2 table or 0 if this field doesn't exist in the table.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_FSType() const;
    /// <summary>
    /// Detects whether fsType is Installable embedding.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_IsInstallableEmbedding();
    /// <summary>
    /// Detects whether fsType is Restricted License embedding.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_IsRestrictedLicenseEmbedding();
    /// <summary>
    /// Detects whether fsType permits Preview and Print embedding.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_IsPreviewAndPrintEmbedding();
    /// <summary>
    /// Detects whether fsType permits Editable embedding.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_IsEditableEmbedding();
    /// <summary>
    /// Detects whether fsType permits NoSubsetting embedding.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_IsNoSubsettingEmbedding();
    /// <summary>
    /// Detects whether fsType permits BitmapOnly embedding.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_IsBitmapOnlyEmbedding();
    /// <summary>
    /// Detects whether reserved bit(bit 0) is set for fsType.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_IsReservedType();
    /// <summary>
    /// Returns true if fsType flag is absent in 'OS/2' table.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_FSTypeAbsent() const;
    
protected:

    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="flags">embedding flags</param>
    LicenseFlags(uint16_t flags);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LicenseFlags, CODEPORTING_ARGS(uint16_t flags));
    
    /// <summary>
    /// Constructor
    /// This constructor must be called when no fsType presents in font(no OS/2 table)
    /// </summary>
    LicenseFlags();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LicenseFlags, CODEPORTING_ARGS());
    
private:

    uint16_t _fsTypeFlag;
    bool _isFSTypeAbsent;
    
};

DECLARE_ENUM_OPERATORS(Aspose::Font::Ttf::LicenseFlags::FSTypeFlagBitsEnum);
DECLARE_USING_GLOBAL_OPERATORS
} // namespace Ttf
} // namespace Font
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Font::Ttf);



