//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicReferenceArray.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicReferenceArray_H_
#define _JavaUtilConcurrentAtomicAtomicReferenceArray_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSObjectArray;

/*!
 @brief An array of object references in which elements may be updated
 atomically.
 See the <code>java.util.concurrent.atomic</code> package
 specification for description of the properties of atomic
 variables.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentAtomicAtomicReferenceArray : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new AtomicReferenceArray with the same length as, and
 all elements copied from, the given array.
 @param array the array to copy elements from
 @throws NullPointerException if array is null
 */
- (instancetype)initWithNSObjectArray:(IOSObjectArray *)array;

/*!
 @brief Creates a new AtomicReferenceArray of the given length, with all
 elements initially null.
 @param length the length of the array
 */
- (instancetype)initWithInt:(jint)length;

/*!
 @brief Atomically sets the element at position <code>i</code> to the given
 updated value if the current value <code>==</code> the expected value.
 @param i the index
 @param expect the expected value
 @param update the new value
 @return true if successful. False return indicates that
 the actual value was not equal to the expected value.
 */
- (jboolean)compareAndSetWithInt:(jint)i
                          withId:(id)expect
                          withId:(id)update;

/*!
 @brief Gets the current value at position <code>i</code>.
 @param i the index
 @return the current value
 */
- (id)getWithInt:(jint)i;

/*!
 @brief Atomically sets the element at position <code>i</code> to the given
 value and returns the old value.
 @param i the index
 @param newValue the new value
 @return the previous value
 */
- (id)getAndSetWithInt:(jint)i
                withId:(id)newValue;

/*!
 @brief Eventually sets the element at position <code>i</code> to the given value.
 @param i the index
 @param newValue the new value
 @since 1.6
 */
- (void)lazySetWithInt:(jint)i
                withId:(id)newValue;

/*!
 @brief Returns the length of the array.
 @return the length of the array
 */
- (jint)length;

/*!
 @brief Sets the element at position <code>i</code> to the given value.
 @param i the index
 @param newValue the new value
 */
- (void)setWithInt:(jint)i
            withId:(id)newValue;

/*!
 @brief Returns the String representation of the current values of array.
 @return the String representation of the current values of array
 */
- (NSString *)description;

/*!
 @brief Atomically sets the element at position <code>i</code> to the given
 updated value if the current value <code>==</code> the expected value.
 <p><a href="package-summary.html#weakCompareAndSet">May fail
 spuriously and does not provide ordering guarantees</a>, so is
 only rarely an appropriate alternative to <code>compareAndSet</code>.
 @param i the index
 @param expect the expected value
 @param update the new value
 @return true if successful
 */
- (jboolean)weakCompareAndSetWithInt:(jint)i
                              withId:(id)expect
                              withId:(id)update;

#pragma mark Package-Private


@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentAtomicAtomicReferenceArray)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicReferenceArray_initWithInt_(JavaUtilConcurrentAtomicAtomicReferenceArray *self, jint length);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReferenceArray *new_JavaUtilConcurrentAtomicAtomicReferenceArray_initWithInt_(jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicReferenceArray_initWithNSObjectArray_(JavaUtilConcurrentAtomicAtomicReferenceArray *self, IOSObjectArray *array);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReferenceArray *new_JavaUtilConcurrentAtomicAtomicReferenceArray_initWithNSObjectArray_(IOSObjectArray *array) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicReferenceArray)

#endif // _JavaUtilConcurrentAtomicAtomicReferenceArray_H_
