//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/escape/Escaper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonEscapeEscaper_INCLUDE_ALL")
#if ComGoogleCommonEscapeEscaper_RESTRICT
#define ComGoogleCommonEscapeEscaper_INCLUDE_ALL 0
#else
#define ComGoogleCommonEscapeEscaper_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonEscapeEscaper_RESTRICT

#if !defined (_ComGoogleCommonEscapeEscaper_) && (ComGoogleCommonEscapeEscaper_INCLUDE_ALL || ComGoogleCommonEscapeEscaper_INCLUDE)
#define _ComGoogleCommonEscapeEscaper_

@protocol ComGoogleCommonBaseFunction;

@interface ComGoogleCommonEscapeEscaper : NSObject

#pragma mark Public

- (id<ComGoogleCommonBaseFunction>)asFunction;

- (NSString *)escapeWithNSString:(NSString *)string;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEscapeEscaper)

FOUNDATION_EXPORT void ComGoogleCommonEscapeEscaper_init(ComGoogleCommonEscapeEscaper *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeEscaper)

#endif

#pragma pop_macro("ComGoogleCommonEscapeEscaper_INCLUDE_ALL")
