//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/base/SmallCharMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonBaseSmallCharMatcher_INCLUDE_ALL")
#if ComGoogleCommonBaseSmallCharMatcher_RESTRICT
#define ComGoogleCommonBaseSmallCharMatcher_INCLUDE_ALL 0
#else
#define ComGoogleCommonBaseSmallCharMatcher_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseSmallCharMatcher_RESTRICT

#if !defined (_ComGoogleCommonBaseSmallCharMatcher_) && (ComGoogleCommonBaseSmallCharMatcher_INCLUDE_ALL || ComGoogleCommonBaseSmallCharMatcher_INCLUDE)
#define _ComGoogleCommonBaseSmallCharMatcher_

#define ComGoogleCommonBaseCharMatcher_RESTRICT 1
#define ComGoogleCommonBaseCharMatcher_FastMatcher_INCLUDE 1
#include "com/google/common/base/CharMatcher.h"

@class ComGoogleCommonBaseCharMatcher;
@class JavaUtilBitSet;

#define ComGoogleCommonBaseSmallCharMatcher_MAX_SIZE 1023

@interface ComGoogleCommonBaseSmallCharMatcher : ComGoogleCommonBaseCharMatcher_FastMatcher

#pragma mark Public

- (jboolean)matchesWithChar:(jchar)c;

#pragma mark Package-Private

+ (jint)chooseTableSizeWithInt:(jint)setSize;

+ (ComGoogleCommonBaseCharMatcher *)fromWithJavaUtilBitSet:(JavaUtilBitSet *)chars
                                              withNSString:(NSString *)description_;

- (void)setBitsWithJavaUtilBitSet:(JavaUtilBitSet *)table;

+ (jint)smearWithInt:(jint)hashCode;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseSmallCharMatcher)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseSmallCharMatcher, MAX_SIZE, jint)

FOUNDATION_EXPORT jint ComGoogleCommonBaseSmallCharMatcher_smearWithInt_(jint hashCode);

FOUNDATION_EXPORT jint ComGoogleCommonBaseSmallCharMatcher_chooseTableSizeWithInt_(jint setSize);

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseSmallCharMatcher_fromWithJavaUtilBitSet_withNSString_(JavaUtilBitSet *chars, NSString *description_);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseSmallCharMatcher)

#endif

#pragma pop_macro("ComGoogleCommonBaseSmallCharMatcher_INCLUDE_ALL")
