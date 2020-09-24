# C++ API for Font Processing Formats

[Aspose.Font for C++](https://products.aspose.com/font/cpp) is a C++ API for working with font files. The API is easy to use and lets you develop C++ fonts processing applications without worrying about the underlying file format. The API supports multiple font formats such as TrueType, CFF, OpenType, and Type1. It also has the functionality to provide the encoding information for all font types. You can use it to render any desired glyph with the help of interface using simple graphics functionality (move point, draw line, curve).

<p align="center">

  <a title="Download complete Aspose.Font for C++ source code" href="https://github.com/aspose-font/Aspose.font-for-c/archive/master.zip">
	<img src="https://raw.github.com/AsposeExamples/java-examples-dashboard/master/images/downloadZip-Button-Large.png" />
  </a>
</p>

This repository contain [Examples](Examples) projects for [Aspose.Font for C++](https://products.aspose.com/font/cpp/) to help you learn and write your own applications.

Directory | Description
--------- | -----------
[Examples](Examples)  | A collection of C++ examples that help you learn the product features


## Font Processing via C++

- [Load font files from disc](https://docs.aspose.com/font/cpp/loading-saving-cff-fonts/) as well as stream.
- Read font information and save updated font files to disc.
- Support for [*TrueType* and *OpenType*](https://docs.aspose.com/font/cpp/working-with-truetype-and-opentype-fonts/) Fonts.
- Work with [CFF](https://docs.aspose.com/font/cpp/working-with-cff-fonts/) & [Type1 fonts](https://docs.aspose.com/font/cpp/working-with-type1-fonts/) in your C++ Apps.
- Read Glyphs and Metrics information from Font files.
- Detect Latin Symbols in Fonts.
- Extract embedded licensing information from font files.
- Render text using font Glyphs.

## Read & Write Font Formats

TTF

## Read Font Formats

TTC, OpenType, CFF, Type1

## Supported Platforms

Aspose.Font for C++ is a native library. It supports `32-bit` as well as `64-bit` operating systems. Also, you can use Aspose.Font for C++ to develop applications in any development environment that supports C++, but the listed environments are explicitly supported.

**Microsoft Windows:** Microsoft Windows desktop (XP, Vista, 7, 8, 10) and server operating systems (2003, 2008, 2012), etc.
**Development Environments:** Microsoft Visual C++ version 2017 or higher.

## Get Started with Aspose.Font for C++

Are you ready to give Aspose.Font for C++ a try? Simply execute `Install-Package Aspose.Font.Cpp` from Package Manager Console in Visual Studio to fetch the NuGet package. If you already have Aspose.Font for C++ and want to upgrade the version, please execute `Update-Package Aspose.Font.Cpp` to get the latest version.

## Check Latin Symbols Support in the Font using C++ Code

```c++
System::String fileName = dataDir + u"Montserrat-Regular.ttf";
//Font file name with full path

System::SharedPtr<FontDefinition> fd = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(u"ttf", System::MakeObject<FileSystemStreamSource>(fileName)));
System::SharedPtr<TtfFont> ttfFont = System::DynamicCast_noexcept<Aspose::Font::Ttf::TtfFont>(Aspose::Font::Font::Open(fd));

bool latinText = true;


for (uint32_t code = 65; code < static_cast<uint32_t>(123); code++)
{
    System::SharedPtr<GlyphId> gid = ttfFont->get_Encoding()->DecodeToGid(code);
    if (gid == nullptr || gid == System::StaticCast<System::Object>(GlyphUInt32Id::get_NotDefId()))
    {
        latinText = false;
    }
}

if (latinText)
{
    System::Console::WriteLine(System::String::Format(u"Font {0} supports latin symbols.", ttfFont->get_FontName()));
}
else
{
    System::Console::WriteLine(System::String::Format(u"Latin symbols are not supported by font {0}.", ttfFont->get_FontName()));
}
```

[Home](https://www.aspose.com/) | [Product Page](https://products.aspose.com/font/cpp) | [Docs](https://docs.aspose.com/font/cpp/) | [API Reference](https://apireference.aspose.com/font/cpp) | [Examples](https://github.com/aspose-font/Aspose.Font-for-C/tree/master/Examples) | [Blog](https://blog.aspose.com/category/font/) | [Free Support](https://forum.aspose.com/c/font) | [Temporary License](https://purchase.aspose.com/temporary-license)

