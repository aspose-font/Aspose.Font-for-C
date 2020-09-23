#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/icloneable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Glyphs { class CompositeGlyph; } } }
namespace Aspose { namespace Font { namespace Cff { class CffFont; } } }
namespace Aspose { namespace Font { namespace Cff { namespace RenderingExtension { class CFFRenderingContextBuilder; } } } }
namespace Aspose { namespace Font { namespace Cff { class CffFontMetrics; } } }
namespace Aspose { namespace Font { namespace Cff { namespace PostScriptExtension { class CFFCharStringCommandProcessor; } } } }
namespace Aspose { namespace Font { namespace Renderers { namespace Version0 { class Rasterizer; } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Bytecode { class BytecodeInterpreter; } } } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { namespace Bytecode { class BytecodeRuntimeState; } } } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontParser; } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFont; } } }
namespace Aspose { namespace Font { namespace Ttf { namespace Validation { class TTFFontCorrector; } } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfHheaTable; } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1Font; } } }
namespace Aspose { namespace Font { namespace Type1 { namespace PostScriptExtension { class Type1CharStringCommandProcessor; } } } }
namespace Aspose { namespace Font { namespace Type1 { namespace RenderingExtension { class Type1RenderingContextBuilder; } } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1FontMetrics; } } }
namespace Aspose { namespace Font { namespace Tests { namespace FunctionalTests { class TTF_Common; } } } }
namespace Aspose { namespace Font { namespace Glyphs { enum class GlyphState; } } }
namespace Aspose { namespace Font { namespace RenderingPath { class SegmentPath; } } }
namespace Aspose { namespace Font { class FontBBox; } }
namespace Aspose { namespace Font { namespace Rendering { namespace Hinting { class HintCollections; } } } }
namespace Aspose { namespace Font { namespace RenderingPath { class PathDefinition; } } }
namespace Aspose { namespace Font { class TransformationMatrix; } }
namespace Aspose { namespace Font { namespace Ttf { namespace Internals { class TtfParserContext; } } } }
namespace Aspose { namespace Font { namespace Glyphs { class GlyphId; } } }

