#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>

namespace Aspose {

namespace Font {

/// <summary>
/// Specifies Font style.
/// </summary>
enum class FontStyle
{
    /// <summary>
    /// Specifies the regular Font style.
    /// </summary>
    Regular = 0x01,
    /// <summary>
    /// Specifies the bold Font style.
    /// </summary>
    Bold = 0x02,
    /// <summary>
    /// Specifies the italic Font style.
    /// </summary>
    Italic = 0x04
};

DECLARE_ENUM_OPERATORS(Aspose::Font::FontStyle);
DECLARE_USING_GLOBAL_OPERATORS

} // namespace Font
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Font);



