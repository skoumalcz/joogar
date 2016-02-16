//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/sun/misc/Unsafe.java
//

#ifndef _SunMiscUnsafe_H_
#define _SunMiscUnsafe_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class JavaLangReflectField;

/*!
 @brief The package name notwithstanding, this class is the quasi-standard
 way for Java code to gain access to and use functionality which,
 when unsupervised, would allow one to break the pointer/type safety
 of Java.
 */
@interface SunMiscUnsafe : NSObject

#pragma mark Public

/*!
 @brief Allocates an instance of the given class without running the constructor.
 The class' <clinit> will be run, if necessary.
 */
- (id)allocateInstanceWithIOSClass:(IOSClass *)c OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Gets the offset from the start of an array object's memory to
 the memory used to store its initial (zeroeth) element.
 @param clazz non-null; class in question; must be an array class
 @return the offset to the initial element
 */
- (jint)arrayBaseOffsetWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Gets the size of each element of the given array class.
 @param clazz non-null; class in question; must be an array class
 @return &gt; 0; the size of each element of the array
 */
- (jint)arrayIndexScaleWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Performs a compare-and-set operation on an <code>int</code>
 field within the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @param expectedValue expected value of the field
 @param newValue new value to store in the field if the contents are
 as expected
 @return <code>true</code> if the new value was in fact stored, and
 <code>false</code> if not
 */
- (jboolean)compareAndSwapIntWithId:(id)obj
                           withLong:(jlong)offset
                            withInt:(jint)expectedValue
                            withInt:(jint)newValue;

/*!
 @brief Performs a compare-and-set operation on a <code>long</code>
 field within the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @param expectedValue expected value of the field
 @param newValue new value to store in the field if the contents are
 as expected
 @return <code>true</code> if the new value was in fact stored, and
 <code>false</code> if not
 */
- (jboolean)compareAndSwapLongWithId:(id)obj
                            withLong:(jlong)offset
                            withLong:(jlong)expectedValue
                            withLong:(jlong)newValue;

/*!
 @brief Performs a compare-and-set operation on an <code>Object</code>
 field (that is, a reference field) within the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @param expectedValue expected value of the field
 @param newValue new value to store in the field if the contents are
 as expected
 @return <code>true</code> if the new value was in fact stored, and
 <code>false</code> if not
 */
- (jboolean)compareAndSwapObjectWithId:(id)obj
                              withLong:(jlong)offset
                                withId:(id)expectedValue
                                withId:(id)newValue;

/*!
 @brief Gets an <code>int</code> field from the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @return the retrieved value
 */
- (jint)getIntWithId:(id)obj
            withLong:(jlong)offset;

/*!
 @brief Gets an <code>int</code> field from the given object,
 using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @return the retrieved value
 */
- (jint)getIntVolatileWithId:(id)obj
                    withLong:(jlong)offset;

/*!
 @brief Gets a <code>long</code> field from the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @return the retrieved value
 */
- (jlong)getLongWithId:(id)obj
              withLong:(jlong)offset;

/*!
 @brief Gets a <code>long</code> field from the given object,
 using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @return the retrieved value
 */
- (jlong)getLongVolatileWithId:(id)obj
                      withLong:(jlong)offset;

/*!
 @brief Gets an <code>Object</code> field from the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @return the retrieved value
 */
- (id)getObjectWithId:(id)obj
             withLong:(jlong)offset;

/*!
 @brief Gets an <code>Object</code> field from the given object,
 using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @return the retrieved value
 */
- (id)getObjectVolatileWithId:(id)obj
                     withLong:(jlong)offset;

/*!
 @brief Gets the unique instance of this class.
 This is only allowed in
 very limited situations.
 */
+ (SunMiscUnsafe *)getUnsafe;

/*!
 @brief Gets the raw byte offset from the start of an object's memory to
 the memory used to store the indicated instance field.
 @param field non-null; the field in question, which must be an
 instance field
 @return the offset to the field
 */
- (jlong)objectFieldOffsetWithJavaLangReflectField:(JavaLangReflectField *)field;

/*!
 @brief Parks the calling thread for the specified amount of time,
 unless the "permit" for the thread is already available (due to
 a previous call to <code>unpark</code>.
 This method may also return
 spuriously (that is, without the thread being told to unpark
 and without the indicated amount of time elapsing).
 <p>See <code>java.util.concurrent.locks.LockSupport</code> for more
 in-depth information of the behavior of this method.</p>
 @param absolute whether the given time value is absolute
 milliseconds-since-the-epoch (<code>true</code>) or relative
 nanoseconds-from-now (<code>false</code>)
 @param time the (absolute millis or relative nanos) time value
 */
- (void)parkWithBoolean:(jboolean)absolute
               withLong:(jlong)time;

/*!
 @brief Stores an <code>int</code> field into the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @param newValue the value to store
 */
- (void)putIntWithId:(id)obj
            withLong:(jlong)offset
             withInt:(jint)newValue;

/*!
 @brief Stores an <code>int</code> field into the given object,
 using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @param newValue the value to store
 */
- (void)putIntVolatileWithId:(id)obj
                    withLong:(jlong)offset
                     withInt:(jint)newValue;

/*!
 @brief Stores a <code>long</code> field into the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @param newValue the value to store
 */
- (void)putLongWithId:(id)obj
             withLong:(jlong)offset
             withLong:(jlong)newValue;

/*!
 @brief Stores a <code>long</code> field into the given object,
 using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @param newValue the value to store
 */
- (void)putLongVolatileWithId:(id)obj
                     withLong:(jlong)offset
                     withLong:(jlong)newValue;

/*!
 @brief Stores an <code>Object</code> field into the given object.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @param newValue the value to store
 */
- (void)putObjectWithId:(id)obj
               withLong:(jlong)offset
                 withId:(id)newValue;

/*!
 @brief Stores an <code>Object</code> field into the given object,
 using <code>volatile</code> semantics.
 @param obj non-null; object containing the field
 @param offset offset to the field within <code>obj</code>
 @param newValue the value to store
 */
- (void)putObjectVolatileWithId:(id)obj
                       withLong:(jlong)offset
                         withId:(id)newValue;

/*!
 @brief Lazy set an int field.
 */
- (void)putOrderedIntWithId:(id)obj
                   withLong:(jlong)offset
                    withInt:(jint)newValue;

/*!
 @brief Lazy set a long field.
 */
- (void)putOrderedLongWithId:(id)obj
                    withLong:(jlong)offset
                    withLong:(jlong)newValue;

/*!
 @brief Lazy set an object field.
 */
- (void)putOrderedObjectWithId:(id)obj
                      withLong:(jlong)offset
                        withId:(id)newValue;

/*!
 @brief Unparks the given object, which must be a <code>Thread</code>.
 <p>See <code>java.util.concurrent.locks.LockSupport</code> for more
 in-depth information of the behavior of this method.</p>
 @param obj non-null; the object to unpark
 */
- (void)unparkWithId:(id)obj;

#pragma mark Package-Private


@end

J2OBJC_STATIC_INIT(SunMiscUnsafe)

FOUNDATION_EXPORT SunMiscUnsafe *SunMiscUnsafe_getUnsafe();

J2OBJC_TYPE_LITERAL_HEADER(SunMiscUnsafe)

#endif // _SunMiscUnsafe_H_