#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.
// General Information about an assembly is controlled through the following
// set of attributes. Change these attribute values to modify the information
// associated with an assembly.

// C# preprocessor directive: #if NET40

// C# INACTIVE CODE:
// // Default security level in .NET 4.0 is 2. This cause System.MethodAccessException during System.Runtime.InteropServices.Marshal.Copy(IntPtr, byte[], int, Int32) using
// [assembly: SecurityRules(SecurityRuleSet.Level1)]

// C# preprocessor directive: #endif

// Setting ComVisible to false makes the types in this assembly not visible
// to COM components.  If you need to access a type in this assembly from
// COM, set the ComVisible attribute to true on that type.
// The following GUID is for the ID of the typelib if this project is exposed to COM
//[assembly: Obfuscation(Feature = "rename serializable symbols", Exclude = false)]

// C# preprocessor directive: #if DEBUG


// C# preprocessor directive: #endif


// C# preprocessor directive: #if INTERNAL_RELEASE


// C# preprocessor directive: #endif


#include <system/string.h>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose {

namespace Font {

/// <summary>
/// Defines the constants that participate in the license check for the component.
/// These used to be defined directly as assembly attributes, but I moved them into
/// separate class because in .NET Compact Framework I cannot access assembly attributes.
/// Now the licensing code when compiled for the .NET Compact Framework uses these constants
/// instead of the assembly attributes.
/// </summary>
class AssemblyConstants
{
    typedef AssemblyConstants ThisType;
    
public:

    static const System::String Title;
    /// <summary>
    /// This is used by Aspose licensing code to verify the license is for the correct product.
    /// </summary>
    static const System::String Product;
    static const System::String Family;
    static const System::String Platform;
    /// <summary>
    /// The version of the assembly.
    /// </summary>
    static const System::String Version;
    /// <summary>
    /// This is used by Aspose licensing code to check for subscription expiry.
    /// You need to set this to the date you publish a release or a hotfix.
    /// </summary>
    static const System::String ReleaseDate;
    
};

/// <summary>
/// Provides information about the current product name and version.
/// </summary>
/// <example>
/// Shows how to use BuildVersionInfo to display version information about this product.
/// <code lang="C#">
///     Console.WriteLine("I am currently using {0}, version number {1}!", BuildVersionInfo.Product, BuildVersionInfo.Version);
/// </code>
/// </example>
class ASPOSE_FONT_SHARED_CLASS BuildVersionInfo
{
    typedef BuildVersionInfo ThisType;
    
public:

    /// <summary>
    /// Gets the full name of the product.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::String get_Product();
    /// <summary>
    /// Gets the product version.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::String get_Version();
    
};

} // namespace Font
} // namespace Aspose


