#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Glyphs { class Glyph; } } }
namespace Aspose { namespace Font { namespace Cff { namespace Internals { class CFFFontDictionary; } } } }
namespace Aspose { namespace Font { namespace Cff { namespace PostScriptExtension { class CFFDictCommandProcessor; } } } }
namespace Aspose { namespace Font { namespace Ttf { class TtfFontMetrics; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfGlyfTable; } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1FontMetrics; } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1FontParser; } } }

namespace Aspose {

namespace Font {

/// <summary>
/// Represents Font bounding box (BBox).
/// </summary>
class ASPOSE_FONT_SHARED_CLASS FontBBox : public System::Object
{
    typedef FontBBox ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Glyphs::Glyph;
    friend class Aspose::Font::Cff::Internals::CFFFontDictionary;
    friend class Aspose::Font::Cff::PostScriptExtension::CFFDictCommandProcessor;
    friend class Aspose::Font::Ttf::TtfFontMetrics;
    friend class Aspose::Font::TtfTables::TtfGlyfTable;
    friend class Aspose::Font::Type1::Type1FontMetrics;
    friend class Aspose::Font::Type1::Type1FontParser;
    
public:

    /// <summary>
    /// Gets XMin value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_XMin() const;
    /// <summary>
    /// Gets YMin value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_YMin() const;
    /// <summary>
    /// Gets XMax value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_XMax() const;
    /// <summary>
    /// Gets YMax value.
    /// </summary>
    ASPOSE_FONT_SHARED_API double get_YMax() const;
    
protected:

    /// <summary>
    /// Initializes new <see cref="FontBBox"></see> object.
    /// </summary>
    FontBBox();
    /// <summary>
    /// Initializes new <see cref="FontBBox"></see> object.
    /// </summary>
    /// <param name="xMin">xMin value</param>
    /// <param name="yMin">yMin value</param>
    /// <param name="xMax">xMax value</param>
    /// <param name="yMax">yMax value</param>
    FontBBox(double xMin, double yMin, double xMax, double yMax);
    
    void SetXMin(double value);
    void SetYMin(double value);
    void SetXMax(double value);
    void SetYMax(double value);
    
private:

    /// <summary>
    /// XMin value.
    /// </summary>
    double _xMin;
    /// <summary>
    /// YMin value.
    /// </summary>
    double _yMin;
    /// <summary>
    /// XMax value.
    /// </summary>
    double _xMax;
    /// <summary>
    /// YMax value.
    /// </summary>
    double _yMax;
    
};

} // namespace Font
} // namespace Aspose


