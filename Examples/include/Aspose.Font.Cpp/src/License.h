#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.
// RK: When EMBEDDED is defined, the licensing code is not included in the component.
// This results in a built that can be embedded in another Aspose component.
// When a component is embedded in another Aspose component, they must be 
// obfuscated into a single assembly so the embedded component is not publicly accessible.

// C# preprocessor directive: #if !EMBEDDED

//27/10/2004 by Roman Korchagin
//This file contains all client side licensing for the new Aspose licensing system released in 2004.
//Just include this file in your component and follow instructions and examples how to use it.
// NOTE The code in this file was manually tuned so some crucial functions fail 
// to decompile in Reflector as of 5/11/05. 
// Latest anti-hack changed by Aspose.Cells team have been merged as of 20/02/17
//Aspose.Words specific? 
//using Aspose.Collections.Generic;
//using Aspose.JavaAttributes;
// To compile licensing for your product, make sure your product is mentioned here and add a conditional 
// compilation constant to your project properties (both to Debug and Release configurations).

// C# preprocessor directive: #if ASPOSE_WORDS

// C# INACTIVE CODE:
// namespace Aspose.Words

// C# preprocessor directive: #elif ASPOSE_WORDS_REPORTING_SERVICES

// C# INACTIVE CODE:
// namespace Aspose.Words.ReportingServices

// C# preprocessor directive: #elif ASPOSE_WORDS_SHAREPOINT

// C# INACTIVE CODE:
// namespace Aspose.Words.SharePoint

// C# preprocessor directive: #elif ASPOSE_CELLS

// C# INACTIVE CODE:
// namespace Aspose.Cells

// C# preprocessor directive: #elif ASPOSE_SLIDES

// C# INACTIVE CODE:
// namespace Aspose.Slides

// C# preprocessor directive: #elif ASPOSE_TASKS

// C# INACTIVE CODE:
// namespace Aspose.Tasks

// C# preprocessor directive: #elif ASPOSE_PDF

// C# INACTIVE CODE:
// namespace Aspose.Pdf

// C# preprocessor directive: #elif ASPOSE_PDF_FORM

// C# INACTIVE CODE:
// namespace Aspose.Pdf.Form

// C# preprocessor directive: #elif ASPOSE_PDF_KIT

// C# INACTIVE CODE:
// namespace Aspose.Pdf.Kit

// C# preprocessor directive: #elif ASPOSE_PDF_FO

// C# INACTIVE CODE:
// namespace Aspose.Pdf.Fo

// C# preprocessor directive: #elif ASPOSE_CHART

// C# INACTIVE CODE:
// namespace Aspose.Chart

// C# preprocessor directive: #elif ASPOSE_SPELL

// C# INACTIVE CODE:
// namespace Aspose.Spell

// C# preprocessor directive: #elif ASPOSE_EMAIL

// C# INACTIVE CODE:
// namespace Aspose.Email

// C# preprocessor directive: #elif ASPOSE_MIME

// C# INACTIVE CODE:
// namespace Aspose.Mime

// C# preprocessor directive: #elif ASPOSE_ADHOC

// C# INACTIVE CODE:
// namespace Aspose.AdHoc

// C# preprocessor directive: #elif ASPOSE_ASPXPAND

// C# INACTIVE CODE:
// namespace Aspose.ASPXPand

// C# preprocessor directive: #elif ASPOSE_GRID

// C# INACTIVE CODE:
// namespace Aspose.Grid

// C# preprocessor directive: #elif ASPOSE_BARCODE

// C# INACTIVE CODE:
// namespace Aspose.BarCode

// C# preprocessor directive: #elif ASPOSE_RECURRENCE

// C# INACTIVE CODE:
// namespace Aspose.Recurrence

// C# preprocessor directive: #elif ASPOSE_ICALENDAR

// C# INACTIVE CODE:
// namespace Aspose.iCalendar

// C# preprocessor directive: #elif ASPOSE_RECOGNITION

// C# INACTIVE CODE:
// namespace Aspose.Recognition

// C# preprocessor directive: #elif ASPOSE_FONT


#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "Aspose.Font.Cpp/aspose_font_api_defs.h"

namespace Aspose {

namespace Font {

/// <summary>
/// Specifies the edition type of the license.
/// </summary>
enum class EditionType
{
    Professional,
    Enterprise
};

/// <summary>
/// Represents possible license states.
/// </summary>
enum class LicenseState
{
    /// <summary>
    /// The license is Evaluation
    /// </summary>
    Evaluation,
    /// <summary>
    /// The license is a proper valid license.
    /// </summary>
    Licensed
};


// C# preprocessor directive: #endif


// C# preprocessor directive: #if !XAMARIN || NETSTANDARD


// C# preprocessor directive: #endif


// C# preprocessor directive: #if ASPOSE_WORDS_SHAREPOINT


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

/// <summary>
/// Provides methods to license the component.
/// </summary>
class ASPOSE_FONT_SHARED_CLASS License : public System::Object
{
    typedef License ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_FONT_SHARED_RTTI_INFO_DECL();
    
public:

    /// @deprecated
    /// <summary>
    /// License number was added as embedded resource.
    /// </summary>
    ASPOSE_FONT_SHARED_API bool get_Embedded() const;
    /// @deprecated
    /// <summary>
    /// License number was added as embedded resource.
    /// </summary>
    ASPOSE_FONT_SHARED_API void set_Embedded(bool value);
    
    /// <summary>
    /// Initializes a new instance of this class.
    /// </summary>
    ASPOSE_FONT_SHARED_API License();
    
