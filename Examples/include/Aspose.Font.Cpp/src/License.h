#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.
// RK: When EMBEDDED is defined, the licensing code is not included in the component.
// This results in a built that can be embedded in another Aspose component.
// When a component is embedded in another Aspose component, they must be 
// obfuscated into a single assembly so the embedded component is not publicly accessible.

// C# preprocessor directive: #if !EMBEDDED

//27/10/2004 by Roman Korchagin
//This file contains all client side licensing for the new Aspose licensing system released in 2004.
//Just include this file in your component and follow instructions and examples how to use it.
// NOTE The code in this file was manually tuned so some crucial functions fail 
// to decompile in Reflector as of 5/11/05. 
// Latest anti-hack changed by Aspose.Cells team have been merged as of 20/02/17
//Aspose.Words specific? 
//using Aspose.Collections.Generic;
//using Aspose.JavaAttributes;
// To compile licensing for your product, make sure your product is mentioned here and add a conditional 
// compilation constant to your project properties (both to Debug and Release configurations).

// C# preprocessor directive: #if ASPOSE_WORDS

// C# INACTIVE CODE:
// namespace Aspose.Words

// C# preprocessor directive: #elif ASPOSE_WORDS_REPORTING_SERVICES

// C# INACTIVE CODE:
// namespace Aspose.Words.ReportingServices

// C# preprocessor directive: #elif ASPOSE_WORDS_SHAREPOINT

// C# INACTIVE CODE:
// namespace Aspose.Words.SharePoint

// C# preprocessor directive: #elif ASPOSE_CELLS

// C# INACTIVE CODE:
// namespace Aspose.Cells

// C# preprocessor directive: #elif ASPOSE_SLIDES

// C# INACTIVE CODE:
// namespace Aspose.Slides

// C# preprocessor directive: #elif ASPOSE_TASKS

// C# INACTIVE CODE:
// namespace Aspose.Tasks

// C# preprocessor directive: #elif ASPOSE_PDF

// C# INACTIVE CODE:
// namespace Aspose.Pdf

// C# preprocessor directive: #elif ASPOSE_PDF_FORM

// C# INACTIVE CODE:
// namespace Aspose.Pdf.Form

// C# preprocessor directive: #elif ASPOSE_PDF_KIT

// C# INACTIVE CODE:
// namespace Aspose.Pdf.Kit

// C# preprocessor directive: #elif ASPOSE_PDF_FO

// C# INACTIVE CODE:
// namespace Aspose.Pdf.Fo

// C# preprocessor directive: #elif ASPOSE_CHART

// C# INACTIVE CODE:
// namespace Aspose.Chart

// C# preprocessor directive: #elif ASPOSE_SPELL

// C# INACTIVE CODE:
// namespace Aspose.Spell

// C# preprocessor directive: #elif ASPOSE_EMAIL

// C# INACTIVE CODE:
// namespace Aspose.Email

// C# preprocessor directive: #elif ASPOSE_MIME

// C# INACTIVE CODE:
// namespace Aspose.Mime

// C# preprocessor directive: #elif ASPOSE_ADHOC

// C# INACTIVE CODE:
// namespace Aspose.AdHoc

// C# preprocessor directive: #elif ASPOSE_ASPXPAND

// C# INACTIVE CODE:
// namespace Aspose.ASPXPand

// C# preprocessor directive: #elif ASPOSE_GRID

// C# INACTIVE CODE:
// namespace Aspose.Grid

// C# preprocessor directive: #elif ASPOSE_BARCODE

// C# INACTIVE CODE:
// namespace Aspose.BarCode

// C# preprocessor directive: #elif ASPOSE_RECURRENCE

// C# INACTIVE CODE:
// namespace Aspose.Recurrence

// C# preprocessor directive: #elif ASPOSE_ICALENDAR

// C# INACTIVE CODE:
// namespace Aspose.iCalendar

// C# preprocessor directive: #elif ASPOSE_RECOGNITION

// C# INACTIVE CODE:
// namespace Aspose.Recognition

// C# preprocessor directive: #elif ASPOSE_FONT


#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose {

namespace Font {

/// <summary>
/// Specifies the edition type of the license.
/// </summary>
enum class EditionType
{
    Professional,
    Enterprise
};

/// <summary>
/// Represents possible license states.
/// </summary>
enum class LicenseState
{
    /// <summary>
    /// The license is Evaluation
    /// </summary>
    Evaluation,
    /// <summary>
    /// The license is a proper valid license.
    /// </summary>
    Licensed
};


// C# preprocessor directive: #endif


// C# preprocessor directive: #if !XAMARIN || NETSTANDARD


// C# preprocessor directive: #endif


// C# preprocessor directive: #if ASPOSE_WORDS_SHAREPOINT


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

/// <summary>
/// Provides methods to license the component.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS License : public System::Object
{
    typedef License ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// @deprecated
    /// <summary>
    /// License number was added as embedded resource.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_Embedded() const;
    /// @deprecated
    /// <summary>
    /// License number was added as embedded resource.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Embedded(bool value);
    
    /// <summary>
    /// Initializes a new instance of this class.
    /// </summary>
    ASPOSE_FONT_SHARED_API License();
    
    /// <summary>
    /// Licenses the component.
    /// </summary>
    /// <remarks>
    /// <p>Tries to find the license in the following locations:</p>
    /// <p>1. Explicit path.</p>
    /// 
    /// <ms>
    /// <p>2. The folder that contains the Aspose component assembly.</p>
    /// <p>3. The folder that contains the client's calling assembly.</p>
    /// <p>4. The folder that contains the entry (startup) assembly.</p>
    /// <p>5. An embedded resource in the client's calling assembly.</p>
    /// 
    /// <p><b>Note:</b>On the .NET Compact Framework, tries to find the license only in these locations:</p>
    /// <p>1. Explicit path.</p>
    /// <p>2. An embedded resource in the client's calling assembly.</p>
    /// </ms>
    /// 
    /// <java>
    /// <p>2. The folder that contains the Aspose component JAR file.</p>
    /// <p>3. The folder that contains the client's calling JAR file.</p>
    /// </java>
    /// 
    /// </remarks>
    /// <param name="licenseName">Can be a full or short file name<ms> or name of an embedded resource</ms>.
    /// Use an empty string to switch to evaluation mode.</param>
    ASPOSE_FONT_SHARED_API void SetLicense(System::String licenseName);
    /// <summary>
    /// Licenses the component.
    /// </summary>
    /// <param name="stream">A stream that contains the license.</param>
    /// <remarks>
    /// <p>Use this method to load a license from a stream.</p>
    /// </remarks>
    /// <javaName>void setLicense(java.io.InputStream stream)</javaName>
    ASPOSE_FONT_SHARED_API void SetLicense(System::SharedPtr<System::IO::Stream> stream);
    
private:

    bool mEmbedded;
    
};

} // namespace Font
} // namespace Aspose

// C# preprocessor directive: #endif



