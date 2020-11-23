#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/TtfTables/TtfTableBase.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFontMetrics; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfHmtxTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfOs2Table; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }

namespace Aspose {

namespace Font {

namespace TtfTables {

/// <summary>
/// Represents "hhea" table of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfHheaTable : public Aspose::Font::TtfTables::TtfTableBase
{
    typedef TtfHheaTable ThisType;
    typedef Aspose::Font::TtfTables::TtfTableBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::Ttf::TtfFontMetrics;
    friend class Aspose::Font::TtfTables::TtfGlyfTable;
    friend class Aspose::Font::TtfTables::TtfHmtxTable;
    friend class Aspose::Font::TtfTables::TtfOs2Table;
    
public:

    /// <summary>
    /// Gets table tag.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::String get_Tag();
    /// <summary>
    /// Gets uint16 numOfLongHorMetrics number of advance widths in metrics table.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_NumOfLongHorMetrics() const;
    /// <summary>
    /// Gets uFWord advanceWidthMax must be consistent with horizontal metrics.
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_AdvanceWidthMax() const;
    /// <summary>
    /// Gets the MinRightSideBearing value.
    /// </summary>
    /// <value>The MinRightSideBearing value.</value>
    ASPOSE_FONT_SHARED_API int16_t get_MinRightSideBearing() const;
    /// <summary>
    /// Gets the MinLeftSideBearing value.
    /// </summary>
    /// <value>The MinLeftSideBearing value.</value>
    ASPOSE_FONT_SHARED_API int16_t get_MinLeftSideBearing() const;
    /// <summary>
    /// Gets the XMaxExtent value.
    /// </summary>
    /// <value>The XMaxExtent value.</value>
    ASPOSE_FONT_SHARED_API int16_t get_XMaxExtent() const;
    /// <summary>
    /// Gets the ascent.
    /// </summary>
    /// <value>The ascent.</value>
    ASPOSE_FONT_SHARED_API int16_t get_Ascent() const;
    /// <summary>
    /// Gets the descent.
    /// </summary>
    /// <value>The descent.</value>
    ASPOSE_FONT_SHARED_API int16_t get_Descent() const;
    /// <summary>
    /// Gets the lineGap.
    /// </summary>
    /// <value>The lineGap.</value>
    ASPOSE_FONT_SHARED_API int16_t get_LineGap() const;
    /// <summary>
    /// Gets caret slop run.
    /// </summary>
    /// <value>The caret slop run.</value>
    ASPOSE_FONT_SHARED_API int16_t get_CaretSlopeRun() const;
    /// <summary>
    /// Gets caret slop rise.
    /// </summary>
    /// <value>The caret slop rise.</value>
    ASPOSE_FONT_SHARED_API int16_t get_CaretSlopeRise() const;
    
protected:

    /// <summary>
    /// Table Tag.
    /// </summary>
    static const System::String TAG;
    static const System::String LowerTag;
    
    /// <summary>
    /// Gets uint16 numOfLongHorMetrics number of advance widths in metrics table.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_NumOfLongHorMetrics(uint16_t value);
    /// <summary>
    /// Gets the MinRightSideBearing value.
    /// </summary>
    /// <value>The MinRightSideBearing value.</value>
    ASPOSE_FONT_SHARED_API void set_MinRightSideBearing(int16_t value);
    /// <summary>
    /// Gets the MinLeftSideBearing value.
    /// </summary>
    /// <value>The MinLeftSideBearing value.</value>
    ASPOSE_FONT_SHARED_API void set_MinLeftSideBearing(int16_t value);
    /// <summary>
    /// Gets the XMaxExtent value.
    /// </summary>
    /// <value>The XMaxExtent value.</value>
    ASPOSE_FONT_SHARED_API void set_XMaxExtent(int16_t value);
    /// <summary>
    /// Gets the ascent.
    /// </summary>
    /// <value>The ascent.</value>
    ASPOSE_FONT_SHARED_API void set_Ascent(int16_t value);
    /// <summary>
    /// Gets the descent.
    /// </summary>
    /// <value>The descent.</value>
    ASPOSE_FONT_SHARED_API void set_Descent(int16_t value);
    
    TtfHheaTable(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfHheaTable, CODEPORTING_ARGS(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font));
    
    TtfHheaTable(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfHheaTable, CODEPORTING_ARGS(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length));
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum) override;
    
private:

    float version;
    uint16_t numOfLongHorMetrics;
    uint16_t advanceWidthMax;
    int16_t minLeftSideBearing;
    int16_t ascent;
    int16_t descent;
    int16_t lineGap;
    int16_t metricDataFormat;
    int16_t minRightSideBearing;
    int16_t xMaxExtent;
    int16_t caretSlopeRise;
    int16_t caretSlopeRun;
    int16_t caretOffset;
    
    void ComputeValues();
    
};

} // namespace TtfTables
} // namespace Font
} // namespace Aspose


