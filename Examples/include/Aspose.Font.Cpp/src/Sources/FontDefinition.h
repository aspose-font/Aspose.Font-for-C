#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose { namespace Font { enum class FontType; } }
namespace Aspose { namespace Font { namespace Sources { class FontFileDefinition; } } }
namespace Aspose { namespace Font { class MultiLanguageString; } }
namespace Aspose { namespace Font { namespace Sources { class StreamSource; } } }

namespace Aspose {

namespace Font {

namespace Sources {

/// <summary>
/// Represents Font file set definition. 
/// This class contains fields which are not related to font internal data.
/// These fields describe font placement and another data needed to load font from
/// some font source(file, memory, etc).
/// </summary>
class ASPOSE_FONT_SHARED_CLASS FontDefinition : public System::Object
{
    typedef FontDefinition ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns Font name.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API System::String get_FontName();
    /// <summary>
    /// Gets Font names as a <see cref="MultiLanguageString"></see>.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API System::SharedPtr<MultiLanguageString> get_FontNames();
    /// <summary>
    /// Gets postscript Font name.
    /// </summary>
    virtual ASPOSE_FONT_SHARED_API System::String get_PostscriptName();
    /// <summary>
    /// Gets postscript Font names as a <see cref="MultiLanguageString"></see>.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::SharedPtr<MultiLanguageString> get_PostscriptNames() const;
    /// <summary>
    /// Gets Font type.
    /// </summary>
    ASPOSE_FONT_SHARED_API Aspose::Font::FontType get_FontType() const;
    /// <summary>
    /// Gets file definitions collection.
    /// </summary>
    ASPOSE_FONT_SHARED_API System::ArrayPtr<System::SharedPtr<FontFileDefinition>> get_FileDefinitions() const;
    
    /// <summary>
    /// Returns FontDefinition for font file and font type.
    /// </summary>
    /// <param name="fileName">Font file name.</param>
    /// <param name="fontType">Font type.</param>
    /// <returns>FontDefinition.</returns>
    static ASPOSE_FONT_SHARED_API System::SharedPtr<FontDefinition> Open(System::String fileName, Aspose::Font::FontType fontType);
    /// <summary>
    /// Returns FontDefinition for font stream source and font type.
    /// </summary>
    /// <param name="source">Font stream source.</param>
    /// <param name="fontType">Font type.</param>
    /// <returns>FontDefinition.</returns>
    static ASPOSE_FONT_SHARED_API System::SharedPtr<FontDefinition> Open(System::SharedPtr<StreamSource> source, Aspose::Font::FontType fontType);
    
