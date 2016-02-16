//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ForwardingListMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectForwardingListMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingListMultimap_RESTRICT
#define ComGoogleCommonCollectForwardingListMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingListMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingListMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingListMultimap_) && (ComGoogleCommonCollectForwardingListMultimap_INCLUDE_ALL || ComGoogleCommonCollectForwardingListMultimap_INCLUDE)
#define _ComGoogleCommonCollectForwardingListMultimap_

#define ComGoogleCommonCollectForwardingMultimap_RESTRICT 1
#define ComGoogleCommonCollectForwardingMultimap_INCLUDE 1
#include "com/google/common/collect/ForwardingMultimap.h"

#define ComGoogleCommonCollectListMultimap_RESTRICT 1
#define ComGoogleCommonCollectListMultimap_INCLUDE 1
#include "com/google/common/collect/ListMultimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilList;

@interface ComGoogleCommonCollectForwardingListMultimap : ComGoogleCommonCollectForwardingMultimap < ComGoogleCommonCollectListMultimap >

#pragma mark Public

- (id<JavaUtilList>)getWithId:(id)key;

- (id<JavaUtilList>)removeAllWithId:(id)key;

- (id<JavaUtilList>)replaceValuesWithId:(id)key
                   withJavaLangIterable:(id<JavaLangIterable>)values;

#pragma mark Protected

- (instancetype)init;

- (id<ComGoogleCommonCollectListMultimap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingListMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingListMultimap_init(ComGoogleCommonCollectForwardingListMultimap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingListMultimap)

#endif

#pragma pop_macro("ComGoogleCommonCollectForwardingListMultimap_INCLUDE_ALL")