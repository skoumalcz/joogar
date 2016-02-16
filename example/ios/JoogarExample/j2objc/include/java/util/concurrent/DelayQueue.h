//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/DelayQueue.java
//

#ifndef _JavaUtilConcurrentDelayQueue_H_
#define _JavaUtilConcurrentDelayQueue_H_

#include "J2ObjC_header.h"
#include "java/util/AbstractQueue.h"
#include "java/util/concurrent/BlockingQueue.h"

@class IOSObjectArray;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentDelayed;
@protocol JavaUtilIterator;

/*!
 @brief An unbounded blocking queue of
 <code>Delayed</code> elements, in which an element can only be taken
 when its delay has expired.
 The <em>head</em> of the queue is that
 <code>Delayed</code> element whose delay expired furthest in the
 past.  If no delay has expired there is no head and <code>poll</code>
 will return <code>null</code>. Expiration occurs when an element's
 <code>getDelay(TimeUnit.NANOSECONDS)</code> method returns a value less
 than or equal to zero.  Even though unexpired elements cannot be
 removed using <code>take</code> or <code>poll</code>, they are otherwise
 treated as normal elements. For example, the <code>size</code> method
 returns the count of both expired and unexpired elements.
 This queue does not permit null elements.
 <p>This class and its iterator implement all of the
 <em>optional</em> methods of the <code>Collection</code> and <code>Iterator</code>
  interfaces.  The Iterator provided in method <code>iterator()</code>
  is <em>not</em> guaranteed to traverse the elements of
 the DelayQueue in any particular order.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentDelayQueue : JavaUtilAbstractQueue < JavaUtilConcurrentBlockingQueue >

#pragma mark Public

/*!
 @brief Creates a new <code>DelayQueue</code> that is initially empty.
 */
- (instancetype)init;

/*!
 @brief Creates a <code>DelayQueue</code> initially containing the elements of the
 given collection of <code>Delayed</code> instances.
 @param c the collection of elements to initially contain
 @throws NullPointerException if the specified collection or any
 of its elements are null
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Inserts the specified element into this delay queue.
 @param e the element to add
 @return <code>true</code> (as specified by <code>Collection.add</code>)
 @throws NullPointerException if the specified element is null
 */
- (jboolean)addWithId:(id<JavaUtilConcurrentDelayed>)e;

/*!
 @brief Atomically removes all of the elements from this delay queue.
 The queue will be empty after this call returns.
 Elements with an unexpired delay are not waited for; they are
 simply discarded from the queue.
 */
- (void)clear;

/*!
 @throws UnsupportedOperationException
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @throws UnsupportedOperationException
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

/*!
 @brief Returns an iterator over all the elements (both expired and
 unexpired) in this queue.
 The iterator does not return the
 elements in any particular order.
 <p>The returned iterator is a "weakly consistent" iterator that
 will never throw <code>ConcurrentModificationException</code>
 , and guarantees to traverse
 elements as they existed upon construction of the iterator, and
 may (but is not guaranteed to) reflect any modifications
 subsequent to construction.
 @return an iterator over the elements in this queue
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Inserts the specified element into this delay queue.
 @param e the element to add
 @return <code>true</code>
 @throws NullPointerException if the specified element is null
 */
- (jboolean)offerWithId:(id<JavaUtilConcurrentDelayed>)e;

/*!
 @brief Inserts the specified element into this delay queue.
 As the queue is
 unbounded this method will never block.
 @param e the element to add
 @param timeout This parameter is ignored as the method never blocks
 @param unit This parameter is ignored as the method never blocks
 @return <code>true</code>
 @throws NullPointerException
 */
- (jboolean)offerWithId:(id<JavaUtilConcurrentDelayed>)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

/*!
 @brief Retrieves, but does not remove, the head of this queue, or
 returns <code>null</code> if this queue is empty.
 Unlike
 <code>poll</code>, if no expired elements are available in the queue,
 this method returns the element that will expire next,
 if one exists.
 @return the head of this queue, or <code>null</code> if this
 queue is empty
 */
