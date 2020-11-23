#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum_helpers.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/collections/sorted_dictionary.h>
#include <system/collections/list.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/TtfTables/TtfTableBase.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Ttf { class TTFFontParser; } } }
namespace Aspose { namespace Font { namespace TtfRendering { class TTFPathDefinition; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Validation { class TTFFontCorrector; } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfSubsetGlyfTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphIdList; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }
namespace Aspose { namespace Font { namespace Glyphs { class CompositeGlyph; } } }
namespace Aspose { namespace Font { namespace Sources { class StreamSource; } } }

namespace Aspose {

namespace Font {

namespace TtfTables {

/// <summary>
/// Represents "glyf" table of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfGlyfTable : public Aspose::Font::TtfTables::TtfTableBase
{
    typedef TtfGlyfTable ThisType;
    typedef Aspose::Font::TtfTables::TtfTableBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
private:

    class PointsCollection;
    class PointDefinition;
    
    friend class Aspose::Font::Ttf::TTFFontParser;
    friend class Aspose::Font::TtfRendering::TTFPathDefinition;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::Ttf::Validation::TTFFontCorrector;
    friend class Aspose::Font::TtfTables::TtfSubsetGlyfTable;
    
protected:

    enum class OutlineFlagsEnum : uint8_t
    {
        OnCurve = 1,
        XShortVector = 2,
        YShortVector = 4,
        Repeat = 8,
        PositiveXShortVector = 16,
        PositiveYShortVector = 32
    };
    DECLARE_FRIEND_ENUM_OPERATORS(Aspose::Font::TtfTables::TtfGlyfTable::OutlineFlagsEnum);
    
    
    enum class ComponentFlagsEnum : uint16_t
    {
        ARG_1_AND_2_ARE_WORDS = 1,
        ARGS_ARE_XY_VALUES = 2,
        ROUND_XY_TO_GRID = 4,
        WE_HAVE_A_SCALE = 8,
        MORE_COMPONENTS = 32,
        WE_HAVE_AN_X_AND_Y_SCALE = 64,
        WE_HAVE_A_TWO_BY_TWO = 128,
        WE_HAVE_INSTRUCTIONS = 256,
        USE_MY_METRICS = 512,
        OVERLAP_COMPOUND = 1024
    };
    DECLARE_FRIEND_ENUM_OPERATORS(Aspose::Font::TtfTables::TtfGlyfTable::ComponentFlagsEnum);
    
    
    
private:

    class ContourDefinition : public System::Object
    {
        typedef ContourDefinition ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        ContourDefinition(System::SharedPtr<TtfGlyfTable::PointsCollection> points);
        ContourDefinition();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<TtfGlyfTable::PointsCollection> Points;
        
    };
    
    class PointsCollection : public System::Collections::Generic::List<Aspose::Font::TtfTables::TtfGlyfTable::PointDefinition>
    {
        typedef PointsCollection ThisType;
        typedef System::Collections::Generic::List<Aspose::Font::TtfTables::TtfGlyfTable::PointDefinition> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        void SetTemplateWeakPtr(unsigned int argument) override;
        
    protected:
    
        virtual ~PointsCollection();
        
    };
    
    class PointDefinition : public System::Object
    {
        typedef PointDefinition ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        uint8_t Flags;
        int32_t X;
        int32_t Y;
        
        PointDefinition();
        
    };
    
    
public:

    /// <summary>
    /// Gets table tag.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::String get_Tag();
    
    /// <summary>
    /// Returns true in case the table contains glyph with glyphIndex.
    /// </summary>
    /// <param name="glyphIndex">Glyph index.</param>
    /// <returns>True if table contains glyph for index specified, false otherwise.</returns>
    virtual ASPOSE_FONT_SHARED_API bool ContainsGlyph(int32_t glyphIndex);
    /// <summary>
    /// Returns a glyph by glyph index.
    /// </summary>
    /// <param name="glyphIndex">Glyph index.</param>
    /// <returns>Glyph related to index specified.</returns>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::Glyphs::Glyph> GetGlyph(uint32_t glyphIndex);
    
protected:

    /// <summary>
    /// Table Tag.
    /// </summary>
    static const System::String TAG;
    static const System::String LowerTag;
    
    TtfGlyfTable(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfGlyfTable, CODEPORTING_ARGS(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font));
    
    TtfGlyfTable(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfGlyfTable, CODEPORTING_ARGS(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length));
    void GetComponentSubglyphs(int32_t glyphIndex, System::SharedPtr<Aspose::Font::Glyphs::GlyphIdList> glyphIds);
    bool IsGlyphAdded(System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph);
    uint16_t GetGlyphIndex(System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph);
    void SaveGlyph(System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph, System::ArrayPtr<uint8_t>& glyphBytes, bool& isNewGlyph);
    void UpdateAllGlyphsAsNewTable(System::SharedPtr<System::Collections::Generic::SortedDictionary<int32_t, System::SharedPtr<Aspose::Font::Glyphs::Glyph>>> sourceGlyphs, System::SharedPtr<System::Collections::Generic::SortedDictionary<int32_t, System::SharedPtr<Aspose::Font::Glyphs::Glyph>>> updatedGlyphs);
    ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum) override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::ArrayPtr<uint8_t>>> _glyphBytes;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, uint16_t>> _initialFontData;
    
    uint32_t get_TableOffset();
    
    System::SharedPtr<Aspose::Font::Glyphs::Glyph> LoadGlyph(int32_t glyphIndex);
    void LoadGlyphNum(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader, int32_t glyphNum, System::SharedPtr<Aspose::Font::Glyphs::Glyph>& glyph, int32_t& nestingLevel);
    void LoadSimpleGlyph(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader, int32_t glyphNum, System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph, uint32_t glyphOffset, int16_t numberOfContours);
    void LoadCompositeGlyph(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader, int32_t glyphNum, int32_t& nestingLevel, System::SharedPtr<Aspose::Font::Glyphs::CompositeGlyph> compositeGlyph);
    static System::String BuildCacheKey(System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph);
    static void AddPoint(System::SharedPtr<TtfGlyfTable::PointsCollection> points, int32_t x, int32_t y, uint8_t flags, int32_t& absX, int32_t& absY);
    void AddNewGlyphs(System::SharedPtr<System::Collections::Generic::SortedDictionary<int32_t, System::SharedPtr<Aspose::Font::Glyphs::Glyph>>> glyphs);
    void AddNewGlyphData(System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph, System::ArrayPtr<uint8_t> glyphBytes);
    void ResetGlyphsData();
    System::SharedPtr<Aspose::Font::Sources::StreamSource> GetByteStreamSourceForNewFont();
    bool AdoptedHintingFromEquals(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> hinting1, System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> hinting2);
    
};

DECLARE_ENUM_OPERATORS(Aspose::Font::TtfTables::TtfGlyfTable::OutlineFlagsEnum);
DECLARE_USING_GLOBAL_OPERATORS

DECLARE_ENUM_OPERATORS(Aspose::Font::TtfTables::TtfGlyfTable::ComponentFlagsEnum);
DECLARE_USING_GLOBAL_OPERATORS
} // namespace TtfTables
} // namespace Font
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Font::TtfTables);



