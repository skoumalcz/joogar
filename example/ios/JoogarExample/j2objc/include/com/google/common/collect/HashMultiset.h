//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/HashMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectHashMultiset_INCLUDE_ALL")
#if ComGoogleCommonCollectHashMultiset_RESTRICT
#define ComGoogleCommonCollectHashMultiset_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectHashMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectHashMultiset_RESTRICT

#if !defined (_ComGoogleCommonCollectHashMultiset_) && (ComGoogleCommonCollectHashMultiset_INCLUDE_ALL || ComGoogleCommonCollectHashMultiset_INCLUDE)
#define _ComGoogleCommonCollectHashMultiset_

#define ComGoogleCommonCollectAbstractMapBasedMultiset_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE 1
#include "com/google/common/collect/AbstractMapBasedMultiset.h"

@protocol JavaLangIterable;

@interface ComGoogleCommonCollectHashMultiset : ComGoogleCommonCollectAbstractMapBasedMultiset

#pragma mark Public

+ (ComGoogleCommonCollectHashMultiset *)create;

+ (ComGoogleCommonCollectHashMultiset *)createWithInt:(jint)distinctElements;

+ (ComGoogleCommonCollectHashMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashMultiset)

FOUNDATION_EXPORT ComGoogleCommonCollectHashMultiset *ComGoogleCommonCollectHashMultiset_create();

FOUNDATION_EXPORT ComGoogleCommonCollectHashMultiset *ComGoogleCommonCollectHashMultiset_createWithInt_(jint distinctElements);

FOUNDATION_EXPORT ComGoogleCommonCollectHashMultiset *ComGoogleCommonCollectHashMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashMultiset)

#endif

#pragma pop_macro("ComGoogleCommonCollectHashMultiset_INCLUDE_ALL")