namespace Aspose {

namespace Font {

namespace Glyphs {

/// <summary>
/// Represents a Font glyph.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS Glyph : public System::ICloneable
{
    typedef Glyph ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Glyphs::CompositeGlyph;
    friend class Aspose::Font::Cff::CffFont;
    friend class Aspose::Font::Cff::RenderingExtension::CFFRenderingContextBuilder;
    friend class Aspose::Font::Cff::CffFontMetrics;
    friend class Aspose::Font::Cff::PostScriptExtension::CFFCharStringCommandProcessor;
    friend class Aspose::Font::Renderers::Version0::Rasterizer;
    friend class Aspose::Font::Ttf::Internals::Bytecode::BytecodeInterpreter;
    friend class Aspose::Font::Ttf::Internals::Bytecode::BytecodeRuntimeState;
    friend class Aspose::Font::Ttf::TTFFontParser;
    friend class Aspose::Font::Ttf::TtfFont;
    friend class Aspose::Font::Ttf::Validation::TTFFontCorrector;
    friend class Aspose::Font::TtfTables::TtfGlyfTable;
    friend class Aspose::Font::TtfTables::TtfHheaTable;
    friend class Aspose::Font::Type1::Type1Font;
    friend class Aspose::Font::Type1::PostScriptExtension::Type1CharStringCommandProcessor;
    friend class Aspose::Font::Type1::RenderingExtension::Type1RenderingContextBuilder;
    friend class Aspose::Font::Type1::Type1FontMetrics;
    friend class Aspose::Font::Tests::FunctionalTests::TTF_Common;
    
protected:

    class InitialDataContainer : public System::ICloneable
    {
        typedef InitialDataContainer ThisType;
        typedef System::ICloneable BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        static System::SharedPtr<Glyph::InitialDataContainer> Empty;
        
        /// <summary>
        /// Returns font context object
        /// </summary>
        System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> get_TTFParserContext() const;
        /// <summary>
        /// Returns gid
        /// </summary>
        System::SharedPtr<Aspose::Font::Glyphs::GlyphId> get_GlyphId() const;
        /// <summary>
        /// raw glyph bytes
        /// </summary>
        System::ArrayPtr<uint8_t> get_RawGlyphBytes() const;
        
        InitialDataContainer(System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> context, System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId, System::ArrayPtr<uint8_t> rawGlyphBytes);
        
        void SetGlyphId(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> value);
        System::SharedPtr<System::Object> Clone() override;
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::ArrayPtr<uint8_t> _rawGlyphBytes;
        System::SharedPtr<Aspose::Font::Ttf::Internals::TtfParserContext> _context;
        System::SharedPtr<Aspose::Font::Glyphs::GlyphId> _glyphId;
        
    };
    
    
public:

    /// <summary>
    /// Gets glyph state.
    /// </summary>
    ASPOSE_FONT_SHARED_API GlyphState get_State() const;
    /// <summary>
    /// True if the glyph doesn't contain drawing instructions.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_IsEmpty();
    /// <summary>
    /// Gets glyph path.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::RenderingPath::SegmentPath> get_Path();
    /// <summary>
    /// Gets glyph side bearing x coordinate.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_LeftSidebearingX();
    /// <summary>
    /// Gets glyph side bearing y coordinate.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_LeftSidebearingY();
    /// <summary>
    /// Gets glyph width vector. Coordinate x.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_WidthVectorX() const;
    /// <summary>
    /// Gets glyph width vector. Coordinate y.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_WidthVectorY() const;
    /// <summary>
    /// Gets resolution of the source command set.
    /// </summary>
    ASPOSE_FONT_SHARED_API int32_t get_SourceResolution() const;
    /// <summary>
    /// Gets glyph BBox.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<FontBBox> get_GlyphBBox();
    
    /// <summary>
    /// Returns copy of glyph.
    /// </summary>
    /// <returns>Copy of Glyph.</returns>
    ASPOSE_FONT_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    System::SharedPtr<Aspose::Font::RenderingPath::SegmentPath> path;
    System::SharedPtr<Aspose::Font::RenderingPath::PathDefinition> _pathDefinition;
    
    /// <summary>
    /// Gets PathDefinition.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<Aspose::Font::RenderingPath::PathDefinition> get_PathDefinition();
    /// <summary>
    /// Sets PathDefinition.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API void set_PathDefinition(System::SharedPtr<Aspose::Font::RenderingPath::PathDefinition> value);
    /// <summary>
    /// Gets initial glyph data.
    /// </summary>
    System::SharedPtr<Glyph::InitialDataContainer> get_InitialData() const;
    /// <summary>
    /// Sets initial glyph data.
    /// </summary>
    void set_InitialData(System::SharedPtr<Glyph::InitialDataContainer> value);
    /// <summary>
    /// Gets glyph state.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_State(GlyphState value);
    /// <summary>
    /// Gets glyph side bearing x coordinate.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_LeftSidebearingX(double value);
    /// <summary>
    /// Gets glyph side bearing y coordinate.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_LeftSidebearingY(double value);
    /// <summary>
    /// Gets glyph width vector. Coordinate x.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_WidthVectorX(double value);
    /// <summary>
    /// Gets glyph width vector. Coordinate y.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_WidthVectorY(double value);
    /// <summary>
    /// Gets resolution of the source command set.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_SourceResolution(int32_t value);
    /// <summary>
    /// Gets glyph BBox.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_GlyphBBox(System::SharedPtr<FontBBox> value);
    /// <summary>
    /// Collection of all hint collections of the glyph
    /// 
    /// <remarks>
    /// every glyph outline path segment has it's own hing collection
    /// this collection contains a collection of all hint collections that are used by all glyphs of the path 
    /// </remarks>
    /// </summary>
    System::SharedPtr<Aspose::Font::Rendering::Hinting::HintCollections> get_HintCollections() const;
    
    /// <summary>
    /// Initializes new glyph object.
    /// </summary>
    Glyph();
    
    void BuildBBox(System::SharedPtr<FontBBox> bbox);
    /// <summary>
    /// Designed for glyph copy operations. An objective - to be helper as pattern factory
    /// method for method Clone(). Design - method Clone() is need to create correct Glyph object
    /// independently from where this method called - base Glyph class or in descendant classes like
    /// <see cref="CompositeGlyph"></see> - in any case correct object must be instantiated. So, this method
    /// must take care for creation of correct Glyph object. Method Clone() to return correct copy of 
    /// Glyh object will call this method Create(), get new appropriate Glyph object and then 
    /// fill this new object with data from source Glyph object.
    /// </summary>
    /// <returns>Glyph object</returns>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<Glyph> Create();
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    double leftSidebearingX;
    double leftSidebearingY;
    double widthVectorX;
    double widthVectorY;
    int32_t sourceResolution;
    System::SharedPtr<FontBBox> glyphBBox;
    System::SharedPtr<System::Object> initSync;
    System::SharedPtr<System::Object> initSync2;
    System::SharedPtr<System::Object> initSync3;
    System::SharedPtr<Aspose::Font::Rendering::Hinting::HintCollections> hintCollections;
    System::SharedPtr<Glyph::InitialDataContainer> initialDataContainer;
    bool isPathDefinitionConverted;
    System::SharedPtr<System::Object> sync;
    /// <summary>
    /// Glyph state
    /// </summary>
    GlyphState state;
    
    /// <summary>
    /// translates path
    /// adjusts x and y values by the passed dx and dy
    /// </summary>
    void TranslatePath(double dx, double dy);
    /// <summary>
    /// Transforms path with the transformation matrix.
    /// </summary>
    void TransformPath(System::SharedPtr<TransformationMatrix> matrix);
    static void ApplyTransformation(double x, double y, System::SharedPtr<TransformationMatrix> finalTransformationMatrix, double& outX, double& outY);
    
};

} // namespace Glyphs
} // namespace Font
} // namespace Aspose