    /// <summary>
    /// Licenses the component.
    /// </summary>
    /// <remarks>
    /// <p>Tries to find the license in the following locations:</p>
    /// <p>1. Explicit path.</p>
    /// 
    /// <ms>
    /// <p>2. The folder that contains the Aspose component assembly.</p>
    /// <p>3. The folder that contains the client's calling assembly.</p>
    /// <p>4. The folder that contains the entry (startup) assembly.</p>
    /// <p>5. An embedded resource in the client's calling assembly.</p>
    /// 
    /// <p><b>Note:</b>On the .NET Compact Framework, tries to find the license only in these locations:</p>
    /// <p>1. Explicit path.</p>
    /// <p>2. An embedded resource in the client's calling assembly.</p>
    /// </ms>
    /// 
    /// <java>
    /// <p>2. The folder that contains the Aspose component JAR file.</p>
    /// <p>3. The folder that contains the client's calling JAR file.</p>
    /// </java>
    /// 
    /// </remarks>
    /// <param name="licenseName">Can be a full or short file name<ms> or name of an embedded resource</ms>.
    /// Use an empty string to switch to evaluation mode.</param>
    ASPOSE_FONT_SHARED_API void SetLicense(System::String licenseName);
    /// <summary>
    /// Licenses the component.
    /// </summary>
    /// <param name="stream">A stream that contains the license.</param>
    /// <remarks>
    /// <p>Use this method to load a license from a stream.</p>
    /// </remarks>
    /// <javaName>void setLicense(java.io.InputStream stream)</javaName>
    ASPOSE_FONT_SHARED_API void SetLicense(System::SharedPtr<System::IO::Stream> stream);
    
private:

