#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { class License; } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontParser; } } }
namespace Aspose { namespace Font { namespace Type1 { class FontSpecificEncodings; } } }

namespace Aspose {

namespace Font {

/// <summary>
/// Provides information about the current environment and platform.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS FontEnvironment : public System::Object
{
    typedef FontEnvironment ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::License;
    friend class Aspose::Font::Ttf::TTFFontParser;
    
public:

    /// <summary>
    /// Parsing strictness types.
    /// </summary>
    enum class ParsingStrictness
    {
        /// <summary>
        /// Specifies the strict type.
        /// </summary>
        Strict,
        /// <summary>
        /// Specifies the tolerant type.
        /// </summary>
        Tolerant
    };
    
    
protected:

    class SpecificEncodings : public System::Object
    {
        typedef SpecificEncodings ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        static System::ArrayPtr<System::String> symbolEncoding;
        static System::ArrayPtr<System::String> zapfDingbatsEncoding;
        
    private:
    
        static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
        
    };
    
    
public:

    /// <summary>
    /// Gets current environment.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::SharedPtr<FontEnvironment> get_Current();
    /// <summary>
    /// Gets current platform id.
    /// </summary>
    ASPOSE_FONT_SHARED_API int32_t get_CurrentPlatformId();
    /// <summary>
    /// Some Fonts may contain unexpected data, non-specified features, or may be roughly cropped.
    /// 
    /// Tolerant setting is recommended for consumers who want to open any font regardless possible Font's inadequacy. Font internal structures are not guaranteed to be consistent.
    /// Strict setting is recommended for consumers who want to open mostly valid and solid Fonts.
    /// 
    /// </summary>
    ASPOSE_FONT_SHARED_API FontEnvironment::ParsingStrictness get_Strictness() const;
    /// <summary>
    /// Some Fonts may contain unexpected data, non-specified features, or may be roughly cropped.
    /// 
    /// Tolerant setting is recommended for consumers who want to open any font regardless possible Font's inadequacy. Font internal structures are not guaranteed to be consistent.
    /// Strict setting is recommended for consumers who want to open mostly valid and solid Fonts.
    /// 
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Strictness(FontEnvironment::ParsingStrictness value);
    /// <summary>
    /// Stores specific encodings for consumer-aware Fonts.
    /// For example, PDF documents uses Adobe Symbol and ZapfDingbats specific encodings.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Type1::FontSpecificEncodings> get_FontSpecificEncodings() const;
    
protected:

    /// <summary>
    /// Internal constructor.
    /// </summary>
    FontEnvironment();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontEnvironment, CODEPORTING_ARGS());
    static void ResetLicensed();
    void CheckFontNameAboutLicense(System::String fontName);
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    static System::SharedPtr<FontEnvironment> _current;
    static System::SharedPtr<Aspose::Font::Type1::FontSpecificEncodings> _specificEncodings;
    FontEnvironment::ParsingStrictness _strictness;
    
    static bool& _isLicensed();
    
    System::SharedPtr<System::Collections::Generic::List<System::String>> _freeAccessibleFonts;
    System::String _evaluationFontList;
    
    System::String get_EvaluationFontNames();
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
    bool IsEvaluationFontName(System::String fontName);
    
};

} // namespace Font
} // namespace Aspose


