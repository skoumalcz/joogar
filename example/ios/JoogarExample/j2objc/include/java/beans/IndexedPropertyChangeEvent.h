//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/beans/IndexedPropertyChangeEvent.java
//

#ifndef _JavaBeansIndexedPropertyChangeEvent_H_
#define _JavaBeansIndexedPropertyChangeEvent_H_

#include "J2ObjC_header.h"
#include "java/beans/PropertyChangeEvent.h"

/*!
 @brief A type of <code>PropertyChangeEvent</code> that indicates that an indexed property
 has changed.
 */
@interface JavaBeansIndexedPropertyChangeEvent : JavaBeansPropertyChangeEvent

#pragma mark Public

/*!
 @brief Creates a new property changed event with an indication of the property
 index.
 @param source
 the changed bean.
 @param propertyName
 the changed property, or <code>null</code> to indicate an
 unspecified set of the properties has changed.
 @param oldValue
 the previous value of the property, or <code>null</code> if
 the <code>propertyName</code> is <code>null</code> or the
 previous value is unknown.
 @param newValue
 the new value of the property, or <code>null</code> if the
 <code>propertyName</code> is <code>null</code> or the new
 value is unknown..
 @param index
 the index of the property.
 */
- (instancetype)initWithId:(id)source
              withNSString:(NSString *)propertyName
                    withId:(id)oldValue
                    withId:(id)newValue
                   withInt:(jint)index;

/*!
 @brief Returns the index of the property that was changed in this event.
 */
- (jint)getIndex;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansIndexedPropertyChangeEvent)

FOUNDATION_EXPORT void JavaBeansIndexedPropertyChangeEvent_initWithId_withNSString_withId_withId_withInt_(JavaBeansIndexedPropertyChangeEvent *self, id source, NSString *propertyName, id oldValue, id newValue, jint index);

FOUNDATION_EXPORT JavaBeansIndexedPropertyChangeEvent *new_JavaBeansIndexedPropertyChangeEvent_initWithId_withNSString_withId_withId_withInt_(id source, NSString *propertyName, id oldValue, id newValue, jint index) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansIndexedPropertyChangeEvent)

#endif // _JavaBeansIndexedPropertyChangeEvent_H_