    /// <summary>
    /// Creates single-file Font definition.
    /// </summary>
    /// <param name="fontType">Font type.</param>
    /// <param name="fileExtension">Font file extension.</param>
    /// <param name="streamSource">Font stream source.</param>
    ASPOSE_FONT_SHARED_API FontDefinition(Aspose::Font::FontType fontType, System::String fileExtension, System::SharedPtr<StreamSource> streamSource);
    /// <summary>
    /// Creates single-file Font definition.
    /// </summary>
    /// <param name="fontType">Font type.</param>
    /// <param name="streamSource">Font stream source.</param>
    ASPOSE_FONT_SHARED_API FontDefinition(Aspose::Font::FontType fontType, System::SharedPtr<StreamSource> streamSource);
    /// <summary>
    /// Creates single-file Font definition.
    /// </summary>
    /// <param name="fontName">Font name.</param>
    /// <param name="fontType">Font type.</param>
    /// <param name="fileExtension">Font file extension.</param>
    /// <param name="streamSource">Font stream source.</param>
    ASPOSE_FONT_SHARED_API FontDefinition(System::String fontName, Aspose::Font::FontType fontType, System::String fileExtension, System::SharedPtr<StreamSource> streamSource);
    /// <summary>
    /// Creates single-file Font definition.
    /// </summary>
    /// <param name="fontType">Font type.</param>
    /// <param name="fileDefinition">FontFileDefinition.</param>
    ASPOSE_FONT_SHARED_API FontDefinition(Aspose::Font::FontType fontType, System::SharedPtr<FontFileDefinition> fileDefinition);
    /// <summary>
    /// Creates single-file Font definition.
    /// </summary>
    /// <param name="fontName">Font name.</param>
    /// <param name="fontType">Font type.</param>
    /// <param name="fileDefinition">FontFileDefinition.</param>
    ASPOSE_FONT_SHARED_API FontDefinition(System::String fontName, Aspose::Font::FontType fontType, System::SharedPtr<FontFileDefinition> fileDefinition);
    /// <summary>
    /// Creates single-file Font definition.
    /// </summary>
    /// <param name="fontName">Font name.</param>
    /// <param name="postscriptName">Postscript Font name.</param>
    /// <param name="fontType">Font type.</param>
    /// <param name="fileDefinition">FontFileDefinition.</param>
    ASPOSE_FONT_SHARED_API FontDefinition(System::String fontName, System::String postscriptName, Aspose::Font::FontType fontType, System::SharedPtr<FontFileDefinition> fileDefinition);
    /// <summary>
    /// Creates multi-file Font definition.
    /// </summary>
    /// <param name="fontType">Font type.</param>
    /// <param name="fileDefinitions">Array of FontFileDefinition objects.</param>
    ASPOSE_FONT_SHARED_API FontDefinition(Aspose::Font::FontType fontType, System::ArrayPtr<System::SharedPtr<FontFileDefinition>> fileDefinitions);
    /// <summary>
    /// Creates multi-file Font definition.
    /// </summary>
    /// <param name="fontName">Font name.</param>
    /// <param name="postscriptName">Postscript Font name.</param>
    /// <param name="fontType">Font type.</param>
    /// <param name="fileDefinitions">Array of FontFileDefinition objects.</param>
    ASPOSE_FONT_SHARED_API FontDefinition(System::String fontName, System::String postscriptName, Aspose::Font::FontType fontType, System::ArrayPtr<System::SharedPtr<FontFileDefinition>> fileDefinitions);
    /// <summary>
    /// Creates multi-file Font definition.
    /// </summary>
    /// <param name="fontNames">Font names.</param>
    /// <param name="postscriptNames">Postscript Font names.</param>
    /// <param name="fontType">Font type.</param>
    /// <param name="fileDefinition">FontFileDefinition.</param>
    ASPOSE_FONT_SHARED_API FontDefinition(System::SharedPtr<MultiLanguageString> fontNames, System::SharedPtr<MultiLanguageString> postscriptNames, Aspose::Font::FontType fontType, System::SharedPtr<FontFileDefinition> fileDefinition);
    /// <summary>
    /// Creates multi-file Font definition.
    /// </summary>
    /// <param name="fontNames">Font names.</param>
    /// <param name="postscriptNames">Postscript Font names.</param>
    /// <param name="fontType">Font type.</param>
    /// <param name="fileDefinitions">Array of FontFileDefinition objects.</param>
    ASPOSE_FONT_SHARED_API FontDefinition(System::SharedPtr<MultiLanguageString> fontNames, System::SharedPtr<MultiLanguageString> postscriptNames, Aspose::Font::FontType fontType, System::ArrayPtr<System::SharedPtr<FontFileDefinition>> fileDefinitions);
    
protected:

    Aspose::Font::FontType fontType;
    System::ArrayPtr<System::SharedPtr<FontFileDefinition>> fileDefinitions;
    System::SharedPtr<MultiLanguageString> fontNames;
    System::SharedPtr<MultiLanguageString> psNames;
    System::String fontName;
    System::String psName;
    
    /// <summary>
    /// Empty constructor can be used by inheritors only
    /// </summary>
    FontDefinition();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontDefinition, CODEPORTING_ARGS());
    ASPOSE_FONT_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
};

} // namespace Sources
} // namespace Font
} // namespace Aspose


