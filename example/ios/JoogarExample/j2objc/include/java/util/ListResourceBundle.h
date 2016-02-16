//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/ListResourceBundle.java
//

#ifndef _JavaUtilListResourceBundle_H_
#define _JavaUtilListResourceBundle_H_

#include "J2ObjC_header.h"
#include "java/util/ResourceBundle.h"

@class IOSObjectArray;
@class JavaUtilHashMap;
@protocol JavaUtilEnumeration;
@protocol JavaUtilSet;

/*!
 @brief <code>ListResourceBundle</code> is the abstract superclass of classes which provide
 resources by implementing the <code>getContents()</code> method to return
 the list of resources.
 @since 1.1
 */
@interface JavaUtilListResourceBundle : JavaUtilResourceBundle {
 @public
  JavaUtilHashMap *table_;
}

#pragma mark Public

/*!
 @brief Constructs a new instance of this class.
 */
- (instancetype)init;

- (id<JavaUtilEnumeration>)getKeys;

- (id)handleGetObjectWithNSString:(NSString *)key;

#pragma mark Protected

/*!
 @brief Returns an <code>Object</code> array containing the resources of this
 <code>ListResourceBundle</code>.
 Each element in the array is an array of two
 elements, the first is the resource key string and the second is the
 resource.
 @return a <code>Object</code> array containing the resources.
 */
- (IOSObjectArray *)getContents;

/*!
 @brief Returns a set of the keys in this ResourceBundle but not in its parents.
 @return a set of the keys in this ResourceBundle but not in its parents.
 @since 1.6
 */
- (id<JavaUtilSet>)handleKeySet;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilListResourceBundle)

J2OBJC_FIELD_SETTER(JavaUtilListResourceBundle, table_, JavaUtilHashMap *)

FOUNDATION_EXPORT void JavaUtilListResourceBundle_init(JavaUtilListResourceBundle *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilListResourceBundle)

#endif // _JavaUtilListResourceBundle_H_
