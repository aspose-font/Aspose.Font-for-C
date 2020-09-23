#include "stdafx.h"
#include "GetFontMetrics.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <Aspose.Font.Cpp/src/TtfTables/TtfTableRepository_.h>
#include <Aspose.Font.Cpp/src/TtfTables/TtfGlyfTable.h>
#include <Aspose.Font.Cpp/src/TtfTables/TtfCMapTable.h>
#include <Aspose.Font.Cpp/src/Ttf/TtfFont.h>
#include <Aspose.Font.Cpp/src/Ttf/CMapFormats/TtfCMapFormatBaseTable.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FileSystemStreamSource.h>
#include <Aspose.Font.Cpp/src/IFontMetrics.h>
#include <Aspose.Font.Cpp/src/Glyphs/GlyphUInt32Id.h>
#include <Aspose.Font.Cpp/src/Glyphs/Glyph.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/FontBBox.h>
#include <Aspose.Font.Cpp/src/Font.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::Font::Glyphs;
using namespace Aspose::Font::Sources;
using namespace Aspose::Font::Ttf;
namespace Aspose {

namespace Font {

namespace Examples {

namespace WorkingWithTrueTypeAndOpenTypeFonts {

RTTI_INFO_IMPL_HASH(830833035u, ::Aspose::Font::Examples::WorkingWithTrueTypeAndOpenTypeFonts::GetFontMetrics, ThisTypeBaseTypesInfo);

void GetFontMetrics::Run()
{
    System::String dataDir = RunExamples::GetDataDir_Data();
    
    //ExStart: 1
    System::String fileName = dataDir + u"Montserrat-Regular.ttf";
    //Font file name with full path
    
    System::SharedPtr<FontDefinition> fd = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(u"ttf", System::MakeObject<FileSystemStreamSource>(fileName)));
    System::SharedPtr<TtfFont> font = System::DynamicCast_noexcept<Aspose::Font::Ttf::TtfFont>(Aspose::Font::Font::Open(fd));
    
    System::String name = font->get_FontName();
    System::Console::WriteLine(System::String(u"Font name: ") + name);
    System::Console::WriteLine(System::String(u"Glyph count: ") + font->get_NumGlyphs());
    System::String metrics = System::String::Format(u"Font metrics: ascender - {0}, descender - {1}, typo ascender = {2}, typo descender = {3}, UnitsPerEm = {4}", font->get_Metrics()->get_Ascender(), font->get_Metrics()->get_Descender(), font->get_Metrics()->get_TypoAscender(), font->get_Metrics()->get_TypoDescender(), font->get_Metrics()->get_UnitsPerEM());
    
    System::Console::WriteLine(metrics);
    
    //Get cmap unicode encoding table from font as object TtfCMapFormatBaseTable to access information about font glyph for symbol 'A'.
    //Also check that font has object TtfGlyfTable (table 'glyf') to access glyph.
    System::SharedPtr<Aspose::Font::TtfCMapFormats::TtfCMapFormatBaseTable> cmapTable;
    if (font->get_TtfTables()->get_CMapTable() != nullptr)
    {
        cmapTable = font->get_TtfTables()->get_CMapTable()->FindUnicodeTable();
    }
    if (cmapTable != nullptr && font->get_TtfTables()->get_GlyfTable() != nullptr)
    {
        System::Console::WriteLine(System::String(u"Font cmap unicode table: PlatformID = ") + cmapTable->get_PlatformId() + u", PlatformSpecificID = " + cmapTable->get_PlatformSpecificId());
        
        //Code for 'A' symbol
        char16_t unicode = (char16_t)65;
        
        //Glyph index for 'A'
        uint32_t glIndex = cmapTable->GetGlyphIndex(unicode);
        
        if (glIndex != static_cast<uint32_t>(0))
        {
            //Glyph for 'A'
            System::SharedPtr<Glyph> glyph = font->GetGlyphById(glIndex);
            if (glyph != nullptr)
            {
                //Print glyph metrics
                System::Console::WriteLine(u"Glyph metrics for 'A' symbol:");
                System::String bbox = System::String::Format(System::String(u"Glyph BBox: Xmin = {0}, Xmax = {1}") + u", Ymin = {2}, Ymax = {3}", glyph->get_GlyphBBox()->get_XMin(), glyph->get_GlyphBBox()->get_XMax(), glyph->get_GlyphBBox()->get_YMin(), glyph->get_GlyphBBox()->get_YMax());
                System::Console::WriteLine(bbox);
                System::Console::WriteLine(System::String(u"Width:") + font->get_Metrics()->GetGlyphWidth(System::MakeObject<GlyphUInt32Id>(glIndex)));
            }
        }
    }
    //ExEnd: 1
}

} // namespace WorkingWithTrueTypeAndOpenTypeFonts
} // namespace Examples
} // namespace Font
} // namespace Aspose
