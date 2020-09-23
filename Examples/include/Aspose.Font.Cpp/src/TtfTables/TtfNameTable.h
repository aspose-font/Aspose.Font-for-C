#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/eventhandler.h>
#include <system/eventargs.h>
#include <system/collections/sorted_list.h>
#include <system/collections/list.h>
#include <system/collections/icomparer.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/TtfTables/TtfTableBase.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Ttf { class TTFFontDefinitionParser; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Page { namespace EPS { namespace GraphicsIO { namespace Aps { class FontConverter; } } } } }
namespace Aspose { namespace Page { namespace EPS { namespace Postscript { class DefineFont; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace TextShowing { class ShowTextBase; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class FontUtils; } } } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }
namespace Aspose { namespace Font { class MultiLanguageString; } }

namespace Aspose {

namespace Font {

namespace TtfTables {

/// <summary>
/// Represents "name" table of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfNameTable : public Aspose::Font::TtfTables::TtfTableBase
{
    typedef TtfNameTable ThisType;
    typedef Aspose::Font::TtfTables::TtfTableBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
private:

    class NameRecordComparer;
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Ttf::TTFFontDefinitionParser;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Page::EPS::GraphicsIO::Aps::FontConverter;
    friend class Aspose::Page::EPS::Postscript::DefineFont;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextBase;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::FontUtils;
    
public:

    /// <summary>
    /// Represents NameId.
    /// </summary>
    enum class NameId : uint16_t
    {
        /// <summary>
        /// 0 Copyright notice.
        /// </summary>
        CopyrightNotice = 0,
        /// <summary>
        /// 1 Font Family. This string is the Font family name the user sees on Macintosh platforms.
        /// </summary>
        FontFamily = 1,
        /// <summary>
        /// 2 Font Subfamily. This string is the Font family the user sees on Macintosh platforms.
        /// </summary>
        FontSubfamily = 2,
        /// <summary>
        /// 3 Unique subfamily identification (Apple spec).
        /// 3 Unique Font identifier (MS spec).
        /// </summary>
        UniqueFontId = 3,
        /// <summary>
        /// 4 Full name of the Font.
        /// </summary>
        FullName = 4,
        /// <summary>
        /// 5 Version of the name table.
        /// </summary>
        Version = 5,
        /// <summary>
        /// 6 PostScript name of the Font. Note: A Font may have only one PostScript name and that name must be ASCII.
        /// </summary>
        PostScriptName = 6,
        /// <summary>
        /// 7 Trademark notice.
        /// </summary>
        TrademarkNotice = 7,
        /// <summary>
        /// 8 Manufacturer name.
        /// </summary>
        ManufacturerName = 8,
        /// <summary>
        /// 9 Designer; name of the designer of the typeface.
        /// </summary>
        DesignerName = 9,
        /// <summary>
        /// 10 Description; description of the typeface. Can contain revision information, usage recommendations, history, features, and so on.
        /// </summary>
        Description = 10,
        /// <summary>
        /// 11 URL of the Font vendor (with procotol, e.g., http://, ftp://). If a unique serial number is embedded in the URL, it can be used to register the Font.
        /// </summary>
        UrlVendor = 11,
        /// <summary>
        /// 12 URL of the Font designer (with protocol, e.g., http://, ftp://) 
        /// </summary>
        UrlDesigner = 12,
        /// <summary>
        /// 13 License description; description of how the Font may be legally used, or different example scenarios for licensed use. This field should be written in plain language, not legalese. 
        /// </summary>
        LicenseDescription = 13,
        /// <summary>
        /// 14 License information URL, where additional licensing information can be found. 
        /// </summary>
        LicenseInfoUrl = 14,
        /// <summary>
        /// 15 Reserved 
        /// 16 Preferred Family (Windows only); In Windows, the Family name is displayed in the Font menu; the Subfamily name is presented as the Style name. For historical reasons, Font families have contained a maximum of four styles, but Font designers may group more than four fonts to a single family. The Preferred Family and Preferred Subfamily IDs allow Font designers to include the preferred family/subfamily groupings. These IDs are only present if they are different from IDs 1 and 2. 
        /// </summary>
        PreferredFamily = 16,
        /// <summary>
        /// 17 Preferred Subfamily (Windows only); In Windows, the Family name is displayed in the Font menu; the Subfamily name is presented as the Style name. For historical reasons, Font families have contained a maximum of four styles, but Font designers may group more than four fonts to a single family. The Preferred Family and Preferred Subfamily IDs allow Font designers to include the preferred family/subfamily groupings. These IDs are only present if they are different from IDs 1 and 2. 
        /// </summary>
        PreferredSubfamily = 17,
        /// <summary>
        /// 18 Compatible Full (Macintosh only); On the Macintosh, the menu name is constructed using the Font resource. This usually matches the Full Name. If you want the name of the Font to appear differently than the Full Name, you can insert the Compatible Full Name in ID 18. This name is not used by the Mac OS itself, but may be used by application developers (e.g., Adobe). 
        /// </summary>
        CompatibleFull = 18,
        /// <summary>
        /// 19 Sample text. This can be the Font name, or any other text that the designer thinks is the best sample text to show what the Font looks like.
        /// </summary>
        SampleText = 19
    };
    
    
protected:

    /// <summary>
    /// Represents PlatformId enumeration.
    /// </summary>
    enum class PlatformId
    {
        /// <summary>
        /// Value 0
        /// Apple Unicode
        /// </summary>
        AppleUnicode = 0,
        /// <summary>
        /// Value 1 
        /// Macintosh Script Manager code. 
        /// </summary>
        Macintosh = 1,
        /// <summary>
        /// Value2 
        /// Apple spec: (reserved; do not use)
        /// MS spec: ISO encoding
        /// </summary>
        ISO = 2,
        /// <summary>
        /// Value 3 
        /// Microsoft Microsoft encoding. 
        /// </summary>
        Microsoft = 3
    };
    
    /// <summary>
    /// Represents unicode platform PlatformSpecificId enumeration.
    /// </summary>
    enum class UnicodePlatformSpecificId
    {
        /// <summary>
        /// Value 0 
        /// Default semantics.
        /// </summary>
        Default = 0,
        /// <summary>
        /// Value 1 
        /// Version 1.1 semantics.
        /// </summary>
        Version1_1 = 1,
        /// <summary>
        /// Value 2 
        /// ISO 10646 1993 semantics (deprecated).
        /// </summary>
        ISO10646_1993 = 2,
        /// <summary>
        /// Value 3 
        /// Unicode 2.0 or later semantics.
        /// </summary>
        Unicode2_0 = 3
    };
    
    /// <summary>
    /// Represents Macintosh platform PlatformSpecificId enumeration.
    /// </summary>
    enum class MacPlatformSpecificId
    {
        /// <summary>
        /// Roman platform specific value.
        /// </summary>
        Roman = 0,
        /// <summary>
        /// Japanese platform specific value.
        /// </summary> 
        Japanese = 1,
        /// <summary>
        /// Traditional Chinese platform specific value.
        /// </summary>
        Traditional_Chinese = 2,
        /// <summary>
        /// Korean platform specific value.
        /// </summary>
        Korean = 3,
        /// <summary>
        /// Arabic platform specific value.
        /// </summary>
        Arabic = 4,
        /// <summary>
        /// Hebrew platform specific value.
        /// </summary>
        Hebrew = 5,
        /// <summary>
        /// Greek platform specific value.
        /// </summary>
        Greek = 6,
        /// <summary>
        /// Russian platform specific value.
        /// </summary>
        Russian = 7,
        /// <summary>
        /// RSymbol platform specific value.
        /// </summary>
        RSymbol = 8,
        /// <summary>
        /// Devanagari platform specific value.
        /// </summary>
        Devanagari = 9,
        /// <summary>
        /// Gurmukhi platform specific value.
        /// </summary>
        Gurmukhi = 10,
        /// <summary>
        /// Gujarati platform specific value.
        /// </summary>
        Gujarati = 11,
        /// <summary>
        /// Oriya platform specific value.
        /// </summary>
        Oriya = 12,
        /// <summary>
        /// Bengali platform specific value.
        /// </summary>
        Bengali = 13,
        /// <summary>
        /// Tamil platform specific value.
        /// </summary>
        Tamil = 14,
        /// <summary>
        /// Telugu platform specific value.
        /// </summary>
        Telugu = 15,
        /// <summary>
        /// Kannada platform specific value.
        /// </summary>
        Kannada = 16,
        /// <summary>
        /// Malayalam platform specific value.
        /// </summary>
        Malayalam = 17,
        /// <summary>
        /// Sinhalese platform specific value.
        /// </summary>
        Sinhalese = 18,
        /// <summary>
        /// Burmese platform specific value.
        /// </summary>
        Burmese = 19,
        /// <summary>
        /// Khmer platform specific value.
        /// </summary>
        Khmer = 20,
        /// <summary>
        /// Thai platform specific value.
        /// </summary>
        Thai = 21,
        /// <summary>
        /// Laotian platform specific value.
        /// </summary>
        Laotian = 22,
        /// <summary>
        /// Georgian platform specific value.
        /// </summary>
        Georgian = 23,
        /// <summary>
        /// Armenian platform specific value.
        /// </summary>
        Armenian = 24,
        /// <summary>
        /// Simplified Chinese platform specific value.
        /// </summary>
        Simplified_Chinese = 25,
        /// <summary>
        /// Tibetan platform specific value.
        /// </summary> 
        Tibetan = 26,
        /// <summary>
        /// Mongolian platform specific value.
        /// </summary>
        Mongolian = 27,
        /// <summary>
        /// Geez platform specific value.
        /// </summary>
        Geez = 28,
        /// <summary>
        /// Slavic platform specific value.
        /// </summary>
        Slavic = 29,
        /// <summary>
        /// Vietnamese platform specific value.
        /// </summary>
        Vietnamese = 30,
        /// <summary>
        /// Sindhi platform specific value.
        /// </summary> 
        Sindhi = 31,
        /// <summary>
        /// Uninterpreted platform specific value.
        /// </summary>
        Uninterpreted = 32
    };
    
    /// <summary>
    /// Microsoft platform language id enumeration.
    /// </summary>
    enum class MSLanguageId
    {
        /// <summary>
        /// English (6):	American	(0409; ENU)
        /// </summary>
        English_American = 0x0409,
        /// <summary>
        /// English (6):	British	(0809; ENG)
        /// </summary>
        English_British = 0x0809,
        /// <summary>
        /// English (6):	Australian	(0c09; ENA)
        /// </summary>
        English_Australian = 0x0c09,
        /// <summary>
        /// English (6):	Canadian	(1009; ENC)
        /// </summary>
        English_Canadian = 0x1009,
        /// <summary>
        /// English (6):	New Zealand	(1409; ENZ)
        /// </summary>
        English_NewZealand = 0x1409
    };
    
    /// <summary>
    /// Represents Microsoft platform PlatformSpecificId enumeration.
    /// </summary>
    enum class MSPlatformSpecificId
    {
        /// <summary>
        /// Symbol MS PlatformSpecificId.
        /// </summary>
        Symbol = 0,
        /// <summary>
        /// Unicode_BMP_UCS2 MS PlatformSpecificId.
        /// </summary>
        Unicode_BMP_UCS2 = 1,
        /// <summary>
        /// ShiftJIS MS PlatformSpecificId.
        /// </summary>
        ShiftJIS = 2,
        /// <summary>
        /// PRC MS PlatformSpecificId.
        /// </summary>
        PRC = 3,
        /// <summary>
        /// Big5 MS PlatformSpecificId.
        /// </summary>
        Big5 = 4,
        /// <summary>
        /// Wansung MS PlatformSpecificId.
        /// </summary>
        Wansung = 5,
        /// <summary>
        /// Johab MS PlatformSpecificId.
        /// </summary>
        Johab = 6,
        /// <summary>
        /// Reserved1 MS PlatformSpecificId.
        /// </summary>
        Reserved1 = 7,
        /// <summary>
        /// Reserved2 MS PlatformSpecificId.
        /// </summary>
        Reserved2 = 8,
        /// <summary>
        /// Reserved3 MS PlatformSpecificId.
        /// </summary>
        Reserved3 = 9,
        /// <summary>
        /// Unicode_UCS4 MS PlatformSpecificId.
        /// </summary>
        Unicode_UCS4 = 10
    };
    
    /// <summary>
    /// Macintosh platform language id enumeration.
    /// </summary>
    enum class MacLanguageId
    {
        /// <summary>
        /// English LanguageId value
        /// </summary>
        English = 0,
        /// <summary>
        /// French LanguageId value
        /// </summary>
        French = 1,
        /// <summary>
        /// German LanguageId value
        /// </summary>
        German = 2,
        /// <summary>
        /// Italian LanguageId value
        /// </summary>
        Italian = 3,
        /// <summary>
        /// Dutch LanguageId value
        /// </summary>
        Dutch = 4,
        /// <summary>
        /// Swedish LanguageId value
        /// </summary>
        Swedish = 5,
        /// <summary>
        /// Spanish LanguageId value
        /// </summary>
        Spanish = 6,
        /// <summary>
        /// Danish LanguageId value
        /// </summary>
        Danish = 7,
        /// <summary>
        /// Portuguese LanguageId value
        /// </summary>
        Portuguese = 8,
        /// <summary>
        /// Norwegian LanguageId value
        /// </summary>
        Norwegian = 9,
        /// <summary>
        /// Hebrew LanguageId value
        /// </summary>
        Hebrew = 10,
        /// <summary>
        /// Japanese LanguageId value
        /// </summary>
        Japanese = 11,
        /// <summary>
        /// Arabic LanguageId value
        /// </summary>
        Arabic = 12,
        /// <summary>
        /// Finnish LanguageId value
        /// </summary>
        Finnish = 13,
        /// <summary>
        /// Greek LanguageId value
        /// </summary>
        Greek = 14,
        /// <summary>
        /// Icelandic LanguageId value
        /// </summary>
        Icelandic = 15,
        /// <summary>
        /// Maltese LanguageId value
        /// </summary>
        Maltese = 16,
        /// <summary>
        /// Turkish LanguageId value
        /// </summary>
        Turkish = 17,
        /// <summary>
        /// Croatian LanguageId value
        /// </summary>
        Croatian = 18,
        /// <summary>
        /// Chinese_traditional LanguageId value
        /// </summary>
        Chinese_traditional = 19,
        /// <summary>
        /// Urdu LanguageId value
        /// </summary>
        Urdu = 20,
        /// <summary>
        /// Hindi LanguageId value
        /// </summary>
        Hindi = 21,
        /// <summary>
        /// Thai LanguageId value
        /// </summary>
        Thai = 22,
        /// <summary>
        /// Korean LanguageId value
        /// </summary>
        Korean = 23,
        /// <summary>
        /// Lithuanian LanguageId value
        /// </summary>
        Lithuanian = 24,
        /// <summary>
        /// Polish LanguageId value
        /// </summary>
        Polish = 25,
        /// <summary>
        /// Hungarian LanguageId value
        /// </summary>
        Hungarian = 26,
        /// <summary>
        /// Estonian LanguageId value
        /// </summary>
        Estonian = 27,
        /// <summary>
        /// Latvian LanguageId value
        /// </summary>
        Latvian = 28,
        /// <summary>
        /// Sami LanguageId value
        /// </summary>
        Sami = 29,
        /// <summary>
        /// Faroese LanguageId value
        /// </summary>
        Faroese = 30,
        /// <summary>
        /// Farsi_Persian LanguageId value
        /// </summary>
        Farsi_Persian = 31,
        /// <summary>
        /// Russian LanguageId value
        /// </summary>
        Russian = 32,
        /// <summary>
        /// Chinese_simplified LanguageId value
        /// </summary>
        Chinese_simplified = 33,
        /// <summary>
        /// Flemish LanguageId value
        /// </summary>
        Flemish = 34,
        /// <summary>
        /// Irish_Gaelic LanguageId value
        /// </summary>
        Irish_Gaelic = 35,
        /// <summary>
        /// Albanian LanguageId value
        /// </summary>
        Albanian = 36,
        /// <summary>
        /// Romanian LanguageId value
        /// </summary>
        Romanian = 37,
        /// <summary>
        /// Czech LanguageId value
        /// </summary>
        Czech = 38,
        /// <summary>
        /// Slovak LanguageId value
        /// </summary>
        Slovak = 39,
        /// <summary>
        /// Slovenian LanguageId value
        /// </summary>
        Slovenian = 40,
        /// <summary>
        /// Yiddish LanguageId value
        /// </summary>
        Yiddish = 41,
        /// <summary>
        /// Serbian LanguageId value
        /// </summary>
        Serbian = 42,
        /// <summary>
        /// Macedonian LanguageId value
        /// </summary>
        Macedonian = 43,
        /// <summary>
        /// Bulgarian LanguageId value
        /// </summary>
        Bulgarian = 44,
        /// <summary>
        /// Ukrainian LanguageId value
        /// </summary>
        Ukrainian = 45,
        /// <summary>
        /// Byelorussian LanguageId value
        /// </summary>
        Byelorussian = 46,
        /// <summary>
        /// Uzbek LanguageId value
        /// </summary>
        Uzbek = 47,
        /// <summary>
        /// Kazakh LanguageId value
        /// </summary>
        Kazakh = 48,
        /// <summary>
        /// Azerbaijani_Cyrillic_script LanguageId value
        /// </summary>
        Azerbaijani_Cyrillic_script = 49,
        /// <summary>
        /// Azerbaijani_Arabic_script LanguageId value
        /// </summary>
        Azerbaijani_Arabic_script = 50,
        /// <summary>
        /// Armenian LanguageId value
        /// </summary>
        Armenian = 51,
        /// <summary>
        /// Georgian LanguageId value
        /// </summary>
        Georgian = 52,
        /// <summary>
        /// Moldavian LanguageId value
        /// </summary>
        Moldavian = 53,
        /// <summary>
        /// Kirghiz LanguageId value
        /// </summary>
        Kirghiz = 54,
        /// <summary>
        /// Tajiki LanguageId value
        /// </summary>
        Tajiki = 55,
        /// <summary>
        /// Turkmen LanguageId value
        /// </summary>
        Turkmen = 56,
        /// <summary>
        /// Mongolian_Mongolian_script LanguageId value
        /// </summary>
        Mongolian_Mongolian_script = 57,
        /// <summary>
        /// Mongolian_Cyrillic_script LanguageId value
        /// </summary>
        Mongolian_Cyrillic_script = 58,
        /// <summary>
        /// Pashto LanguageId value
        /// </summary>
        Pashto = 59,
        /// <summary>
        /// Kurdish LanguageId value
        /// </summary>
        Kurdish = 60,
        /// <summary>
        /// Kashmiri LanguageId value
        /// </summary>
        Kashmiri = 61,
        /// <summary>
        /// Sindhi LanguageId value
        /// </summary>
        Sindhi = 62,
        /// <summary>
        /// Tibetan LanguageId value
        /// </summary>
        Tibetan = 63,
        /// <summary>
        /// Nepali LanguageId value
        /// </summary>
        Nepali = 64,
        /// <summary>
        /// Sanskrit LanguageId value
        /// </summary>
        Sanskrit = 65,
        /// <summary>
        /// Marathi LanguageId value
        /// </summary>
        Marathi = 66,
        /// <summary>
        /// Bengali LanguageId value
        /// </summary>
        Bengali = 67,
        /// <summary>
        /// Assamese LanguageId value
        /// </summary>
        Assamese = 68,
        /// <summary>
        /// Gujarati LanguageId value
        /// </summary>
        Gujarati = 69,
        /// <summary>
        /// Punjabi LanguageId value
        /// </summary>
        Punjabi = 70,
        /// <summary>
        /// Oriya LanguageId value
        /// </summary>
        Oriya = 71,
        /// <summary>
        /// Malayalam LanguageId value
        /// </summary>
        Malayalam = 72,
        /// <summary>
        /// Kannada LanguageId value
        /// </summary>
        Kannada = 73,
        /// <summary>
        /// Tamil LanguageId value
        /// </summary>
        Tamil = 74,
        /// <summary>
        /// Telugu LanguageId value
        /// </summary>
        Telugu = 75,
        /// <summary>
        /// Sinhalese LanguageId value
        /// </summary>
        Sinhalese = 76,
        /// <summary>
        /// Burmese LanguageId value
        /// </summary>
        Burmese = 77,
        /// <summary>
        /// Khmer LanguageId value
        /// </summary>
        Khmer = 78,
        /// <summary>
        /// Lao LanguageId value
        /// </summary>
        Lao = 79,
        /// <summary>
        /// Vietnamese LanguageId value
        /// </summary>
        Vietnamese = 80,
        /// <summary>
        /// Indonesian LanguageId value
        /// </summary>
        Indonesian = 81,
        /// <summary>
        /// Tagalog LanguageId value
        /// </summary>
        Tagalog = 82,
        /// <summary>
        /// Malay_Roman_script LanguageId value
        /// </summary>
        Malay_Roman_script = 83,
        /// <summary>
        /// Malay_Arabic_script LanguageId value
        /// </summary>
        Malay_Arabic_script = 84,
        /// <summary>
        /// Amharic LanguageId value
        /// </summary>
        Amharic = 85,
        /// <summary>
        /// Tigrinya LanguageId value
        /// </summary>
        Tigrinya = 86,
        /// <summary>
        /// Galla LanguageId value
        /// </summary>
        Galla = 87,
        /// <summary>
        /// Somali LanguageId value
        /// </summary>
        Somali = 88,
        /// <summary>
        /// Swahili LanguageId value
        /// </summary>
        Swahili = 89,
        /// <summary>
        /// Kinyarwanda_Ruanda LanguageId value
        /// </summary>
        Kinyarwanda_Ruanda = 90,
        /// <summary>
        /// Rundi LanguageId value
        /// </summary>
        Rundi = 91,
        /// <summary>
        /// Nyanja_Chewa LanguageId value
        /// </summary>
        Nyanja_Chewa = 92,
        /// <summary>
        /// Malagasy LanguageId value
        /// </summary>
        Malagasy = 93,
        /// <summary>
        /// Esperanto LanguageId value
        /// </summary>
        Esperanto = 94,
        /// <summary>
        /// Welsh LanguageId value
        /// </summary>
        Welsh = 128,
        /// <summary>
        /// Basque LanguageId value
        /// </summary>
        Basque = 129,
        /// <summary>
        /// Catalan LanguageId value
        /// </summary>
        Catalan = 130,
        /// <summary>
        /// Latin LanguageId value
        /// </summary>
        Latin = 131,
        /// <summary>
        /// Quechua LanguageId value
        /// </summary>
        Quechua = 132,
        /// <summary>
        /// Guarani LanguageId value
        /// </summary>
        Guarani = 133,
        /// <summary>
        /// Aymara LanguageId value
        /// </summary>
        Aymara = 134,
        /// <summary>
        /// Tatar LanguageId value
        /// </summary>
        Tatar = 135,
        /// <summary>
        /// Uighur LanguageId value
        /// </summary>
        Uighur = 136,
        /// <summary>
        /// Dzongkha LanguageId value
        /// </summary>
        Dzongkha = 137,
        /// <summary>
        /// Javanese_Roman_script LanguageId value
        /// </summary>
        Javanese_Roman_script = 138,
        /// <summary>
        /// Sundanese_Roman_script LanguageId value
        /// </summary>
        Sundanese_Roman_script = 139,
        /// <summary>
        /// Galician LanguageId value
        /// </summary>
        Galician = 140,
        /// <summary>
        /// Afrikaans LanguageId value
        /// </summary>
        Afrikaans = 141,
        /// <summary>
        /// Breton LanguageId value
        /// </summary>
        Breton = 142,
        /// <summary>
        /// Inuktitut LanguageId value
        /// </summary>
        Inuktitut = 143,
        /// <summary>
        /// Scottish_Gaelic LanguageId value
        /// </summary>
        Scottish_Gaelic = 144,
        /// <summary>
        /// Manx_Gaelic LanguageId value
        /// </summary>
        Manx_Gaelic = 145,
        /// <summary>
        /// Irish_Gaelic_with_dot_above LanguageId value
        /// </summary>
        Irish_Gaelic_with_dot_above = 146,
        /// <summary>
        /// Tongan LanguageId value
        /// </summary>
        Tongan = 147,
        /// <summary>
        /// Greek_polytonic LanguageId value
        /// </summary>
        Greek_polytonic = 148,
        /// <summary>
        /// Greenlandic LanguageId value
        /// </summary>
        Greenlandic = 149,
        /// <summary>
        /// Azerbaijani_Roman_script LanguageId value
        /// </summary>
        Azerbaijani_Roman_script = 150
    };
    
    
protected:

    class NameRecord : public System::Object
    {
        typedef NameRecord ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        uint16_t platformId;
        uint16_t platformSpecificId;
        uint16_t languageId;
        uint16_t nameId;
        System::String storedString;
        
        NameRecord();
        
    };
    
    class NameEventArgs : public System::EventArgs
    {
        typedef NameEventArgs ThisType;
        typedef System::EventArgs BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        Aspose::Font::TtfTables::TtfNameTable::NameId NameId;
        
        NameEventArgs(Aspose::Font::TtfTables::TtfNameTable::NameId nameId);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    
private:

    class NameRecordList : public System::Collections::Generic::SortedList<System::SharedPtr<Aspose::Font::TtfTables::TtfNameTable::NameRecord>, System::SharedPtr<Aspose::Font::TtfTables::TtfNameTable::NameRecord>>
    {
        typedef NameRecordList ThisType;
        typedef System::Collections::Generic::SortedList<System::SharedPtr<Aspose::Font::TtfTables::TtfNameTable::NameRecord>, System::SharedPtr<Aspose::Font::TtfTables::TtfNameTable::NameRecord>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        NameRecordList();
        
        void Add(System::SharedPtr<TtfNameTable::NameRecord> const &nr);
        bool Contains(System::SharedPtr<TtfNameTable::NameRecord> const &nr) const;
        void Remove(System::SharedPtr<TtfNameTable::NameRecord> nr);
        
    protected:
    
        virtual ~NameRecordList();
        
    };
    
    class NameRecordComparer : public System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Font::TtfTables::TtfNameTable::NameRecord>>
    {
        typedef NameRecordComparer ThisType;
        typedef System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Font::TtfTables::TtfNameTable::NameRecord>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Compares two objects and returns a value indicating whether one is less than, equal to, or greater than the other.
        /// </summary>
        /// <returns>
        /// A signed integer that indicates the relative values of <paramref name="xRecord"></paramref> and <paramref name="yRecord"></paramref>, as shown in the following table.Value Meaning Less than zero <paramref name="xRecord"></paramref> is less than <paramref name="yRecord"></paramref>. Zero <paramref name="xRecord"></paramref> equals <paramref name="yRecord"></paramref>. Greater than zero <paramref name="xRecord"></paramref> is greater than <paramref name="yRecord"></paramref>. 
        /// </returns>
        /// <param name="xRecord">The first object to compare. </param><param name="yRecord">The second object to compare. </param><exception cref="T:System::ArgumentException">Neither <paramref name="xRecord"></paramref> nor <paramref name="yRecord"></paramref> implements the <see cref="T:System::IComparable"></see> interface.-or- <paramref name="xRecord"></paramref> and <paramref name="yRecord"></paramref> are of different types and neither one can handle comparisons with the other. </exception><filterpriority>2</filterpriority>
        int32_t Compare(System::SharedPtr<TtfNameTable::NameRecord> const &xRecord, System::SharedPtr<TtfNameTable::NameRecord> const &yRecord) const override;
        
    };
    
    
public:

    /// <summary>
    /// Gets table tag.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::String get_Tag();
    
    /// <summary>
    /// Returns a name by nameId.
    /// </summary>
    /// <param name="nameId">Name Id.</param>
    /// <returns>Name.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<MultiLanguageString> GetMultiLanguageNameById(TtfNameTable::NameId nameId);
    /// <summary>
    /// returns a name by nameId
    /// </summary>
    /// <param name="nameId">name identifier</param>
    /// <returns>name</returns>
    ASPOSE_FONT_SHARED_API System::String GetNameById(TtfNameTable::NameId nameId);
    
protected:

    /// <summary>
    /// Table Tag.
    /// </summary>
    static const System::String TAG;
    static const System::String LowerTag;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TtfNameTable"></see> class.
    /// </summary>
    /// <param name="ttfTables">TTF tables repository.</param>
    /// <param name="font">TTF Font.</param>
    TtfNameTable(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font);
    TtfNameTable(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length);
    
    System::EventHandler<> NameChanged;
    
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum) override;
    /// <summary>
    /// Adds name by NameId.
    /// </summary>
    /// <param name="nameId">name identifier</param>
    /// <param name="name">name</param>
    void AddNameById(TtfNameTable::NameId nameId, System::String name);
    
    virtual ASPOSE_FONT_SHARED_API ~TtfNameTable();
    
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<TtfNameTable::NameRecordList> _nameRecords;
    System::SharedPtr<System::Collections::Generic::Dictionary<uint16_t, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TtfNameTable::NameRecord>>>>> nameIDMap;
    
    void AddMSName(int32_t nameId, System::String storedString, bool replaceIfExists);
    void AddMacName(int32_t nameId, System::String storedString, bool replaceIfExists);
    void AddName(int32_t languageId, int32_t nameId, int32_t platformId, int32_t platformSpecificId, System::String storedString, bool replaceIfExists);
    void AddName(System::SharedPtr<TtfNameTable::NameRecord> winNameRecord, bool replaceIfExists);
    
};

} // namespace TtfTables
} // namespace Font
} // namespace Aspose


