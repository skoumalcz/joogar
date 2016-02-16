//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/SparseArray.java
//

#ifndef _AndroidUtilSparseArray_H_
#define _AndroidUtilSparseArray_H_

#include "J2ObjC_header.h"

/*!
 @brief SparseArrays map integers to Objects.
 Unlike a normal array of Objects,
 there can be gaps in the indices.  It is intended to be more memory efficient
 than using a HashMap to map Integers to Objects, both because it avoids
 auto-boxing keys and its data structure doesn't rely on an extra entry object
 for each mapping.
 <p>Note that this container keeps its mappings in an array data structure,
 using a binary search to find keys.  The implementation is not intended to be appropriate for
 data structures
 that may contain large numbers of items.  It is generally slower than a traditional
 HashMap, since lookups require a binary search and adds and removes require inserting
 and deleting entries in the array.  For containers holding up to hundreds of items,
 the performance difference is not significant, less than 50%.</p>
 <p>To help with performance, the container includes an optimization when removing
 keys: instead of compacting its array immediately, it leaves the removed entry marked
 as deleted.  The entry can then be re-used for the same key, or compacted later in
 a single garbage collection step of all removed entries.  This garbage collection will
 need to be performed at any time the array needs to be grown or the the map size or
 entry values are retrieved.</p>
 <p>It is possible to iterate over the items in this container using
 <code>keyAt(int)</code> and <code>valueAt(int)</code>. Iterating over the keys using
 <code>keyAt(int)</code> with ascending values of the index will return the
 keys in ascending order, or the values corresponding to the keys in ascending
 order in the case of <code>valueAt(int)<code>.</p>
 */
@interface AndroidUtilSparseArray : NSObject < NSCopying >

#pragma mark Public

/*!
 @brief Creates a new SparseArray containing no mappings.
 */
- (instancetype)init;

/*!
 @brief Creates a new SparseArray containing no mappings that will not
 require any additional memory allocation to store the specified
 number of mappings.
 If you supply an initial capacity of 0, the
 sparse array will be initialized with a light-weight representation
 not requiring any additional array allocations.
 */
- (instancetype)initWithInt:(jint)initialCapacity;

/*!
 @brief Puts a key/value pair into the array, optimizing for the case where
 the key is greater than all existing keys in the array.
 */
- (void)appendWithInt:(jint)key
               withId:(id)value;

/*!
 @brief Removes all key-value mappings from this SparseArray.
 */
- (void)clear;

- (AndroidUtilSparseArray *)clone;

/*!
 @brief Removes the mapping from the specified key, if there was any.
 */
- (void)delete__WithInt:(jint)key;

/*!
 @brief Gets the Object mapped from the specified key, or <code>null</code>
 if no such mapping has been made.
 */
- (id)getWithInt:(jint)key;

/*!
 @brief Gets the Object mapped from the specified key, or the specified Object
 if no such mapping has been made.
 */
- (id)getWithInt:(jint)key
          withId:(id)valueIfKeyNotFound;

/*!
 @brief Returns the index for which <code>keyAt</code> would return the
 specified key, or a negative number if the specified
 key is not mapped.
 */
- (jint)indexOfKeyWithInt:(jint)key;

/*!
 @brief Returns an index for which <code>valueAt</code> would return the
 specified key, or a negative number if no keys map to the
 specified value.
 <p>Beware that this is a linear search, unlike lookups by key,
 and that multiple keys can map to the same value and this will
 find only one of them.
 <p>Note also that unlike most collections' <code>indexOf</code> methods,
 this method compares values using <code>==</code> rather than <code>equals</code>.
 */
- (jint)indexOfValueWithId:(id)value;

/*!
 @brief Given an index in the range <code>0...size()-1</code>, returns
 the key from the <code>index</code>th key-value mapping that this
 SparseArray stores.
 <p>The keys corresponding to indices in ascending order are guaranteed to
 be in ascending order, e.g., <code>keyAt(0)</code> will return the
 smallest key and <code>keyAt(size()-1)</code> will return the largest
 key.</p>
 */
- (jint)keyAtWithInt:(jint)index;

/*!
 @brief Adds a mapping from the specified key to the specified value,
 replacing the previous mapping from the specified key if there
 was one.
 */
- (void)putWithInt:(jint)key
            withId:(id)value;

/*!
 @brief Alias for <code>delete(int)</code>.
 */
- (void)removeWithInt:(jint)key;

/*!
 @brief Removes the mapping at the specified index.
 */
- (void)removeAtWithInt:(jint)index;

/*!
 @brief Remove a range of mappings as a batch.
 @param index Index to begin at
 @param size Number of mappings to remove
 */
- (void)removeAtRangeWithInt:(jint)index
                     withInt:(jint)size;

/*!
 @brief Given an index in the range <code>0...size()-1</code>, sets a new
 value for the <code>index</code>th key-value mapping that this
 SparseArray stores.
 */
- (void)setValueAtWithInt:(jint)index
                   withId:(id)value;

/*!
 @brief Returns the number of key-value mappings that this SparseArray
 currently stores.
 */
- (jint)size;

/*!
 @brief 
 <p>This implementation composes a string by iterating over its mappings.
 If
 this map contains itself as a value, the string "(this Map)"
 will appear in its place.
 */
- (NSString *)description;

/*!
 @brief Given an index in the range <code>0...size()-1</code>, returns
 the value from the <code>index</code>th key-value mapping that this
 SparseArray stores.
 <p>The values corresponding to indices in ascending order are guaranteed
 to be associated with keys in ascending order, e.g.,
 <code>valueAt(0)</code> will return the value associated with the
 smallest key and <code>valueAt(size()-1)</code> will return the value
 associated with the largest key.</p>
 */
- (id)valueAtWithInt:(jint)index;

@end

J2OBJC_STATIC_INIT(AndroidUtilSparseArray)

FOUNDATION_EXPORT void AndroidUtilSparseArray_init(AndroidUtilSparseArray *self);

FOUNDATION_EXPORT AndroidUtilSparseArray *new_AndroidUtilSparseArray_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void AndroidUtilSparseArray_initWithInt_(AndroidUtilSparseArray *self, jint initialCapacity);

FOUNDATION_EXPORT AndroidUtilSparseArray *new_AndroidUtilSparseArray_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilSparseArray)

#endif // _AndroidUtilSparseArray_H_
