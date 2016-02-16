//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ForwardingSortedSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectForwardingSortedSetMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingSortedSetMultimap_RESTRICT
#define ComGoogleCommonCollectForwardingSortedSetMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingSortedSetMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingSortedSetMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingSortedSetMultimap_) && (ComGoogleCommonCollectForwardingSortedSetMultimap_INCLUDE_ALL || ComGoogleCommonCollectForwardingSortedSetMultimap_INCLUDE)
#define _ComGoogleCommonCollectForwardingSortedSetMultimap_

#define ComGoogleCommonCollectForwardingSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectForwardingSetMultimap_INCLUDE 1
#include "com/google/common/collect/ForwardingSetMultimap.h"

#define ComGoogleCommonCollectSortedSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectSortedSetMultimap_INCLUDE 1
#include "com/google/common/collect/SortedSetMultimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectForwardingSortedSetMultimap : ComGoogleCommonCollectForwardingSetMultimap < ComGoogleCommonCollectSortedSetMultimap >

#pragma mark Public

- (id<JavaUtilSortedSet>)getWithId:(id)key;

- (id<JavaUtilSortedSet>)removeAllWithId:(id)key;

- (id<JavaUtilSortedSet>)replaceValuesWithId:(id)key
                        withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<JavaUtilComparator>)valueComparator;

#pragma mark Protected

- (instancetype)init;

- (id<ComGoogleCommonCollectSortedSetMultimap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingSortedSetMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingSortedSetMultimap_init(ComGoogleCommonCollectForwardingSortedSetMultimap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingSortedSetMultimap)

#endif

#pragma pop_macro("ComGoogleCommonCollectForwardingSortedSetMultimap_INCLUDE_ALL")
