#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/src/TtfTables/TtfTableBase.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Ttf { class TTFFontSaver; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class TTF_Common; } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfTableRepository; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Parsing { class TTFFileReader; } } } } }

namespace Aspose {

namespace Font {

namespace TtfTables {

/// <summary>
/// Represents "prep" table of the TTF Font file.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS TtfPrepTable : public Aspose::Font::TtfTables::TtfTableBase
{
    typedef TtfPrepTable ThisType;
    typedef Aspose::Font::TtfTables::TtfTableBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Font::Ttf::TTFFontSaver;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::Tests::FunctionalTests::TTF_Common;
    
public:

    /// <summary>
    /// Gets table tag.
    /// </summary>
    static ASPOSE_FONT_SHARED_API System::String get_Tag();
    /// <summary>
    /// Set of instructions.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<uint8_t> get_Program();
    
protected:

    /// <summary>
    /// Table Tag.
    /// </summary>
    static const System::String TAG;
    static const System::String LowerTag;
    System::ArrayPtr<uint8_t> rawBytes;
    
    TtfPrepTable(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfPrepTable, CODEPORTING_ARGS(System::SharedPtr<TtfTableRepository> ttfTables, System::SharedPtr<Aspose::Font::Ttf::TtfFont> font));
    
    TtfPrepTable(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TtfPrepTable, CODEPORTING_ARGS(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, uint32_t checkSum, uint32_t offset, uint32_t length));
    ASPOSE_FONT_SHARED_API void Load(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void LazyLoadImpl(System::SharedPtr<Aspose::Font::Ttf::Internals::Parsing::TTFFileReader> ttfReader) override;
    ASPOSE_FONT_SHARED_API void Save(System::ArrayPtr<uint8_t>& tableBytes, uint32_t& length, uint32_t& checksum) override;
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
};

} // namespace TtfTables
} // namespace Font
} // namespace Aspose


