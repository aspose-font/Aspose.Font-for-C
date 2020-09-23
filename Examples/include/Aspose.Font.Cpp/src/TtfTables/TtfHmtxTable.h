#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/TtfTables/TtfTableBase.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFontMetrics; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Utils { class TTFUtils; } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfHheaTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfHmtxTable; } } }

namespace Aspose {

namespace Font {

namespace TtfTables {

/// <summary>
/// Represents "hmtx" table of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfHmtxTable : public Aspose::Font::TtfTables::TtfTableBase
{
    typedef TtfHmtxTable ThisType;
    typedef Aspose::Font::TtfTables::TtfTableBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Ttf::TtfFont;
    
public:

    /// <summary>
    /// Represents metrics record.
    /// </summary>
    class ASPOSE_FONT_SHARED_CLASS LongHorMetric : public System::Object
    {
        typedef LongHorMetric ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Font::Ttf::TtfFont;
        friend class Aspose::Font::Ttf::TtfFontMetrics;
        friend class Aspose::Font::Ttf::Utils::TTFUtils;
        friend class Aspose::Font::TtfTables::TtfGlyfTable;
        friend class Aspose::Font::TtfTables::TtfHheaTable;
        friend class Aspose::Font::TtfTables::TtfHmtxTable;
        
    public:
    
        /// <summary>
        /// Gets advance width value.
        /// </summary>
        ASPOSE_FONT_SHARED_API uint16_t get_AdvanceWidth() const;
        /// <summary>
        /// Gets left side bearing value.
        /// </summary>
        ASPOSE_FONT_SHARED_API int16_t get_LeftSideBearing() const;
        
        ASPOSE_FONT_SHARED_API LongHorMetric();
        
    protected:
    
        /// <summary>
        /// Gets advance width value.
        /// </summary>
        ASPOSE_FONT_SHARED_API void set_AdvanceWidth(uint16_t value);
        /// <summary>
        /// Gets left side bearing value.
        /// </summary>
        ASPOSE_FONT_SHARED_API void set_LeftSideBearing(int16_t value);
        
        LongHorMetric(uint16_t advanceWidth, int16_t leftSideBearing);
        
    private:
    
        uint16_t _advanceWidth;
        int16_t _leftSideBearing;
        
    };
    
    /// <summary>
    /// Represents list of metrics.
    /// </summary>
    class ASPOSE_FONT_SHARED_CLASS MetricList : public System::Object
    {
        typedef MetricList ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Font::Ttf::TtfFont;
        friend class Aspose::Font::TtfTables::TtfGlyfTable;
        friend class Aspose::Font::TtfTables::TtfHmtxTable;
        friend class Aspose::Font::Ttf::Utils::TTFUtils;
        
    public:
    
        /// <summary>
        /// Gets metrics count.
        /// </summary>
        ASPOSE_FONT_SHARED_API int32_t get_Count();
        
        /// <summary>
        /// Gets metrics by glyph index.
        /// </summary>
        /// <param name="glyphIndex">Glyph index to get metrics for.</param>
        /// <returns>Metrics record.</returns>
        ASPOSE_FONT_SHARED_API TtfHmtxTable::LongHorMetric idx_get(int32_t glyphIndex);
        
    protected:
    
        MetricList(int32_t numGlyphs);
        MetricList();
        
        /// <summary>
        /// Gets metrics by glyph index.
        /// </summary>
        /// <param name="glyphIndex">Glyph index to get metrics for.</param>
        /// <param name="value">Metrics record.</param>
        ASPOSE_FONT_SHARED_API void idx_set(int32_t glyphIndex, TtfHmtxTable::LongHorMetric value);
        
        void Add(TtfHmtxTable::LongHorMetric offset);
        System::SharedPtr<System::Collections::Generic::List<TtfHmtxTable::LongHorMetric>> GetRawList();
        ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::List<TtfHmtxTable::LongHorMetric>> metricList;
        
    };
    
    
public:

    /// <summary>
    /// Gets table tag.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::String get_Tag();
    /// <summary>
    /// Gets horizontal metrics.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<TtfHmtxTable::MetricList> get_HMetrics();
    /// <summary>
    /// Gets left side bearings.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<int16_t> get_LeftSidebearings();
    /// <summary>
    /// In hmtx table could be the cases when total number of glyphs is not equal to 
    /// hhea.numberOfHMetrics. For these cases hmtx table contains additional array
    /// 'leftSideBearing' which is correspondent to property <see cref="LeftSidebearings"></see>.
    /// But glyphs with indexes from hhea.numOfLongHorMetrics to maxp.numGlyphs also have widths.
    /// And these widths in accordance to specification for hmtx table have such values:
    /// "Here the advanceWidth is assumed to be the same as the advanceWidth for the last entry above".
    /// </summary>
    ASPOSE_FONT_SHARED_API uint16_t get_AdditionalAdvanceWidth();
    
protected:

    /// <summary>
    /// Table Tag.
    /// </summary>
    static const System::String TAG;
    static const System::String LowerTag;
    
    TtfHmtxTable(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font);
    TtfHmtxTable(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length);
    
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void LazyLoadImpl(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum) override;
    ASPOSE_FONT_SHARED_API bool IsConsistent() override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<TtfHmtxTable::MetricList> hmetrics;
    System::ArrayPtr<int16_t> leftSidebearings;
    uint16_t _additionalAdvanceWidth;
    
};

} // namespace TtfTables
} // namespace Font
} // namespace Aspose


