#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Sources { class FontDefinition; } } }
namespace Aspose { namespace Font { namespace Cff { class CffFont; } } }
namespace Aspose { namespace Font { namespace Ttf { class PCLFontDefinition; } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontParser; } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontDefinitionParser; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfNameTable; } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1Font; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class MultiLanguageStirngTests; } } } }

namespace Aspose {

namespace Font {

/// <summary>
/// Represents multi language string.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS MultiLanguageString : public System::Object
{
    typedef MultiLanguageString ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Sources::FontDefinition;
    friend class Aspose::Font::Cff::CffFont;
    friend class Aspose::Font::Ttf::PCLFontDefinition;
    friend class Aspose::Font::Ttf::TTFFontParser;
    friend class Aspose::Font::Ttf::TTFFontDefinitionParser;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::TtfTables::TtfNameTable;
    friend class Aspose::Font::Type1::Type1Font;
    friend class Aspose::Font::Tests::FunctionalTests::MultiLanguageStirngTests;
    friend ASPOSE_FONT_SHARED_API bool operator ==(System::SharedPtr<MultiLanguageString> const &obj1, System::String const &obj2);
    friend ASPOSE_FONT_SHARED_API bool operator ==(System::String const &obj1, System::SharedPtr<MultiLanguageString> const &obj2);
    friend ASPOSE_FONT_SHARED_API bool operator !=(System::SharedPtr<MultiLanguageString> const &obj1, System::String const &obj2);
    friend ASPOSE_FONT_SHARED_API bool operator !=(System::String const &obj1, System::SharedPtr<MultiLanguageString> const &obj2);
    
protected:

    /// <summary>
    /// Represents LanguageId enumeration.
    /// </summary>
    enum class LanguageId
    {
        /// <summary>
        /// American english.
        /// </summary>
        English_American = 0x0409,
        /// <summary>
        /// British english.
        /// </summary>
        English_British = 0x0809,
        /// <summary>
        /// Australian english.
        /// </summary>
        English_Australian = 0x0c09,
        /// <summary>
        /// Canadian english.
        /// </summary>
        English_Canadian = 0x1009,
        /// <summary>
        /// NewZealand english.
        /// </summary>
        English_NewZealand = 0x1409
    };
    
    
public:

    /// <summary>
    /// Returns true if the string is present inside all the language strings.
    /// </summary>
    /// <param name="str">String to check.</param>
    /// <returns>True if the string is present inside all the language strings.</returns>
    ASPOSE_FONT_SHARED_API bool ContainsString(System::String str);
    /// <summary>
    /// Returns all strings of all languages.
    /// </summary>
    /// <returns>Array of all strings of all languages.</returns>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<System::String> GetAllStrings();
    /// <summary>
    /// Returns english string if found.
    /// Otherwise returns first non-english string.
    /// </summary>
    /// <returns>English string if found, otherwise first non-english string.</returns>
    ASPOSE_FONT_SHARED_API System::String GetEnglishString();
    /// <summary>
    /// GetHashCode implementation.
    /// </summary>
    /// <returns>hash code of object</returns>
    ASPOSE_FONT_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Returns true if objects are considered equal.
    /// </summary>
    /// <param name="objToCompare">object to compare with</param>
    /// <returns>comparison result</returns>
    ASPOSE_FONT_SHARED_API bool Equals(System::SharedPtr<System::Object> objToCompare) override;
    
protected:

    /// <summary>
    /// Creates empty multi language string.
    /// </summary>
    MultiLanguageString();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MultiLanguageString, CODEPORTING_ARGS());
    
    /// <summary>
    /// Creates multi language string with english string inside.
    /// </summary>
    /// <param name="str">string to add </param>
    MultiLanguageString(System::String str);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MultiLanguageString, CODEPORTING_ARGS(System::String str));
    /// <summary>
    /// Adds string of specific language
    /// </summary>
    /// <param name="str">string to add </param>
    /// <param name="languageId">language identifier </param>
    void AddLanguageString(System::String str, MultiLanguageString::LanguageId languageId);
    
    virtual ASPOSE_FONT_SHARED_API ~MultiLanguageString();
    
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    /// <summary>
    /// langiageId to strings map
    /// </summary>
    System::SharedPtr<System::Collections::Generic::Dictionary<MultiLanguageString::LanguageId, System::String>> langIdToString;
    /// <summary>
    /// strings hashtable to quick search
    /// </summary>
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>> strings;
    
};

ASPOSE_FONT_SHARED_API bool operator ==(System::SharedPtr<MultiLanguageString> const &obj1, System::String const &obj2);
ASPOSE_FONT_SHARED_API bool operator ==(System::String const &obj1, System::SharedPtr<MultiLanguageString> const &obj2);
ASPOSE_FONT_SHARED_API bool operator !=(System::SharedPtr<MultiLanguageString> const &obj1, System::String const &obj2);
ASPOSE_FONT_SHARED_API bool operator !=(System::String const &obj1, System::SharedPtr<MultiLanguageString> const &obj2);

} // namespace Font
} // namespace Aspose


