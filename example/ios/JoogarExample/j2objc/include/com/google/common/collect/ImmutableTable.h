//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ImmutableTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectImmutableTable_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableTable_RESTRICT
#define ComGoogleCommonCollectImmutableTable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableTable_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableTable_) && (ComGoogleCommonCollectImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectImmutableTable_INCLUDE)
#define _ComGoogleCommonCollectImmutableTable_

#define ComGoogleCommonCollectAbstractTable_RESTRICT 1
#define ComGoogleCommonCollectAbstractTable_INCLUDE 1
#include "com/google/common/collect/AbstractTable.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableTable_Builder;
@class ComGoogleCommonCollectUnmodifiableIterator;
@protocol ComGoogleCommonCollectTable;
@protocol ComGoogleCommonCollectTable_Cell;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectImmutableTable : ComGoogleCommonCollectAbstractTable

#pragma mark Public

+ (ComGoogleCommonCollectImmutableTable_Builder *)builder;

- (ComGoogleCommonCollectImmutableSet *)cellSet;

- (void)clear;

- (ComGoogleCommonCollectImmutableMap *)columnWithId:(id)columnKey;

- (ComGoogleCommonCollectImmutableSet *)columnKeySet;

- (ComGoogleCommonCollectImmutableMap *)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsValueWithId:(id)value;

+ (ComGoogleCommonCollectImmutableTable *)copyOfWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableTable *)of;

+ (ComGoogleCommonCollectImmutableTable *)ofWithId:(id)rowKey
                                            withId:(id)columnKey
                                            withId:(id)value;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (ComGoogleCommonCollectImmutableMap *)rowWithId:(id)rowKey;

- (ComGoogleCommonCollectImmutableSet *)rowKeySet;

- (ComGoogleCommonCollectImmutableMap *)rowMap;

- (ComGoogleCommonCollectImmutableCollection *)values;

#pragma mark Package-Private

- (instancetype)init;

- (ComGoogleCommonCollectUnmodifiableIterator *)cellIterator;

+ (id<ComGoogleCommonCollectTable_Cell>)cellOfWithId:(id)rowKey
                                              withId:(id)columnKey
                                              withId:(id)value;

- (ComGoogleCommonCollectImmutableSet *)createCellSet;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

- (id<JavaUtilIterator>)valuesIterator;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableTable)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable *ComGoogleCommonCollectImmutableTable_of();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable *ComGoogleCommonCollectImmutableTable_ofWithId_withId_withId_(id rowKey, id columnKey, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable *ComGoogleCommonCollectImmutableTable_copyOfWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable_Builder *ComGoogleCommonCollectImmutableTable_builder();

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable_Cell> ComGoogleCommonCollectImmutableTable_cellOfWithId_withId_withId_(id rowKey, id columnKey, id value);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableTable_init(ComGoogleCommonCollectImmutableTable *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableTable)

#endif

#if !defined (_ComGoogleCommonCollectImmutableTable_Builder_) && (ComGoogleCommonCollectImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectImmutableTable_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableTable_Builder_

@class ComGoogleCommonCollectImmutableTable;
@protocol ComGoogleCommonCollectTable;
@protocol ComGoogleCommonCollectTable_Cell;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectImmutableTable_Builder : NSObject

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableTable *)build;

- (ComGoogleCommonCollectImmutableTable_Builder *)orderColumnsByWithJavaUtilComparator:(id<JavaUtilComparator>)columnComparator;

- (ComGoogleCommonCollectImmutableTable_Builder *)orderRowsByWithJavaUtilComparator:(id<JavaUtilComparator>)rowComparator;

- (ComGoogleCommonCollectImmutableTable_Builder *)putWithComGoogleCommonCollectTable_Cell:(id<ComGoogleCommonCollectTable_Cell>)cell;

- (ComGoogleCommonCollectImmutableTable_Builder *)putWithId:(id)rowKey
                                                     withId:(id)columnKey
                                                     withId:(id)value;

- (ComGoogleCommonCollectImmutableTable_Builder *)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableTable_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableTable_Builder_init(ComGoogleCommonCollectImmutableTable_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableTable_Builder *new_ComGoogleCommonCollectImmutableTable_Builder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableTable_Builder)

#endif

#pragma pop_macro("ComGoogleCommonCollectImmutableTable_INCLUDE_ALL")
