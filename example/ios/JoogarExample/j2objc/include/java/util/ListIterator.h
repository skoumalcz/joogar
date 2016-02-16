//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/ListIterator.java
//

#ifndef _JavaUtilListIterator_H_
#define _JavaUtilListIterator_H_

#include "J2ObjC_header.h"
#include "java/util/Iterator.h"

/*!
 @brief An ListIterator is used to sequence over a List of objects.
 ListIterator can
 move backwards or forwards through the list.
 */
@protocol JavaUtilListIterator < JavaUtilIterator, NSObject, JavaObject >

/*!
 @brief Inserts the specified object into the list between <code>next</code> and
 <code>previous</code>.
 The object inserted will be the previous object.
 @param object
 the object to insert.
 @throws UnsupportedOperationException
 if adding is not supported by the list being iterated.
 @throws ClassCastException
 if the class of the object is inappropriate for the list.
 @throws IllegalArgumentException
 if the object cannot be added to the list.
 */
- (void)addWithId:(id)object;

/*!
 @brief Returns whether there are more elements to iterate.
 @return <code>true</code> if there are more elements, <code>false</code> otherwise.
 */
- (jboolean)hasNext;

/*!
 @brief Returns whether there are previous elements to iterate.
 @return <code>true</code> if there are previous elements, <code>false</code>
 otherwise.
 */
- (jboolean)hasPrevious;

/*!
 @brief Returns the next object in the iteration.
 @return the next object.
 @throws NoSuchElementException
 if there are no more elements.
 */
- (id)next;

/*!
 @brief Returns the index of the next object in the iteration.
 @return the index of the next object, or the size of the list if the
 iterator is at the end.
 @throws NoSuchElementException
 if there are no more elements.
 */
- (jint)nextIndex;

/*!
 @brief Returns the previous object in the iteration.
 @return the previous object.
 @throws NoSuchElementException
 if there are no previous elements.
 */
- (id)previous;

/*!
 @brief Returns the index of the previous object in the iteration.
 @return the index of the previous object, or -1 if the iterator is at the
 beginning.
 @throws NoSuchElementException
 if there are no previous elements.
 */
- (jint)previousIndex;

/*!
 @brief Removes the last object returned by <code>next</code> or <code>previous</code> from
 the list.
 @throws UnsupportedOperationException
 if removing is not supported by the list being iterated.
 @throws IllegalStateException
 if <code>next</code> or <code>previous</code> have not been called, or
 <code>remove</code> or <code>add</code> have already been called after
 the last call to <code>next</code> or <code>previous</code>.
 */
- (void)remove;

/*!
 @brief Replaces the last object returned by <code>next</code> or <code>previous</code>
 with the specified object.
 @param object
 the object to set.
 @throws UnsupportedOperationException
 if setting is not supported by the list being iterated
 @throws ClassCastException
 if the class of the object is inappropriate for the list.
 @throws IllegalArgumentException
 if the object cannot be added to the list.
 @throws IllegalStateException
 if <code>next</code> or <code>previous</code> have not been called, or
 <code>remove</code> or <code>add</code> have already been called after
 the last call to <code>next</code> or <code>previous</code>.
 */
- (void)setWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilListIterator)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilListIterator)

#endif // _JavaUtilListIterator_H_
