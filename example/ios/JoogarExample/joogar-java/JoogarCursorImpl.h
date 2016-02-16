//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ../../../joogar/src/main/java/net/skoumal/joogar/shared/cursor/JoogarCursorImpl.java
//

#ifndef _JoogarCursorImpl_H_
#define _JoogarCursorImpl_H_

#include "J2ObjC_header.h"
#include "JoogarCursor.h"
#include "java/util/Iterator.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaReflectionUtils;
@protocol JavaJoogarDatabaseResult;
@protocol JavaUtilList;

@interface JavaJoogarCursorImpl : NSObject < JavaJoogarCursor, JavaUtilIterator > {
 @public
  JavaReflectionUtils *reflectionUtils_;
}

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)gType
    withJavaJoogarDatabaseResult:(id<JavaJoogarDatabaseResult>)gResult;

- (instancetype)initWithIOSClass:(IOSClass *)gType
    withJavaJoogarDatabaseResult:(id<JavaJoogarDatabaseResult>)gResult
withJavaJoogarRecord_PrefetchArray:(IOSObjectArray *)gPrefetches;

- (void)close;

- (id)current;

- (jint)getCount;

- (id)getItem;

- (jint)getPosition;

- (jboolean)hasNext;

- (jboolean)isClosed;

- (id<JavaUtilIterator>)iterator;

- (id)next;

- (void)remove;

- (void)setPositionWithInt:(jint)position;

- (jint)size;

- (id<JavaUtilList>)toList;

- (id<JavaUtilList>)toListAndClose;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaJoogarCursorImpl)

J2OBJC_FIELD_SETTER(JavaJoogarCursorImpl, reflectionUtils_, JavaReflectionUtils *)

FOUNDATION_EXPORT void JavaJoogarCursorImpl_initWithIOSClass_withJavaJoogarDatabaseResult_(JavaJoogarCursorImpl *self, IOSClass *gType, id<JavaJoogarDatabaseResult> gResult);

FOUNDATION_EXPORT JavaJoogarCursorImpl *new_JavaJoogarCursorImpl_initWithIOSClass_withJavaJoogarDatabaseResult_(IOSClass *gType, id<JavaJoogarDatabaseResult> gResult) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaJoogarCursorImpl_initWithIOSClass_withJavaJoogarDatabaseResult_withJavaJoogarRecord_PrefetchArray_(JavaJoogarCursorImpl *self, IOSClass *gType, id<JavaJoogarDatabaseResult> gResult, IOSObjectArray *gPrefetches);

FOUNDATION_EXPORT JavaJoogarCursorImpl *new_JavaJoogarCursorImpl_initWithIOSClass_withJavaJoogarDatabaseResult_withJavaJoogarRecord_PrefetchArray_(IOSClass *gType, id<JavaJoogarDatabaseResult> gResult, IOSObjectArray *gPrefetches) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaJoogarCursorImpl)

@compatibility_alias NetSkoumalJoogarSharedCursorJoogarCursorImpl JavaJoogarCursorImpl;

#endif // _JoogarCursorImpl_H_