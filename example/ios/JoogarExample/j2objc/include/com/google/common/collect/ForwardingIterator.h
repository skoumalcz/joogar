//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ForwardingIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectForwardingIterator_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingIterator_RESTRICT
#define ComGoogleCommonCollectForwardingIterator_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingIterator_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingIterator_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingIterator_) && (ComGoogleCommonCollectForwardingIterator_INCLUDE_ALL || ComGoogleCommonCollectForwardingIterator_INCLUDE)
#define _ComGoogleCommonCollectForwardingIterator_

#define ComGoogleCommonCollectForwardingObject_RESTRICT 1
#define ComGoogleCommonCollectForwardingObject_INCLUDE 1
#include "com/google/common/collect/ForwardingObject.h"

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"

@interface ComGoogleCommonCollectForwardingIterator : ComGoogleCommonCollectForwardingObject < JavaUtilIterator >

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (void)remove;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilIterator>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingIterator_init(ComGoogleCommonCollectForwardingIterator *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingIterator)

#endif

#pragma pop_macro("ComGoogleCommonCollectForwardingIterator_INCLUDE_ALL")
