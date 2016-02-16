//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/DenseImmutableTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectDenseImmutableTable_INCLUDE_ALL")
#if ComGoogleCommonCollectDenseImmutableTable_RESTRICT
#define ComGoogleCommonCollectDenseImmutableTable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectDenseImmutableTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectDenseImmutableTable_RESTRICT

#if !defined (_ComGoogleCommonCollectDenseImmutableTable_) && (ComGoogleCommonCollectDenseImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectDenseImmutableTable_INCLUDE)
#define _ComGoogleCommonCollectDenseImmutableTable_

#define ComGoogleCommonCollectRegularImmutableTable_RESTRICT 1
#define ComGoogleCommonCollectRegularImmutableTable_INCLUDE 1
#include "com/google/common/collect/RegularImmutableTable.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;
@protocol ComGoogleCommonCollectTable_Cell;

@interface ComGoogleCommonCollectDenseImmutableTable : ComGoogleCommonCollectRegularImmutableTable

#pragma mark Public

- (ComGoogleCommonCollectImmutableMap *)columnMap;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (ComGoogleCommonCollectImmutableMap *)rowMap;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)cellList
                     withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)rowSpace
                     withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)columnSpace;

- (id<ComGoogleCommonCollectTable_Cell>)getCellWithInt:(jint)index;

- (id)getValueWithInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectDenseImmutableTable)

FOUNDATION_EXPORT void ComGoogleCommonCollectDenseImmutableTable_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectDenseImmutableTable *self, ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace);

FOUNDATION_EXPORT ComGoogleCommonCollectDenseImmutableTable *new_ComGoogleCommonCollectDenseImmutableTable_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDenseImmutableTable)

#endif

#pragma pop_macro("ComGoogleCommonCollectDenseImmutableTable_INCLUDE_ALL")
