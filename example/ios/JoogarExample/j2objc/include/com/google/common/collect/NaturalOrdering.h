//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/NaturalOrdering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectNaturalOrdering_INCLUDE_ALL")
#if ComGoogleCommonCollectNaturalOrdering_RESTRICT
#define ComGoogleCommonCollectNaturalOrdering_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectNaturalOrdering_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectNaturalOrdering_RESTRICT

#if !defined (_ComGoogleCommonCollectNaturalOrdering_) && (ComGoogleCommonCollectNaturalOrdering_INCLUDE_ALL || ComGoogleCommonCollectNaturalOrdering_INCLUDE)
#define _ComGoogleCommonCollectNaturalOrdering_

#define ComGoogleCommonCollectOrdering_RESTRICT 1
#define ComGoogleCommonCollectOrdering_INCLUDE 1
#include "com/google/common/collect/Ordering.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@protocol JavaLangComparable;

@interface ComGoogleCommonCollectNaturalOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable >

#pragma mark Public

- (jint)compareWithId:(id<JavaLangComparable>)left
               withId:(id<JavaLangComparable>)right;

- (ComGoogleCommonCollectOrdering *)reverse;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectNaturalOrdering)

FOUNDATION_EXPORT ComGoogleCommonCollectNaturalOrdering *ComGoogleCommonCollectNaturalOrdering_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectNaturalOrdering, INSTANCE_, ComGoogleCommonCollectNaturalOrdering *)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectNaturalOrdering)

#endif

#pragma pop_macro("ComGoogleCommonCollectNaturalOrdering_INCLUDE_ALL")