    bool mEmbedded;
    
};


// C# preprocessor directive: #if !CPLUSPLUS

// C# INACTIVE CODE:
// /// <summary>
//     /// The actual code of the license class is put into an internal class and made into long functions to
//     /// make it harder for the crackers to find anything meaningful after the dlls were cracked in November 2005.
//     /// The obfuscation virtualization is also applied using custom attribute.
//     /// </summary>

// C# preprocessor directive: #if !XAMARIN || NETSTANDARD

// C# INACTIVE CODE:
// [Obfuscation(Feature = "Apply to member * when method or constructor: virtualization", Exclude = false)]

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// internal class LicenseCore
//     {
//         private bool embedded = false;
// 
// 
//         internal void SetLicenseCore(string licenseName, Assembly clientAssembly, bool embedded)
//         {
//             this.embedded = embedded;
//             SetLicenseCore(licenseName, clientAssembly);
//         }
// 
//         internal void SetLicenseCore(string licenseName, Assembly clientAssembly)
//         {
//             if (licenseName.Length != 0)
//             {
//                 using (Stream stream = ProbeLicense(licenseName, clientAssembly, embedded))
//                     SetLicenseCore(stream);
//             }
//             else
//             {
//                 //Switch to evaluation, useful for unit testing.
//                 gLicense = this;
//             }
//         }
// 
//         internal static void ClearLicense()
//         {
//             gLicense = null;
//         }
// 
//         /*********+++ Aspose.PDF ****************/
//         private static Stream GetEmbeddedLicense(string licenseName, Assembly callingAssembly)
//         {
//             Stream stream;
//             //Try to find the license in the client's assembly embedded resources.
//             stream = GetResourceByPartialName(callingAssembly, licenseName);
//             if (stream != null)
//                 return stream;
//             //Fix for PDFNET-23909 - Unable to use license file as an embedded resource
//             stream = GetResourceByPartialName(callingAssembly, callingAssembly.GetName().Name + "." + licenseName);
//             if (stream != null)
//                 return stream;
// 
//             return null;
//         }
//         /****** END of Aspose.PDF changes *****/
// 
//         [Obfuscation(Feature = "inline", Exclude = false)]
//         internal void SetLicenseCore(Stream stream)
//         {

// C# preprocessor directive: #if UNIT_TEST

// C# INACTIVE CODE:
// /*********+++ Aspose.PDF ****************/
//                 //This line added to avoid "invalid license signature" after license reinitializing
//                 VerificationSupervisor.Clear();
//                 /****** END of Aspose.PDF changes *****/

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// if (stream == null)
//                 throw new ArgumentNullException("stream");
// 
//             bool isSignatureValid = true;
// 
//             // Load the license.
//             if (!LoadLicense(stream))
//             {
//                 /*********+++ Aspose.PDF ****************/
//                 isSignatureValid = false;

// C# preprocessor directive: #if !UNIT_TEST

// C# INACTIVE CODE:
// //for unit test, we need to check that black listed licence are rejected by black list check. since we don't have original blacklisted license
//                 //I created license file with blacklisted number from corerct license (but in fact its signature is broken and file will be rejected by broken signature before black list check.
//                 //thats why for unit testing only, signature check was moved after black list check.
//                 throw new InvalidOperationException("Invalid license signature. Please make sure the license file was not modified.");

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// /****** END of Aspose.PDF changes *****/
//             }
// 
//             // Check the license is not blacklisted, but do it in a thread safe manner. If other threads init the license
//             // at the same time this will result in loading black list multiple times, it is okay, but should not crash.
//             HashSetGeneric<string> asposeBlackList = gAsposeBlackListCache;
//             if (asposeBlackList == null)
//             {
//                 asposeBlackList = LoadBlackList("Aspose.License.BlackList", null);
//                 gAsposeBlackListCache = asposeBlackList;
//             }
// 
//             HashSetGeneric<string> conholdateBlackList = gConholdateBlackListCache;
//             if (conholdateBlackList == null)
//             {
//                 conholdateBlackList = LoadBlackList("Conholdate.License.BlackList", KeyModulusStringRsa1024Conholdate);
//                 gConholdateBlackListCache = conholdateBlackList;
//             }
// 
//             /*********+++ Aspose.PDF ****************/
//             // see previous comment.

// C# preprocessor directive: #if !UNIT_TEST

// C# INACTIVE CODE:
// // FIX 2718 and 17483. We must throw in case of invalid signature.
//             if (VerificationSupervisor.SignatureInvalidFlag > 0)
//                 throw new InvalidOperationException("Invalid license signature. Please make sure the license file was not modified.");

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// /****** END of Aspose.PDF changes *****/
// 
//             if (asposeBlackList.Contains(mSerialNumber) || conholdateBlackList.Contains(mSerialNumber))
//                 throw new InvalidOperationException("This license is disabled, please contact Aspose to obtain a new license.");
// 
//             // Checks that one of the product names specified in the license matches this product.
//             // Throws if the license is unsuitable.
//             bool isProductValid = false;
//             foreach (string licensedProductName in mProducts)
//             {
//                 // Check maybe it is an Aspose.Total license.
// 
//                 // This is the most common case, matches an Aspose.Total for XXX license.
//                 if (licensedProductName.Equals("Aspose.Total for " + AssemblyConstants.Platform) ||
//                     licensedProductName.Equals("Conholdate.Total for " + AssemblyConstants.Platform))
//                 {
//                     isProductValid = true;
//                     break;
//                 }
//                 // This is the older style license for .NET only. The name in the license does not have ".NET" at the end. It is okay.
//                 // Do not change this code when ported to other platforms because it should NEVER be true on other platforms.
//                 if ((licensedProductName.Equals("Aspose.Total") || licensedProductName.Equals("Conholdate.Total")) && AssemblyConstants.Platform.Equals(".NET"))
//                 {
//                     isProductValid = true;
//                     break;
//                 }
//                 // This is the All Products x All Platforms and we must allow this.
//                 if (licensedProductName.Equals("Aspose.Total Product Family") || licensedProductName.Equals("Conholdate.Total Product Family"))
//                 {
//                     isProductValid = true;
//                     break;
//                 }
// 
// 
//                 // Check maybe it is an individual product license.
// 
//                 // The most common case.
//                 if (licensedProductName.ToUpper().Equals(AssemblyConstants.Product.ToUpper()))
//                 {
//                     isProductValid = true;
//                     break;
//                 }
// 
//                 // Xamarin dlls are included into .NET package, so old Xamarin licenses should work with .NET versions.
//                 // The code below should be removed after 18.12 release. All Xamarin licenses will expire to this date.
//                 if (AssemblyConstants.Platform.Equals(".NET"))
//                 {
//                     //*******+++ Aspose.PDF changes **********/
//                     //This is not applicable for Aspose.PDF that's why following lines are commented.
//                     /*
//                     // Aspose.Words for Xamarin.Android was renamed with Aspose.Words for Android via Xamarin.
//                     // Both licenses should be treated as valid. This code handles old style name.
//                     string oldXandProduct = AssemblyConstants.Family + " for " + "Xamarin.Android";
//                     string oldXandTotal = "Aspose.Total for Xamarin.Android";
// 
//                     string xandProduct = AssemblyConstants.Family + " for " + "Android via Xamarin";
//                     string xandTotal = "Aspose.Total for Android via Xamarin";
// 
//                     string xiosProduct = AssemblyConstants.Family + " for " + "iOS via Xamarin";
//                     string xiosTotal = "Aspose.Total for iOS via Xamarin";
// 
//                     string xmacProduct = AssemblyConstants.Family + " for " + "Mac via Xamarin";
//                     string xmacTotal = "Aspose.Total for Mac via Xamarin";
// 
//                     if (licensedProductName.Equals(oldXandProduct) || licensedProductName.Equals(oldXandTotal) ||
//                         licensedProductName.Equals(xandProduct) || licensedProductName.Equals(xandTotal) ||
//                         licensedProductName.Equals(xiosProduct) || licensedProductName.Equals(xiosTotal) ||
//                         licensedProductName.Equals(xmacProduct) || licensedProductName.Equals(xmacTotal))
//                     {
//                         isProductValid = true;
//                         break;
//                     }
//                     */
//                     /************ END of Aspose.PDF Changes *****************/
//                 }
// 
//                 // Aspose.Words for Android was renamed with Aspose.Words for Java.Android.
//                 // Both licenses should be treated as valid. This code handles old style name.
//                 if (AssemblyConstants.Platform.Equals("Java.Android"))
//                 {
//                     string oldAndroidProduct = AssemblyConstants.Family + " for " + "Android";
//                     string oldAndroidTotal = "Aspose.Total for Android";
//                     if (licensedProductName.Equals(oldAndroidProduct) || licensedProductName.Equals(oldAndroidTotal))
//                     {
//                         isProductValid = true;
//                         break;
//                     }
//                 }
// 
//                 // This is the older style license for .NET only. The name in the license does not have ".NET" at the end. It is okay.
//                 // Do not change this code when ported to other platforms because it should NEVER be true on other platforms.
//                 if (licensedProductName.Equals(AssemblyConstants.Family) && AssemblyConstants.Platform.Equals(".NET"))
//                 {
//                     isProductValid = true;
//                     break;
//                 }
//                 // This is a license for the product family.
//                 //PDFNET-47381 License file reports System.InvalidOperationException: The license is not valid for this product
//                 //we need accept both Aspose.PDF and Aspose.Pdf licenses.
//                 if (licensedProductName.ToUpper().Equals((AssemblyConstants.Family + " Product Family").ToUpper()))
//                 {
//                     isProductValid = true;
//                     break;
//                 }
//             }
// 
//             if (!isProductValid)
//                 throw new InvalidOperationException("The license is not valid for this product.");
// 
// 
//             // Checks that subscription limit is not exceeded for this release and throws if needed.
//             DateTime releaseDate = DateTime.ParseExact(AssemblyConstants.ReleaseDate, "yyyy.MM.dd", CultureInfo.InvariantCulture);
//             if (releaseDate > mSubscriptionExpiry)
//                 throw new InvalidOperationException(string.Format(
//                     "The subscription included in this license allows free upgrades until {0}, " +
//                     "but this version of the product was released on {1}. " +
//                     "Please renew the subscription or use a previous version of the product.",
//                     mSubscriptionExpiry.ToString("dd MMM yyyy", CultureInfo.InvariantCulture),
//                     releaseDate.ToString("dd MMM yyyy", CultureInfo.InvariantCulture)));
// 
// 
//             // Check license expiry date
//             if (DateTime.Now > mLicenseExpiry)
//                 throw new InvalidOperationException("The license has expired.");
// 
//             //*******+++ Aspose.PDF changes **********/
//             //additional check for invalid signature. This is required because for Unit tests this check should be made later then black list check.
//             //Please see explanation above.
//             // FIX 2718 and 17483. We must throw in case of invalid signature.
//             if (VerificationSupervisor.SignatureInvalidFlag > 0)
//                 throw new InvalidOperationException("Invalid license signature. Please make sure the license file was not modified.");
//             if (!isSignatureValid)
//                 throw new InvalidOperationException("Invalid license signature. Please make sure the license file was not modified.");
//             /************ END of Aspose.PDF Changes *****************/
// 
// 
//             // Mark the license as valid.
//             mLicenseState = LicenseState.Licensed;
// 
//             // Make the license global.
//             gLicense = this;
//         }
// 
// 
//         /// <summary>
//         /// Call this from your component code to check if running evaluation version or not.
//         /// </summary>
//         /// <example>
//         /// <code>
//         ///    if (Aspose.Words.LicenseCore.GetLicenseState_ForInternalUse() == LicenseState.Evaluation)
//         ///        InjectWatermark();
//         ///    </code>
//         /// </example>
//         internal static LicenseState GetLicenseState_ForInternalUse()
//         {
//             // It is evaluation if the license is missing or its state is "evaluation" or
//             // the verification superviser says that some hackers have cut out signature
//             // verification method(s).
//             bool isLocalEval =
//                 (gLicense == null) ||
//                 (gLicense.mLicenseState == LicenseState.Evaluation) ||
//                 (gLicense.mLicenseExpiry < DateTime.Now) ||
//                 (VerificationSupervisor.EnsureIfAllMethodsInvoked() == 0x1000);

// C# preprocessor directive: #if !CPLUSPLUS

// C# INACTIVE CODE:
// // We integrate with Dynabic.Metering code to check if a metered usage license was set as an alternative to the normal license.
//             //bool isMeteredEval = (MeteredBillingService.GetMeteredState() == MeteredState.Evaluation);
//             bool isMeteredEval = true;

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// bool isMeteredEval = true;

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// // Returning an enum, not a bool, to make hacking a little harder.
//             LicenseState result = (isLocalEval && isMeteredEval) ? LicenseState.Evaluation : LicenseState.Licensed;
// 
//             if ((result == LicenseState.Licensed) && (gLicense != null) &&
//                 (gLicense.mSubscriptionExpiry.Year >= 2099) && (DateTime.Now.Ticks % 10 == 3))
//                 result = LicenseState.Evaluation;
// 
//             return result;
//         }
// 
//         /// <summary>
//         /// This method has to be exactly the same as <see cref="GetLicenseState_ForInternalUse"/>.
//         /// It is created (and duplicated) to make hacking of Aspose licensing a little more difficult.
//         /// The hacker can easily find this method and attempt to circumvent it, but it will not
//         /// affect the real decision about watermark injection because it is made in
//         /// <see cref="GetLicenseState_ForInternalUse"/>.
//         ///
//         /// The issue was discussed and a solution proposed in
//         /// https://asposeproductleads.wordpress.com/2015/08/20/license-islicensed-a-potential-security-leak/#comment-22
//         /// </summary>
//         /// <returns></returns>
//         internal static LicenseState GetLicenseState_ForPublicUse()
//         {
//             // It is evaluation if the license is missing or its state is "evaluation" or
//             // the verification superviser says that some hackers have cut out signature
//             // verification method(s).
//             bool isLocalEval =
//                 (gLicense == null) ||
//                 (gLicense.mLicenseState == LicenseState.Evaluation) ||
//                 (gLicense.mLicenseExpiry < DateTime.Now) ||
//                 (VerificationSupervisor.EnsureIfAllMethodsInvoked() == 0x1000);

// C# preprocessor directive: #if !CPLUSPLUS

// C# INACTIVE CODE:
// // We integrate with Dynabic.Metering code to check if a metered usage license was set as an alternative to the normal license.
//             //bool isMeteredEval = (MeteredBillingService.GetMeteredState() == MeteredState.Evaluation);
//             bool isMeteredEval = true;

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// bool isMeteredEval = true;

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// // Returning an enum, not a bool, to make hacking a little harder.
//             LicenseState result = (isLocalEval && isMeteredEval) ? LicenseState.Evaluation : LicenseState.Licensed;
// 
//             if ((result == LicenseState.Licensed) && (gLicense != null) &&
//                 (gLicense.mSubscriptionExpiry.Year >= 2099) && (DateTime.Now.Ticks % 10 == 3))
//                 result = LicenseState.Evaluation;
// 
//             return result;
//         }

// C# preprocessor directive: #if DEBUG

// C# INACTIVE CODE:
// /// <summary>
//         /// Gets Aspose product names this license is for.
//         /// You need to specify value that matches the value specified in AssemblyProduct attribute.
//         /// This is used to check that the license is suitable for this product.
//         /// </summary>
//         internal string[] Products
//         {
//             get { return mProducts; }
//         }
// 
//         /// <summary>
//         /// Gets edition type.
//         /// You can use this to enable/disable some features depending on the edition type.
//         /// </summary>
//         internal EditionType EditionType
//         {
//             get { return mEditionType; }
//         }
// 
//         /// <summary>
//         /// Unique license number. Used to black list stolen licenses.
//         /// </summary>
//         internal string SerialNumber
//         {
//             get { return mSerialNumber; }
//         }
// 
//         /// <summary>
//         /// Gets the last date of the subscription.
//         /// This is to be checked against custom attribute on the assembly that contains the relase date.
//         /// </summary>
//         internal DateTime SubscriptionExpiry
//         {
//             get { return mSubscriptionExpiry; }
//         }
// 
//         /// <summary>
//         /// This is for temporary licenses.
//         /// Setter is only for unit testing.
//         /// </summary>
//         internal DateTime LicenseExpiry
//         {
//             get { return mLicenseExpiry; }
//             set { mLicenseExpiry = value; }
//         }

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// /// <summary>
//         /// Loads license and check signature.
//         /// </summary>
//         /// <param name="stream"></param>
//         /// <returns><c>true></c> if license signature is correct; otherwise <c>false</c>.</returns>
//         [Obfuscation(Feature = "inline", Exclude = false)]
//         private bool LoadLicense(Stream stream)
//         {
//             // Load the license
//             XmlDocument doc = new XmlDocument();
//             doc.Load(stream);
//             // Verify "/License/Data" with "/License/Signature"
//             XmlElement rootElem = doc.DocumentElement;
//             XmlElement dataElem = null;
//             XmlElement signatureElem = null;
//             for (XmlNode node = rootElem.FirstChild; node != null; node = node.NextSibling)
//             {
//                 switch (node.LocalName)
//                 {
//                     case "Data":
//                         dataElem = (XmlElement)node;
//                         break;
//                     case "Signature":
//                         signatureElem = (XmlElement)node;
//                         break;
//                     default:
//                         break;
//                 }
//             }
//             string dataString = (dataElem != null) ? dataElem.OuterXml : "";
//             string signatureString = (signatureElem != null) ? signatureElem.InnerText : "";
//             bool isSignatureCorrect = VerifySignature(dataString, signatureString);
// 
//             // Retrieve "/License/Data/Products/Product"
//             string se = null;
//             string le = null;
//             for (XmlNode node = dataElem.FirstChild; node != null; node = node.NextSibling)
//             {
//                 switch (node.LocalName)
//                 {
//                     case "Products":
//                         {
//                             XmlElement productsElem = (XmlElement)node;
//                             XmlNodeList productNodes = productsElem.GetElementsByTagName("Product");
//                             mProducts = new string[productNodes.Count];
//                             for (int i = 0; i < productNodes.Count; i++)
//                                 mProducts[i] = MapOldProductName(productNodes[i].InnerText);
//                         }
//                         break;
//                     case "EditionType":

// C# preprocessor directive: #if DEBUG

// C# INACTIVE CODE:
// {
//                             // Read edition type
//                             string editionType = node.InnerText;
//                             if (editionType.Equals("Professional"))
//                                 mEditionType = EditionType.Professional;
//                             else if (editionType.Equals("Enterprise"))
//                                 mEditionType = EditionType.Enterprise;
//                             else
//                                 throw new InvalidOperationException("Invalid edition type.");
//                         }

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// break;
//                     case "SerialNumber":
//                         mSerialNumber = node.InnerText;
//                         break;
//                     case "SubscriptionExpiry":
//                         se = node.InnerText;
//                         break;
//                     case "LicenseExpiry":
//                         le = node.InnerText;
//                         break;
//                     default:
//                         break;
//                 }
//             }
//             mSubscriptionExpiry = string.IsNullOrEmpty(se) ? DateTime.MaxValue : DateTime.ParseExact(se, "yyyyMMdd", CultureInfo.InvariantCulture);
//             mLicenseExpiry = string.IsNullOrEmpty(le) ? DateTime.MaxValue : DateTime.ParseExact(le, "yyyyMMdd", CultureInfo.InvariantCulture);
// 
//             return isSignatureCorrect;
//         }
// 
//         /// <summary>
//         /// In January 2006 product names such as Aspose Word, Aspose Excel etc had to be changed.
//         /// This function maps these product names so old licenses can be used in new products.
//         /// </summary>
//         [Obfuscation(Feature = "inline", Exclude = false)]
//         private static string MapOldProductName(string productName)
//         {
//             for (int i = 0; i < gProductNameMap.Length; i++)
//             {
//                 if (productName.Equals(gProductNameMap[i].OldName))
//                     return gProductNameMap[i].NewName;
//             }
//             return productName;
//         }
// 
//         /// <summary>
//         /// Checks signarure.
//         /// </summary>
//         /// <param name="dataString"></param>
//         /// <param name="signatureString"></param>
//         /// <returns><c>true></c> if license signature is correct; otherwise <c>false</c>.</returns>
//         [Obfuscation(Feature = "inline", Exclude = false)]
//         private static bool VerifySignature(string dataString, string signatureString)
//         {
//             return VerifySignature(dataString, signatureString, null);
//         }
// 
//         /// <summary>
//         /// Verifies that content of the data element has not been tampered with. Safe to pass nulls.
//         ///
//         /// Note there is no direct action taken inside this method if the signature is invalid.
//         /// If the signature is invalid, the VerificationSupervisor.SignatureInvalidFlag is set to greater
//         /// than zero and you need to examine it somewhere later in your code. This is to confuse hackers.
//         /// </summary>
//         /// <returns><c>true></c> if license signature is correct; otherwise <c>false</c>.</returns>
//         [Obfuscation(Feature = "inline", Exclude = false)]
//         private static bool VerifySignature(string dataString, string signatureString, string keyModulusString)
//         {
//             // Compute the hash of the data.
// 
//             byte[] dataBytes = Encoding.Unicode.GetBytes(dataString);
//             byte[] signatureBytes;
//             try
//             {
//                 signatureBytes = Convert.FromBase64String(signatureString);
//             }
//             catch (FormatException)
//             {
//                 signatureBytes = new byte[0];
//             }
// 
//             // If public key is not specified then try to get it by data string.
//             if (keyModulusString == null)
//             {
//                 // FIX 17497. We found out from the sales team, that Conholdate product always contains a corresponding
//                 // string in name and product field always present in license file. If license is issued for Conholdate
//                 // products, then we should use an appropriate Conholdate public key.
//                 if (HasConholdateProduct(dataString))
//                 {
//                     keyModulusString = KeyModulusStringRsa1024Conholdate;
//                 }
//                 else
//                 {
//                     // FIX 16536. We started to use licenses signed with SHA256 and RSA2048, so choose an appropriate one.
//                     keyModulusString = (signatureBytes.Length == 128)
//                         ? KeyModulusStringRsa1024Aspose
//                         : KeyModulusStringRsa2048Aspose;
//                 }
//             }
// 
//             return VerifySignature(dataBytes, signatureBytes, keyModulusString);
//         }
// 
//         /// <summary>
//         /// Verifies signature for a specified byte array.
//         /// </summary>
//         /// <returns><c>true></c> if license signature is correct; otherwise <c>false</c>.</returns>
//         [Obfuscation(Feature = "inline", Exclude = false)]
//         private static bool VerifySignature(byte[] dataBytes, byte[] signatureBytes, string base64PublicKeyModulus)
//         {
//             const string keyExponentString = "AQAB";
//             byte[] keyExponentBytes = Convert.FromBase64String(keyExponentString);
//             byte[] keyModulusBytes = Convert.FromBase64String(base64PublicKeyModulus);
// 
//             return RsaSignatureVerifier.VerifySignature(keyModulusBytes, keyExponentBytes, dataBytes, signatureBytes);
//         }
// 
//         /// <summary>
//         /// Tries to find the license in several locations:
//         /// 1. Explicit path.
//         /// 2. The folder of this assembly.
//         /// 3. The folder of the client's calling assembly.
//         /// 4. The folder of the entry assembly (does not apply for the .NET Compact Framework).
//         /// 5. An embedded resource in the client's calling assembly.
//         /// </summary>
//         /// <param name="licenseName">This can be full or short file name or name of an embedded resource.</param>
//         /// <param name="callingAssembly">Client's calling assembly. Used to find license in embedded resource.</param>
//         /// <param name="isEmbedded">Is embedded.</param>
//         /// <returns>Returns a stream that contains the license or throws.</returns>
//         [Obfuscation(Feature = "inline", Exclude = false)]
//         private static Stream ProbeLicense(string licenseName, Assembly callingAssembly, bool isEmbedded)
//         {
//             string fileName = licenseName;

// C# preprocessor directive: #if __cplusplus

// C# INACTIVE CODE:
// // Try explicit path.
//                 if (File.Exists(fileName))
//                     return File.OpenRead(fileName);
// 
//                 // Try current folder.
//                 fileName = Path.Combine(Directory.GetCurrentDirectory(), licenseName);
//                 if (File.Exists(fileName))
//                     return File.OpenRead(fileName);

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// //*******+++ Aspose.PDF for  .NET ******/
//             if (isEmbedded)
//             {
//                 Stream outStream = GetEmbeddedLicense(licenseName, callingAssembly);
//                 if (outStream != null)
//                     return outStream;
//             }
//             //*************/
// 
// 
//             // Try explicit path.
//             if (File.Exists(fileName))
//                 return File.OpenRead(fileName);
// 
//             //In the .NET Compact Framework there seems to be no easy way to find the path
//             //to the current assembly or to the entry assembly.

// C# preprocessor directive: #if !COMPACT

// C# INACTIVE CODE:
// // Try folder of this assembly.
//             fileName = GetFileNameInFolderOfAssembly(licenseName, Assembly.GetExecutingAssembly());
//             if (File.Exists(fileName))
//                 return File.OpenRead(fileName);
// 
//             // Try folder of the client's calling assembly.
//             fileName = GetFileNameInFolderOfAssembly(licenseName, callingAssembly);
//             if (File.Exists(fileName))
//                 return File.OpenRead(fileName);
// 
//             // Try folder of the entry assembly
//             Assembly entryAssembly = Assembly.GetEntryAssembly();
//             if (entryAssembly != null)
//             {
//                 fileName = GetFileNameInFolderOfAssembly(licenseName, entryAssembly);
//                 if (File.Exists(fileName))
//                     return File.OpenRead(fileName);
//             }

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// //Try to find the license in the client's assembly embedded resources.
//             Stream stream = GetResourceByPartialName(callingAssembly, licenseName);
//             if (stream != null)
//                 return stream;

// C# preprocessor directive: #if !CPLUSPLUS

// C# INACTIVE CODE:
// // FIX 6305. Try to find license in the current thread.
//             /*Assembly[] assemblies = AppDomain.CurrentDomain.GetAssemblies();
//             foreach (Assembly assembly in assemblies)
//             {
//                 stream = GetResourceByPartialName(assembly, licenseName);
//                 if (stream != null)
//                     return stream;
//             }*/

// C# preprocessor directive: #endif


// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// throw new FileNotFoundException(string.Format("Cannot find license '{0}'.", licenseName));
//         }
// 
//         //In the .NET Compact Framework there seems to be no easy way to find the path
//         //to the current assembly or to the entry assembly.

// C# preprocessor directive: #if !COMPACT

// C# INACTIVE CODE:
// [Obfuscation(Feature = "inline", Exclude = false)]
//         private static string GetFileNameInFolderOfAssembly(string fileName, Assembly assembly)
//         {
//             return Path.Combine(GetAssemblyPath(assembly), fileName);
//         }
// 
//         /// <summary>
//         /// Returns assembly path correctly even if the assembly is shadow-copied.
//         /// Uses CodeBase instead of Location for that.
//         /// </summary>
//         [Obfuscation(Feature = "inline", Exclude = false)]
//         private static string GetAssemblyPath(Assembly assembly)
//         {
//             // CodeBase is a full URI, such as file:///x:\blahblah.
//             Uri uri = new Uri(assembly.CodeBase);
//             // FIX 1225 - Current implementation of GetAssemblyPath in License class incorrectly handles paths with spaces.
//             // I used uri.AbsolutePath before but it was returning an escaped URI (with %20) which did not
//             // work for file functions. It looks like uri.LocalPath is better for this purpose.
//             return Path.GetDirectoryName(uri.LocalPath);
//         }

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// /// <summary>
//         ///    The resource names can get prefixed with customer's namespace, so I do a partial name search.
//         /// </summary>
//         [Obfuscation(Feature = "inline", Exclude = false)]
//         private static Stream GetResourceByPartialName(Assembly assembly, string partialName)
//         {
//             //LINUX-TODO: investigate and implement searching in resources
//             string[] resourceNames = assembly.GetManifestResourceNames();
//             foreach (string resourceName in resourceNames)
//             {
//                 if (resourceName.IndexOf(partialName) != -1)
//                     return assembly.GetManifestResourceStream(resourceName);
//             }
//             return null;
//         }
// 
//         //[CsToCppPorter.CppSkipDefinition(false)]
//         [Obfuscation(Feature = "inline", Exclude = false)]
//         private static Stream GetBlackListStream(string blackListResourceName)
//         {
//             return GetResourceByPartialName(Assembly.GetExecutingAssembly(), blackListResourceName);
//         }
// 
//         /// <summary>
//         /// Loads and verifies black list from the specified resource, which must be present.
//         /// </summary>
//         /// <remarks>
//         /// For a moment we have following resources with blacklisted licenses:
//         /// - Aspose.License.BlackList.Real.xml
//         /// - Conholdate.License.BlackList.Real.xml
//         /// </remarks>
//         [Obfuscation(Feature = "inline", Exclude = false)]
//         private static HashSetGeneric<string> LoadBlackList(string blackListResourceName, string keyModulus)
//         {
//             // If black list is missing, must be Aspose developer error.

// C# preprocessor directive: #if !__cplusplus

// C# INACTIVE CODE:
// Stream stream = GetBlackListStream(blackListResourceName);
//             if (stream == null)
//                 throw new InvalidOperationException("Cannot find black listed licenses resource. Please report this error to Aspose.");

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// try
//             {

// C# preprocessor directive: #if !__cplusplus

// C# INACTIVE CODE:
// XmlDocument doc = new XmlDocument();
//                 doc.Load(stream);

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// IBlackList bl = BlackList.Create(blackListResourceName);
//                 if (bl == null)
//                     throw new InvalidOperationException("Cannot find black listed licenses resource. Please report this error to Aspose.");
//                 XmlDocument doc = bl.Document;

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// XmlElement rootElem = doc.DocumentElement;
//                 XmlElement dataElem = null;
//                 XmlNode signatureElem = null;
//                 for (XmlNode node = rootElem.FirstChild; node != null; node = node.NextSibling)
//                 {
//                     switch (node.LocalName)
//                     {
//                         case "Data":
//                             dataElem = (XmlElement)node;
//                             break;
//                         case "Signature":
//                             signatureElem = (XmlElement)node;
//                             break;
//                         default:
//                             break;
//                     }
//                 }
//                 string dataString = (dataElem != null) ? dataElem.OuterXml : "";
//                 string signatureString = (signatureElem != null) ? signatureElem.InnerText : "";
// 
//                 if (!VerifySignature(dataString, signatureString, keyModulus))
//                     Debug.Assert(false, "Incorrect signature.");
// 
//                 HashSetGeneric<string> result = new HashSetGeneric<string>();
//                 for (XmlNode node = dataElem.FirstChild; node != null; node = node.NextSibling)
//                 {
//                     result.Add(node.InnerText);
//                 }
//                 return result;
//             }
//             finally
//             {

// C# preprocessor directive: #if !__cplusplus

// C# INACTIVE CODE:
// stream.Close();

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// }
//         }
// 
//         /// <summary>
//         /// Gets list of license products.
//         /// </summary>
//         [Obfuscation(Feature = "inline", Exclude = false)]
//         private static XmlNodeList GetProducts(string licenseData)
//         {
//             if (!StringUtil.HasChars(licenseData))
//                 return null;
// 
//             XmlDocument data = new XmlDocument();
//             data.LoadXml(licenseData);
// 
//             return data.GetElementsByTagName("Products");
//         }
// 
//         /// <summary>
//         /// Returns true, if license contains products with Conholdate string.
//         /// </summary>
//         [Obfuscation(Feature = "inline", Exclude = false)]
//         private static bool HasConholdateProduct(string licenseData)
//         {
//             XmlNodeList products = GetProducts(licenseData);
//             if (products == null)
//                 return false;
// 
//             foreach (XmlNode product in products)
//             {
//                 string productName = product.InnerText;
//                 if (StringUtil.HasChars(productName) && StringUtil.Contains(productName, "Conholdate", true))
//                     return true;
//             }
// 
//             return false;
//         }
// 
//         private string[] mProducts;
//         private string mSerialNumber;
//         private DateTime mSubscriptionExpiry;
//         private DateTime mLicenseExpiry;

// C# preprocessor directive: #if DEBUG

// C# INACTIVE CODE:
// private EditionType mEditionType;

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// // When the license object is created, it is in evaluation mode by default.
//         private LicenseState mLicenseState = LicenseState.Evaluation;
// 
//         /*****+++  Aspose.PDF changes    *****/
//         private static LicenseCore _gLicense;

// C# preprocessor directive: #if UNIT_TEST

// C# INACTIVE CODE:
// /// <summary>
//     ///    Generally now in unit tests used binding of license to thread that installed it.
//     ///   It makes sense cause in unit tests possible situation runs different tests
//     ///   where license must can be set and reset in different threads in same time - like in PCL conversion tests.
//     ///     This parameter allows if necessary force in unit tests' code usage of production model of work with license in multithreading :
//     ///   i.e. use fully static license(one installed license used with all threads, instead of situation where each thread will use independent copy of license)
//     ///     Please use try/finally blocks to ensure that this behaviour will be allways turned off after running of test that uses it
//     /// </summary>
//             internal static bool UseInUnitTestsOneGlobalLicenseLikeOnProduction = true;

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// 

// C# preprocessor directive: #if UNIT_TEST

// C# INACTIVE CODE:
// [ThreadStatic] private static LicenseCore _threadLocalLicense;

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// private static LicenseCore gLicense
//         {
//             get
//             {

// C# preprocessor directive: #if UNIT_TEST

// C# INACTIVE CODE:
// if (UseInUnitTestsOneGlobalLicenseLikeOnProduction)
//                     {
//                         return _gLicense;
//                     }
//                     else
//                     {
//                         return _threadLocalLicense;
//                     }

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// return _gLicense;

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// }
//             set
//             {

// C# preprocessor directive: #if UNIT_TEST

// C# INACTIVE CODE:
// if (UseInUnitTestsOneGlobalLicenseLikeOnProduction)
//                     {
//                         _gLicense = value;
//                     }
//                     else
//                     {
//                         _threadLocalLicense = value;
//                     }

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// _gLicense = value;

// C# preprocessor directive: #endif

// C# INACTIVE CODE:
// }
//         }
//         /******************************************/
// 
//         /// <summary>
//         /// The key is a string blacklisted license serial number. The value is null.
//         /// </summary>
//         private static HashSetGeneric<string> gAsposeBlackListCache;
// 
//         /// <summary>
//         /// The key is a string blacklisted license serial number. The value is null.
//         /// </summary>
//         private static HashSetGeneric<string> gConholdateBlackListCache;
// 
//         /// <summary>
//         /// Maps old product name into new.
//         /// </summary>
//         private struct ProductNameMapping
//         {
//             internal readonly string OldName;
//             internal readonly string NewName;
// 
//             internal ProductNameMapping(string oldName, string newName)
//             {
//                 OldName = oldName;
//                 NewName = newName;
//             }
//         }
// 
//         /// <summary>
//         /// Used in the product mapping to build full product name.
//         /// This is to avoid other developers accidentally damaging this code when doing global rename.
//         /// </summary>
//         private const string AsposeDot = "Aspose.";
// 
//         /// <summary>
//         /// Maps old product names into new.
//         /// </summary>
//         private static readonly ProductNameMapping[] gProductNameMap =
//         {
//                 new ProductNameMapping(AsposeDot + "Word", AsposeDot + "Words"),
//                 new ProductNameMapping(AsposeDot + "Excel", AsposeDot + "Cells"),
//                 new ProductNameMapping(AsposeDot + "Excel.Web", AsposeDot + "Grid"),
//                 new ProductNameMapping(AsposeDot + "PowerPoint", AsposeDot + "Slides"),
//                 new ProductNameMapping(AsposeDot + "Project", AsposeDot + "Tasks")
//             };
// 
//         /// <summary>
//         /// These are various public keys for checking license signatures.
//         /// </summary>
//         private const string KeyModulusStringRsa1024Aspose = "0nRuwNEddXwLfXB7pw66G71MS93gW8mNzJ7vuh3Sf4VAEOBfpxtHLCotymv1PoeukxYe31K441Ivq0Pkvx1yZZG4O1KCv3Omdbs7uqzUB4xXHlOub4VsTODzDJ5MWHqlRCB1HHcGjlyT2sVGiovLt0Grvqw5+QXBuinoBY0suX0=";
//         private const string KeyModulusStringRsa1024Conholdate = "qKFqqhFovZvEYCHeD3N8Oy+AuxrOA8cVvIl4u4qIBMQlzejGyXkiTUjoryuzlhlS2bG80FGmFsH+wUKbYiEkW/4zseZCV/Ej/usbu6yHACQKO/SCy3pYw68Pcv901pvywUnoaYCI2ccCG29+XM+FwpFQuiPb2H7YbI/++SQs6Hk=";
//         private const string KeyModulusStringRsa2048Aspose = "3ki45T6C4lt12J5MbKfrADBCZcE8OTefdngc9IDKg+lzCGYLuxJFDt16awhJFnA23sX+kQ4/eZQ5pNAYjc+ZJ0+pWwvQR4h8GJ3eWvecdFs7KSWwNmFXZCSN+sbrxwEjzzns1kIHuLNf5r+Zaggns+8rqXR19RSJBOcuFqVipIHv56lF53Hc+hx+y9URIaadO1W8dkTqgwExyfjnbDOaCBEH0CqUL1YIICS/wIUTEKhM0ZlwEcIcHl8XTHLVx96DMX4bbVajj78L4KzevQc442DX28KGDJTveEB1pSKWsr0d4FTx7wKS36RBnWv5lwsRErtTZb5ciVIG1iIJrp87VQ==";
//     }

// C# preprocessor directive: #endif

} // namespace Font
} // namespace Aspose

// C# preprocessor directive: #endif



