//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/AllEqualOrdering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectAllEqualOrdering_INCLUDE_ALL")
#if ComGoogleCommonCollectAllEqualOrdering_RESTRICT
#define ComGoogleCommonCollectAllEqualOrdering_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectAllEqualOrdering_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAllEqualOrdering_RESTRICT

#if !defined (_ComGoogleCommonCollectAllEqualOrdering_) && (ComGoogleCommonCollectAllEqualOrdering_INCLUDE_ALL || ComGoogleCommonCollectAllEqualOrdering_INCLUDE)
#define _ComGoogleCommonCollectAllEqualOrdering_

#define ComGoogleCommonCollectOrdering_RESTRICT 1
#define ComGoogleCommonCollectOrdering_INCLUDE 1
#include "com/google/common/collect/Ordering.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableList;
@protocol JavaLangIterable;
@protocol JavaUtilList;

@interface ComGoogleCommonCollectAllEqualOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable >

#pragma mark Public

- (jint)compareWithId:(id)left
               withId:(id)right;

- (ComGoogleCommonCollectImmutableList *)immutableSortedCopyWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (ComGoogleCommonCollectOrdering *)reverse;

- (id<JavaUtilList>)sortedCopyWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectAllEqualOrdering)

FOUNDATION_EXPORT ComGoogleCommonCollectAllEqualOrdering *ComGoogleCommonCollectAllEqualOrdering_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectAllEqualOrdering, INSTANCE_, ComGoogleCommonCollectAllEqualOrdering *)

FOUNDATION_EXPORT void ComGoogleCommonCollectAllEqualOrdering_init(ComGoogleCommonCollectAllEqualOrdering *self);

FOUNDATION_EXPORT ComGoogleCommonCollectAllEqualOrdering *new_ComGoogleCommonCollectAllEqualOrdering_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAllEqualOrdering)

#endif

#pragma pop_macro("ComGoogleCommonCollectAllEqualOrdering_INCLUDE_ALL")
