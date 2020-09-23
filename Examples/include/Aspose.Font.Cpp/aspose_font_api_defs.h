#pragma once

#ifndef ASPOSE_FONT_SHARED_LIBRARY
#define ASPOSE_FONT_SHARED_LIBRARY true
#endif

#if ASPOSE_FONT_SHARED_LIBRARY && !defined(ASPOSE_FONT_UNIT_TEST)

    #if defined(_MSC_VER)

        #if defined(ASPOSE_FONT_SHARED_EXPORTS)
            #define ASPOSE_FONT_SHARED_API __declspec(dllexport)
        #else
            #define ASPOSE_FONT_SHARED_API __declspec(dllimport)
        #endif

        #define ASPOSE_FONT_LOCAL_API
        #define ASPOSE_FONT_SHARED_CLASS
        #define ASPOSE_FONT_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL_EX(ASPOSE_FONT_SHARED_API)

    #elif defined(__GNUC__)

        #if defined(ASPOSE_FONT_SHARED_EXPORTS)
            #define ASPOSE_FONT_SHARED_API __attribute__((visibility("default")))
            #define ASPOSE_FONT_LOCAL_API __attribute__((visibility("hidden")))
            #define ASPOSE_FONT_SHARED_CLASS __attribute__((visibility("default")))
            #define ASPOSE_FONT_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL_EX(ASPOSE_FONT_SHARED_API)
        #else
            #define ASPOSE_FONT_SHARED_API
            #define ASPOSE_FONT_SHARED_CLASS
            #define ASPOSE_FONT_LOCAL_API
            #define ASPOSE_FONT_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
        #endif

    #else
        #define ASPOSE_FONT_LOCAL_API
        #define ASPOSE_FONT_SHARED_CLASS
        #define ASPOSE_FONT_SHARED_API
        #define ASPOSE_FONT_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
    #endif

#else
    #define ASPOSE_FONT_LOCAL_API
    #define ASPOSE_FONT_SHARED_CLASS
    #define ASPOSE_FONT_SHARED_API
    #define ASPOSE_FONT_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
#endif
