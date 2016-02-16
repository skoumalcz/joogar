//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Collection.java
//

#ifndef _JavaUtilCollection_H_
#define _JavaUtilCollection_H_

#include "J2ObjC_header.h"
#include "java/lang/Iterable.h"

@class IOSObjectArray;
@protocol JavaUtilIterator;

/*!
 @brief <code>Collection</code> is the root of the collection hierarchy.
 It defines operations on
 data collections and the behavior that they will have in all implementations
 of <code>Collection</code>s.
 All direct or indirect implementations of <code>Collection</code> should implement at
 least two constructors. One with no parameters which creates an empty
 collection and one with a parameter of type <code>Collection</code>. This second
 constructor can be used to create a collection of different type as the
 initial collection but with the same elements. Implementations of <code>Collection</code>
 cannot be forced to implement these two constructors but at least all
 implementations under <code>java.util</code> do.
 Methods that change the content of a collection throw an
 <code>UnsupportedOperationException</code> if the underlying collection does not
 support that operation, though it's not mandatory to throw such an <code>Exception</code>
 in cases where the requested operation would not change the collection. In
 these cases it's up to the implementation whether it throws an
 <code>UnsupportedOperationException</code> or not.
 Methods marked with (optional) can throw an
 <code>UnsupportedOperationException</code> if the underlying collection doesn't
 support that method.
 */
@protocol JavaUtilCollection < JavaLangIterable, NSObject, JavaObject >

/*!
 @brief Attempts to add <code>object</code> to the contents of this
 <code>Collection</code> (optional).
 After this method finishes successfully it is guaranteed that the object
 is contained in the collection.
 If the collection was modified it returns <code>true</code>, <code>false</code> if
 no changes were made.
 An implementation of <code>Collection</code> may narrow the set of accepted
 objects, but it has to specify this in the documentation. If the object
 to be added does not meet this restriction, then an
 <code>IllegalArgumentException</code> is thrown.
 If a collection does not yet contain an object that is to be added and
 adding the object fails, this method <i>must</i> throw an appropriate
 unchecked Exception. Returning false is not permitted in this case
 because it would violate the postcondition that the element will be part
 of the collection after this method finishes.
 @param object
 the object to add.
 @return <code>true</code> if this <code>Collection</code> is
 modified, <code>false</code> otherwise.
 @throws UnsupportedOperationException
 if adding to this <code>Collection</code> is not supported.
 @throws ClassCastException
 if the class of the object is inappropriate for this
 collection.
 @throws IllegalArgumentException
 if the object cannot be added to this <code>Collection</code>.
 @throws NullPointerException
 if null elements cannot be added to the <code>Collection</code>.
 */
- (jboolean)addWithId:(id)object;

/*!
 @brief Attempts to add all of the objects contained in <code>Collection</code>
 to the contents of this <code>Collection</code> (optional).
 If the passed <code>Collection</code>
 is changed during the process of adding elements to this <code>Collection</code>, the
 behavior is not defined.
 @param collection
 the <code>Collection</code> of objects.
 @return <code>true</code> if this <code>Collection</code> is modified, <code>false</code>
 otherwise.
 @throws UnsupportedOperationException
 if adding to this <code>Collection</code> is not supported.
 @throws ClassCastException
 if the class of an object is inappropriate for this
 <code>Collection</code>.
 @throws IllegalArgumentException
 if an object cannot be added to this <code>Collection</code>.
 @throws NullPointerException
 if <code>collection</code> is <code>null</code>, or if it
 contains <code>null</code> elements and this <code>Collection</code> does
 not support such elements.
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Removes all elements from this <code>Collection</code>, leaving it empty (optional).
 @throws UnsupportedOperationException
 if removing from this <code>Collection</code> is not supported.
 */
- (void)clear;

/*!
 @brief Tests whether this <code>Collection</code> contains the specified object.
 Returns
 <code>true</code> if and only if at least one element <code>elem</code> in this
 <code>Collection</code> meets following requirement:
 <code>(object==null ? elem==null : object.equals(elem))</code>.
 @param object
 the object to search for.
 @return <code>true</code> if object is an element of this <code>Collection</code>,
 <code>false</code> otherwise.
 @throws ClassCastException
 if the object to look for isn't of the correct
 type.
 @throws NullPointerException
 if the object to look for is <code>null</code> and this
 <code>Collection</code> doesn't support <code>null</code> elements.
 */
- (jboolean)containsWithId:(id)object;

/*!
 @brief Tests whether this <code>Collection</code> contains all objects contained in the
 specified <code>Collection</code>.
 If an element <code>elem</code> is contained several
 times in the specified <code>Collection</code>, the method returns <code>true</code> even
 if <code>elem</code> is contained only once in this <code>Collection</code>.
 @param collection
 the collection of objects.
 @return <code>true</code> if all objects in the specified <code>Collection</code> are
 elements of this <code>Collection</code>, <code>false</code> otherwise.
 @throws ClassCastException
 if one or more elements of <code>collection</code> isn't of the
 correct type.
 @throws NullPointerException
 if <code>collection</code> contains at least one <code>null</code>
 element and this <code>Collection</code> doesn't support <code>null</code>
 elements.
 @throws NullPointerException
 if <code>collection</code> is <code>null</code>.
 */
- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Compares the argument to the receiver, and returns true if they represent
 the <em>same</em> object using a class specific comparison.
 @param object
 the object to compare with this object.
 @return <code>true</code> if the object is the same as this object and
 <code>false</code> if it is different from this object.
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Returns an integer hash code for the receiver.
 Objects which are equal
 return the same value for this method.
 @return the receiver's hash.
 */
- (NSUInteger)hash;

/*!
 @brief Returns if this <code>Collection</code> contains no elements.
 @return <code>true</code> if this <code>Collection</code> has no elements, <code>false</code>
 otherwise.
 */
- (jboolean)isEmpty;

/*!
 @brief Returns an instance of <code>Iterator</code> that may be used to access the
 objects contained by this <code>Collection</code>.
 The order in which the elements are
 returned by the iterator is not defined. Only if the instance of the
 <code>Collection</code> has a defined order the elements are returned in that order.
 @return an iterator for accessing the <code>Collection</code> contents.
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Removes one instance of the specified object from this <code>Collection</code> if one
 is contained (optional).
 The element <code>elem</code> that is removed
 complies with <code>(object==null ? elem==null : object.equals(elem)</code>.
 @param object
 the object to remove.
 @return <code>true</code> if this <code>Collection</code> is modified, <code>false</code>
 otherwise.
 @throws UnsupportedOperationException
 if removing from this <code>Collection</code> is not supported.
 @throws ClassCastException
 if the object passed is not of the correct type.
 @throws NullPointerException
 if <code>object</code> is <code>null</code> and this <code>Collection</code>
 doesn't support <code>null</code> elements.
 */
- (jboolean)removeWithId:(id)object;

/*!
 @brief Removes all occurrences in this <code>Collection</code> of each object in the
 specified <code>Collection</code> (optional).
 After this method returns none of the
 elements in the passed <code>Collection</code> can be found in this <code>Collection</code>
 anymore.
 @param collection
 the collection of objects to remove.
 @return <code>true</code> if this <code>Collection</code> is modified, <code>false</code>
 otherwise.
 @throws UnsupportedOperationException
 if removing from this <code>Collection</code> is not supported.
 @throws ClassCastException
 if one or more elements of <code>collection</code>
 isn't of the correct type.
 @throws NullPointerException
 if <code>collection</code> contains at least one
 <code>null</code> element and this <code>Collection</code> doesn't support
 <code>null</code> elements.
 @throws NullPointerException
 if <code>collection</code> is <code>null</code>.
 */
- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Removes all objects from this <code>Collection</code> that are not also found in the
 <code>Collection</code> passed (optional).
 After this method returns this <code>Collection</code>
 will only contain elements that also can be found in the <code>Collection</code>
 passed to this method.
 @param collection
 the collection of objects to retain.
 @return <code>true</code> if this <code>Collection</code> is modified, <code>false</code>
 otherwise.
 @throws UnsupportedOperationException
 if removing from this <code>Collection</code> is not supported.
 @throws ClassCastException
 if one or more elements of <code>collection</code>
 isn't of the correct type.
 @throws NullPointerException
 if <code>collection</code> contains at least one
 <code>null</code> element and this <code>Collection</code> doesn't support
 <code>null</code> elements.
 @throws NullPointerException
 if <code>collection</code> is <code>null</code>.
 */
- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Returns a count of how many objects this <code>Collection</code> contains.
 @return how many objects this <code>Collection</code> contains, or Integer.MAX_VALUE
 if there are more than Integer.MAX_VALUE elements in this
 <code>Collection</code>.
 */
- (jint)size;

/*!
 @brief Returns a new array containing all elements contained in this <code>Collection</code>.
 If the implementation has ordered elements it will return the element
 array in the same order as an iterator would return them.
 The array returned does not reflect any changes of the <code>Collection</code>. A new
 array is created even if the underlying data structure is already an
 array.
 @return an array of the elements from this <code>Collection</code>.
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Returns an array containing all elements contained in this <code>Collection</code>.
 If
 the specified array is large enough to hold the elements, the specified
 array is used, otherwise an array of the same type is created. If the
 specified array is used and is larger than this <code>Collection</code>, the array
 element following the <code>Collection</code> elements is set to null.
 If the implementation has ordered elements it will return the element
 array in the same order as an iterator would return them.
 <code>toArray(new Object[0])</code> behaves exactly the same way as
 <code>toArray()</code> does.
 @param array
 the array.
 @return an array of the elements from this <code>Collection</code>.
 @throws ArrayStoreException
 if the type of an element in this <code>Collection</code> cannot be
 stored in the type of the specified array.
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilCollection)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilCollection)

#endif // _JavaUtilCollection_H_
