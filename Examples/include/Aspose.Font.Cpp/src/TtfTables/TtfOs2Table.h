#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/TtfTables/TtfTableBase.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFontMetrics; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Utils { class TTFUtils; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Validation { class PdfAFontValidator; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Validation { class TTFFontCorrector; } } } }
namespace Aspose { namespace Page { namespace EPS { namespace Postscript { class DefineFont; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace TextShowing { class ShowTextBase; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class FontUtils; } } } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { namespace Ttf { class LicenseFlags; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }

namespace Aspose {

namespace Font {

namespace TtfTables {

/// <summary>
/// Represents "OS/2" table of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfOs2Table : public Aspose::Font::TtfTables::TtfTableBase
{
    typedef TtfOs2Table ThisType;
    typedef Aspose::Font::TtfTables::TtfTableBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::Ttf::TtfFontMetrics;
    friend class Aspose::Font::Ttf::Utils::TTFUtils;
    friend class Aspose::Font::Ttf::Validation::PdfAFontValidator;
    friend class Aspose::Font::Ttf::Validation::TTFFontCorrector;
    friend class Aspose::Page::EPS::Postscript::DefineFont;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::TextShowing::ShowTextBase;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::FontUtils;
    
public:

    /// <summary>
    /// Gets table tag.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::String get_Tag();
    /// <summary>
    /// Gets Version value.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_Version() const;
    /// <summary>
    /// Gets supported versions of the OS/2 table.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<int32_t> get_SupportedTableVersions();
    /// <summary>
    /// Gets the Average Character Width parameter.
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_XAvgCharWidth() const;
    /// <summary>
    /// Indicates the visual weight (degree of blackness or thickness of strokes) of the characters in the Font.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_USWeightClass() const;
    /// <summary>
    /// Indicates a relative change from the normal aspect ratio (width to height ratio) as specified by a font designer for the glyphs in a Font.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_USWidthClass() const;
    /// <summary>
    /// Gets FSType value.
    /// </summary>
    /// <remarks>
    /// Indicates font embedding licensing rights for the Font.
    /// </remarks>
    ASPOSE_FONT_SHARED_API uint16_t get_FSType() const;
    /// <summary>
    /// Gets YSubscriptXSize value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_YSubscriptXSize() const;
    /// <summary>
    /// Gets YSubscriptYSize value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_YSubscriptYSize() const;
    /// <summary>
    /// Gets YSubscriptXOffset value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_YSubscriptXOffset() const;
    /// <summary>
    /// Gets YSubscriptYOffset value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_YSubscriptYOffset() const;
    /// <summary>
    /// Gets YSuperscriptXSize value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_YSuperscriptXSize() const;
    /// <summary>
    /// Gets YSuperscriptYSize value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_YSuperscriptYSize() const;
    /// <summary>
    /// Gets YSuperscriptXOffset value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_YSuperscriptXOffset() const;
    /// <summary>
    /// Gets YSuperscriptYOffset value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_YSuperscriptYOffset() const;
    /// <summary>
    /// Gets YStrikeoutSize value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_YStrikeoutSize() const;
    /// <summary>
    /// Gets YStrikeoutPosition value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_YStrikeoutPosition() const;
    /// <summary>
    /// This parameter is a classification of font-family design.
    ///   The font class and font subclass are registered values assigned by IBM to each font family. This parameter is intended for use in selecting an alternate font when the requested font is not available.
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_SFamilyClass() const;
    /// <summary>
    /// This 10 byte series of numbers is used to describe the visual characteristics of a given typeface. These characteristics are then used to associate the font with other fonts of similar appearance having different names.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<uint8_t> get_Panose() const;
    /// <summary>
    /// Gets ULUnicodeRange value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<uint32_t> get_ULUnicodeRange() const;
    /// <summary>
    /// Gets AchVendId value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<uint8_t> get_AchVendId() const;
    /// <summary>
    /// Contains information concerning the nature of the font patterns.
    /// 
    /// 0	bit 1	ITALIC	Font contains Italic characters, otherwise they are upright.
    /// 1	 	    UNDERSCORE	Characters are underscored.
    /// 2	 	    NEGATIVE	Characters have their foreground and background reversed.
    /// 3	 	    OUTLINED	Outline (hollow) characters, otherwise they are solid.
    /// 4	 	    STRIKEOUT	Characters are overstruck.
    /// 5	bit 0	BOLD	Characters are emboldened.
    /// 6	 	    REGULAR	Characters are in the standard weight/style for the Font.
    /// 
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_FSSelection() const;
    /// <summary>
    /// Gets USFirstCharIndex value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_USFirstCharIndex() const;
    /// <summary>
    /// Gets USLastCharIndex value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_USLastCharIndex() const;
    /// <summary>
    /// Gets STypoAscender value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_STypoAscender() const;
    /// <summary>
    /// Gets STypoDescender value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_STypoDescender() const;
    /// <summary>
    /// Gets STypoLineGap value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_STypoLineGap() const;
    /// <summary>
    /// Gets USWinAscent value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_USWinAscent() const;
    /// <summary>
    /// Gets USWinDescent value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_USWinDescent() const;
    /// <summary>
    /// Gets ULCodePageRange value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<uint32_t> get_ULCodePageRange() const;
    /// <summary>
    /// Gets SXHeight value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_SXHeight() const;
    /// <summary>
    /// Gets SCapHeight value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API int16_t get_SCapHeight() const;
    /// <summary>
    /// Gets USDefaultChar value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_USDefaultChar() const;
    /// <summary>
    /// Gets USBreakChar value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_USBreakChar() const;
    /// <summary>
    /// Gets USMaxContext value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_USMaxContext() const;
    
    /// <summary>
    /// Gets an embedded flags(fsType) in object representation.
    /// </summary>
    /// <returns>Embedded flags.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Ttf::LicenseFlags> GetLicenseFlags();
    
protected:

    /// <summary>
    /// Table Tag.
    /// </summary>
    static const System::String TAG;
    static const System::String LowerTag;
    
    /// <summary>
    /// Gets FSType value.
    /// </summary>
    /// <remarks>
    /// Indicates font embedding licensing rights for the Font.
    /// </remarks>
    ASPOSE_FONT_SHARED_API void set_FSType(uint16_t value);
    /// <summary>
    /// Contains information concerning the nature of the font patterns.
    /// 
    /// 0	bit 1	ITALIC	Font contains Italic characters, otherwise they are upright.
    /// 1	 	    UNDERSCORE	Characters are underscored.
    /// 2	 	    NEGATIVE	Characters have their foreground and background reversed.
    /// 3	 	    OUTLINED	Outline (hollow) characters, otherwise they are solid.
    /// 4	 	    STRIKEOUT	Characters are overstruck.
    /// 5	bit 0	BOLD	Characters are emboldened.
    /// 6	 	    REGULAR	Characters are in the standard weight/style for the Font.
    /// 
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_FSSelection(uint16_t value);
    /// <summary>
    /// Gets STypoAscender value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_STypoAscender(int16_t value);
    /// <summary>
    /// Gets STypoDescender value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_STypoDescender(int16_t value);
    /// <summary>
    /// Gets USWinAscent value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_USWinAscent(uint16_t value);
    /// <summary>
    /// Gets USWinDescent value. 
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_USWinDescent(uint16_t value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TtfOs2Table"></see> class.
    /// </summary>
    /// <param name="ttfTables">TTF tables repository.</param>
    /// <param name="font">TTF font.</param>
    TtfOs2Table(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font);
    TtfOs2Table(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length);
    
    void AdaptValuesOS2Table(int16_t ascend);
    void SetFirstCharIndex(uint16_t value);
    void SetLastCharIndex(uint16_t value);
    void SetCapHeight(int16_t value);
    void SetBreakChar(uint16_t value);
    void SetXAvgCharWidth(int16_t value);
    void SetMaxContext(uint16_t value);
    void CopyFrom(System::SharedPtr<TtfOs2Table> otherTable);
    /// <summary>
    /// Copies some font metrics (ascent, descent, line spacing) from Hhea table of this TTF font. /> class
    /// </summary>
    void CopyFromHheaTable();
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum) override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    uint16_t version;
    int16_t xAvgCharWidth;
    uint16_t usWeightClass;
    uint16_t usWidthClass;
    /// <summary>
    /// Indicates font embedding licensing rights for the Font.
    /// </summary>
    uint16_t fsType;
    int16_t ySubscriptXSize;
    int16_t ySubscriptYSize;
    int16_t ySubscriptXOffset;
    int16_t ySubscriptYOffset;
    int16_t ySuperscriptXSize;
    int16_t ySuperscriptYSize;
    int16_t ySuperscriptXOffset;
    int16_t ySuperscriptYOffset;
    int16_t yStrikeoutSize;
    int16_t yStrikeoutPosition;
    int16_t sFamilyClass;
    System::ArrayPtr<uint8_t> panose;
    System::ArrayPtr<uint32_t> ulUnicodeRange;
    System::ArrayPtr<uint8_t> achVendID;
    uint16_t fsSelection;
    uint16_t usFirstCharIndex;
    uint16_t usLastCharIndex;
    int16_t sTypoAscender;
    int16_t sTypoDescender;
    int16_t sTypoLineGap;
    uint16_t usWinAscent;
    uint16_t usWinDescent;
    System::ArrayPtr<uint32_t> ulCodePageRange;
    int16_t sxHeight;
    int16_t sCapHeight;
    uint16_t usDefaultChar;
    uint16_t usBreakChar;
    uint16_t usMaxContext;
    
};

} // namespace TtfTables
} // namespace Font
} // namespace Aspose


