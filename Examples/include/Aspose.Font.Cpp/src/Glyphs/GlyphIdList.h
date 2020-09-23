#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/multicast_delegate.h>
#include <system/eventargs.h>
#include <system/collections/list.h>

#include "Aspose.Font.Cpp/src/Glyphs/GlyphId.h"
#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { namespace Cff { class CFFFontSubset; } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFSubsetSaver; } } }
namespace Aspose { namespace Font { namespace Ttf { class TTFFontSubset; } } }
namespace Aspose { namespace Font { namespace TtfTables { class TtfSubsetLocalTable; } } }
namespace Aspose { namespace Font { namespace Type1 { class Type1FontSubset; } } }
namespace Aspose { namespace Font { namespace Glyphs { class IGlyphAddedCallback; } } }
namespace Aspose { namespace Font { namespace Glyphs { class IGlyphRemovedCallback; } } }
namespace Aspose { namespace Font { namespace Glyphs { class IGlyphListClearedCallback; } } }

namespace Aspose {

namespace Font {

namespace Glyphs {

/// <summary>
/// Represents glyph id list.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS GlyphIdList : public System::Collections::Generic::List<System::SharedPtr<Aspose::Font::Glyphs::GlyphId>>
{
    typedef GlyphIdList ThisType;
    typedef System::Collections::Generic::List<System::SharedPtr<Aspose::Font::Glyphs::GlyphId>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Font::Cff::CFFFontSubset;
    friend class Aspose::Font::Ttf::TTFSubsetSaver;
    friend class Aspose::Font::Ttf::TTFFontSubset;
    friend class Aspose::Font::TtfTables::TtfSubsetLocalTable;
    friend class Aspose::Font::Type1::Type1FontSubset;
    
public:

    /// <summary>
    /// Adds glyph id to the list.
    /// </summary>
    /// <param name="glyphId">glyph identifier</param>
    ASPOSE_FONT_SHARED_API void Add(System::SharedPtr<GlyphId> const &glyphId) override;
    /// <summary>
    /// Removes glyph id from the list.
    /// </summary>
    /// <param name="glyphId">glyph identifier</param>
    ASPOSE_FONT_SHARED_API void Remove(System::SharedPtr<GlyphId> glyphId);
    /// <summary>
    /// Clears the list.
    /// </summary>
    ASPOSE_FONT_SHARED_API void Clear() override;
    /// <summary>
    /// Returns true in case glyph id is in the list.
    /// </summary>
    /// <param name="glyphId">glyph identifier</param>
    /// <returns>true in case glyph id is in the list, otherwise false</returns>
    ASPOSE_FONT_SHARED_API bool Contains(System::SharedPtr<GlyphId> const &glyphId) const override;
    
    /// <summary>
    /// Returns glyph id by the index.
    /// </summary>
    /// <param name="index">index of glyph in list</param>
    ASPOSE_FONT_SHARED_API System::SharedPtr<GlyphId> idx_get(int32_t index) const override;
    
protected:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IGlyphAddedCallback>>> GlyphAddedCallbacks;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IGlyphRemovedCallback>>> GlyphRemovedCallbacks;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IGlyphListClearedCallback>>> GlyphListClearedCallbacks;
    
    GlyphIdList();
    
    virtual ASPOSE_FONT_SHARED_API ~GlyphIdList();
    
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    void FireOnAdd(System::SharedPtr<GlyphId> glyphId);
    void FireOnRemove(System::SharedPtr<GlyphId> glyphId);
    void FireOnClear();
    
};

class GlyphIdEventArgs : public System::EventArgs
{
    typedef GlyphIdEventArgs ThisType;
    typedef System::EventArgs BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<Aspose::Font::Glyphs::GlyphId> GlyphId;
    
    GlyphIdEventArgs(System::SharedPtr<Aspose::Font::Glyphs::GlyphId> glyphId);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
};

using GlyphIdEventHandler = System::MulticastDelegate<void(System::SharedPtr<System::Object>, System::SharedPtr<GlyphIdEventArgs>)>;
} // namespace Glyphs
} // namespace Font
} // namespace Aspose