- (id)peek;

/*!
 @brief Retrieves and removes the head of this queue, or returns <code>null</code>
 if this queue has no elements with an expired delay.
 @return the head of this queue, or <code>null</code> if this
 queue has no elements with an expired delay
 */
- (id)poll;

/*!
 @brief Retrieves and removes the head of this queue, waiting if necessary
 until an element with an expired delay is available on this queue,
 or the specified wait time expires.
 @return the head of this queue, or <code>null</code> if the
 specified waiting time elapses before an element with
 an expired delay becomes available
 @throws InterruptedException
 */
- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

/*!
 @brief Inserts the specified element into this delay queue.
 As the queue is
 unbounded this method will never block.
 @param e the element to add
 @throws NullPointerException
 */
- (void)putWithId:(id<JavaUtilConcurrentDelayed>)e;

/*!
 @brief Always returns <code>Integer.MAX_VALUE</code> because
 a <code>DelayQueue</code> is not capacity constrained.
 @return <code>Integer.MAX_VALUE</code>
 */
- (jint)remainingCapacity;

/*!
 @brief Removes a single instance of the specified element from this
 queue, if it is present, whether or not it has expired.
 */
- (jboolean)removeWithId:(id)o;

- (jint)size;

/*!
 @brief Retrieves and removes the head of this queue, waiting if necessary
 until an element with an expired delay is available on this queue.
 @return the head of this queue
 @throws InterruptedException
 */
- (id)take;

/*!
 @brief Returns an array containing all of the elements in this queue.
 The returned array elements are in no particular order.
 <p>The returned array will be "safe" in that no references to it are
 maintained by this queue.  (In other words, this method must allocate
 a new array).  The caller is thus free to modify the returned array.
 <p>This method acts as bridge between array-based and collection-based
 APIs.
 @return an array containing all of the elements in this queue
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Returns an array containing all of the elements in this queue; the
 runtime type of the returned array is that of the specified array.
 The returned array elements are in no particular order.
 If the queue fits in the specified array, it is returned therein.
 Otherwise, a new array is allocated with the runtime type of the
 specified array and the size of this queue.
 <p>If this queue fits in the specified array with room to spare
 (i.e., the array has more elements than this queue), the element in
 the array immediately following the end of the queue is set to
 <code>null</code>.
 <p>Like the <code>toArray()</code> method, this method acts as bridge between
 array-based and collection-based APIs.  Further, this method allows
 precise control over the runtime type of the output array, and may,
 under certain circumstances, be used to save allocation costs.
 <p>The following code can be used to dump a delay queue into a newly
 allocated array of <code>Delayed</code>:
 @code
  Delayed[] a = q.toArray(new Delayed[0]);
@endcode
 Note that <code>toArray(new Object[0])</code> is identical in function to
 <code>toArray()</code>.
 @param a the array into which the elements of the queue are to
 be stored, if it is big enough; otherwise, a new array of the
 same runtime type is allocated for this purpose
 @return an array containing all of the elements in this queue
 @throws ArrayStoreException if the runtime type of the specified array
 is not a supertype of the runtime type of every element in
 this queue
 @throws NullPointerException if the specified array is null
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

#pragma mark Package-Private

/*!
 @brief Identity-based version for use in Itr.remove
 */
- (void)removeEQWithId:(id)o;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentDelayQueue)

FOUNDATION_EXPORT void JavaUtilConcurrentDelayQueue_init(JavaUtilConcurrentDelayQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentDelayQueue *new_JavaUtilConcurrentDelayQueue_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentDelayQueue_initWithJavaUtilCollection_(JavaUtilConcurrentDelayQueue *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilConcurrentDelayQueue *new_JavaUtilConcurrentDelayQueue_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentDelayQueue)

#endif // _JavaUtilConcurrentDelayQueue_H_
