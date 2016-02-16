//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ArrayTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectArrayTable_INCLUDE_ALL")
#if ComGoogleCommonCollectArrayTable_RESTRICT
#define ComGoogleCommonCollectArrayTable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectArrayTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectArrayTable_RESTRICT

#if !defined (_ComGoogleCommonCollectArrayTable_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_

#define ComGoogleCommonCollectAbstractTable_RESTRICT 1
#define ComGoogleCommonCollectAbstractTable_INCLUDE 1
#include "com/google/common/collect/AbstractTable.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSet;
@class IOSClass;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectTable;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectArrayTable : ComGoogleCommonCollectAbstractTable < JavaIoSerializable >

#pragma mark Public

- (id)atWithInt:(jint)rowIndex
        withInt:(jint)columnIndex;

- (id<JavaUtilSet>)cellSet;

- (void)clear;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (ComGoogleCommonCollectImmutableList *)columnKeyList;

- (ComGoogleCommonCollectImmutableSet *)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

+ (ComGoogleCommonCollectArrayTable *)createWithJavaLangIterable:(id<JavaLangIterable>)rowKeys
                                            withJavaLangIterable:(id<JavaLangIterable>)columnKeys;

+ (ComGoogleCommonCollectArrayTable *)createWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)eraseWithId:(id)rowKey
           withId:(id)columnKey;

- (void)eraseAll;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (jboolean)isEmpty;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (ComGoogleCommonCollectImmutableList *)rowKeyList;

- (ComGoogleCommonCollectImmutableSet *)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (id)setWithInt:(jint)rowIndex
         withInt:(jint)columnIndex
          withId:(id)value;

- (jint)size;

- (IOSObjectArray *)toArrayWithIOSClass:(IOSClass *)valueClass;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (id<JavaUtilIterator>)cellIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable)

FOUNDATION_EXPORT ComGoogleCommonCollectArrayTable *ComGoogleCommonCollectArrayTable_createWithJavaLangIterable_withJavaLangIterable_(id<JavaLangIterable> rowKeys, id<JavaLangIterable> columnKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectArrayTable *ComGoogleCommonCollectArrayTable_createWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable)

#endif

#pragma pop_macro("ComGoogleCommonCollectArrayTable_INCLUDE_ALL")
