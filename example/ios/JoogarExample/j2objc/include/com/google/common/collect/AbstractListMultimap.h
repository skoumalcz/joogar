//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/AbstractListMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectAbstractListMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectAbstractListMultimap_RESTRICT
#define ComGoogleCommonCollectAbstractListMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectAbstractListMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractListMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractListMultimap_) && (ComGoogleCommonCollectAbstractListMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractListMultimap_INCLUDE)
#define _ComGoogleCommonCollectAbstractListMultimap_

#define ComGoogleCommonCollectAbstractMapBasedMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractMapBasedMultimap.h"

#define ComGoogleCommonCollectListMultimap_RESTRICT 1
#define ComGoogleCommonCollectListMultimap_INCLUDE 1
#include "com/google/common/collect/ListMultimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilList;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectAbstractListMultimap : ComGoogleCommonCollectAbstractMapBasedMultimap < ComGoogleCommonCollectListMultimap >

#pragma mark Public

- (id<JavaUtilMap>)asMap;

- (jboolean)isEqual:(id)object;

- (id<JavaUtilList>)getWithId:(id)key;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (id<JavaUtilList>)removeAllWithId:(id)key;

- (id<JavaUtilList>)replaceValuesWithId:(id)key
                   withJavaLangIterable:(id<JavaLangIterable>)values;

#pragma mark Protected

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

#pragma mark Package-Private

- (id<JavaUtilList>)createCollection;

- (id<JavaUtilList>)createUnmodifiableEmptyCollection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractListMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractListMultimap_initWithJavaUtilMap_(ComGoogleCommonCollectAbstractListMultimap *self, id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractListMultimap)

#endif

#pragma pop_macro("ComGoogleCommonCollectAbstractListMultimap_INCLUDE_ALL")
