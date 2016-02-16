//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/hash/Funnels.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonHashFunnels_INCLUDE_ALL")
#if ComGoogleCommonHashFunnels_RESTRICT
#define ComGoogleCommonHashFunnels_INCLUDE_ALL 0
#else
#define ComGoogleCommonHashFunnels_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashFunnels_RESTRICT

#if !defined (_ComGoogleCommonHashFunnels_) && (ComGoogleCommonHashFunnels_INCLUDE_ALL || ComGoogleCommonHashFunnels_INCLUDE)
#define _ComGoogleCommonHashFunnels_

@class JavaIoOutputStream;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonHashFunnel;
@protocol ComGoogleCommonHashPrimitiveSink;

@interface ComGoogleCommonHashFunnels : NSObject

#pragma mark Public

+ (JavaIoOutputStream *)asOutputStreamWithComGoogleCommonHashPrimitiveSink:(id<ComGoogleCommonHashPrimitiveSink>)sink;

+ (id<ComGoogleCommonHashFunnel>)byteArrayFunnel;

+ (id<ComGoogleCommonHashFunnel>)integerFunnel;

+ (id<ComGoogleCommonHashFunnel>)longFunnel;

+ (id<ComGoogleCommonHashFunnel>)sequentialFunnelWithComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)elementFunnel;

+ (id<ComGoogleCommonHashFunnel>)stringFunnelWithJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

+ (id<ComGoogleCommonHashFunnel>)unencodedCharsFunnel;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashFunnels)

FOUNDATION_EXPORT id<ComGoogleCommonHashFunnel> ComGoogleCommonHashFunnels_byteArrayFunnel();

FOUNDATION_EXPORT id<ComGoogleCommonHashFunnel> ComGoogleCommonHashFunnels_unencodedCharsFunnel();

FOUNDATION_EXPORT id<ComGoogleCommonHashFunnel> ComGoogleCommonHashFunnels_stringFunnelWithJavaNioCharsetCharset_(JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT id<ComGoogleCommonHashFunnel> ComGoogleCommonHashFunnels_integerFunnel();

FOUNDATION_EXPORT id<ComGoogleCommonHashFunnel> ComGoogleCommonHashFunnels_sequentialFunnelWithComGoogleCommonHashFunnel_(id<ComGoogleCommonHashFunnel> elementFunnel);

FOUNDATION_EXPORT id<ComGoogleCommonHashFunnel> ComGoogleCommonHashFunnels_longFunnel();

FOUNDATION_EXPORT JavaIoOutputStream *ComGoogleCommonHashFunnels_asOutputStreamWithComGoogleCommonHashPrimitiveSink_(id<ComGoogleCommonHashPrimitiveSink> sink);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashFunnels)

#endif

#pragma pop_macro("ComGoogleCommonHashFunnels_INCLUDE_ALL")
