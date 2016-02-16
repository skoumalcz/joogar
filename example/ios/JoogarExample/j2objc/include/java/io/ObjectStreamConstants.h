//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectStreamConstants.java
//

#ifndef _JavaIoObjectStreamConstants_H_
#define _JavaIoObjectStreamConstants_H_

#include "J2ObjC_header.h"

@class JavaIoSerializablePermission;

#define JavaIoObjectStreamConstants_STREAM_MAGIC -21267
#define JavaIoObjectStreamConstants_STREAM_VERSION 5
#define JavaIoObjectStreamConstants_TC_BASE 112
#define JavaIoObjectStreamConstants_TC_NULL 112
#define JavaIoObjectStreamConstants_TC_REFERENCE 113
#define JavaIoObjectStreamConstants_TC_CLASSDESC 114
#define JavaIoObjectStreamConstants_TC_OBJECT 115
#define JavaIoObjectStreamConstants_TC_STRING 116
#define JavaIoObjectStreamConstants_TC_ARRAY 117
#define JavaIoObjectStreamConstants_TC_CLASS 118
#define JavaIoObjectStreamConstants_TC_BLOCKDATA 119
#define JavaIoObjectStreamConstants_TC_ENDBLOCKDATA 120
#define JavaIoObjectStreamConstants_TC_RESET 121
#define JavaIoObjectStreamConstants_TC_BLOCKDATALONG 122
#define JavaIoObjectStreamConstants_TC_EXCEPTION 123
#define JavaIoObjectStreamConstants_TC_LONGSTRING 124
#define JavaIoObjectStreamConstants_TC_PROXYCLASSDESC 125
#define JavaIoObjectStreamConstants_TC_MAX 126
#define JavaIoObjectStreamConstants_baseWireHandle 8257536
#define JavaIoObjectStreamConstants_PROTOCOL_VERSION_1 1
#define JavaIoObjectStreamConstants_PROTOCOL_VERSION_2 2
#define JavaIoObjectStreamConstants_SC_WRITE_METHOD 1
#define JavaIoObjectStreamConstants_SC_SERIALIZABLE 2
#define JavaIoObjectStreamConstants_SC_EXTERNALIZABLE 4
#define JavaIoObjectStreamConstants_SC_BLOCK_DATA 8
#define JavaIoObjectStreamConstants_TC_ENUM 126
#define JavaIoObjectStreamConstants_SC_ENUM 16

/*!
 @brief A helper interface with constants used by the serialization implementation.
 */
@protocol JavaIoObjectStreamConstants < NSObject, JavaObject >

@end

@interface JavaIoObjectStreamConstants : NSObject

@end

J2OBJC_STATIC_INIT(JavaIoObjectStreamConstants)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, STREAM_MAGIC, jshort)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, STREAM_VERSION, jshort)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_BASE, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_NULL, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_REFERENCE, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_CLASSDESC, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_OBJECT, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_STRING, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_ARRAY, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_CLASS, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_BLOCKDATA, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_ENDBLOCKDATA, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_RESET, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_BLOCKDATALONG, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_EXCEPTION, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_LONGSTRING, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_PROXYCLASSDESC, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_MAX, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, baseWireHandle, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, PROTOCOL_VERSION_1, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, PROTOCOL_VERSION_2, jint)

FOUNDATION_EXPORT JavaIoSerializablePermission *JavaIoObjectStreamConstants_SUBCLASS_IMPLEMENTATION_PERMISSION_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, SUBCLASS_IMPLEMENTATION_PERMISSION_, JavaIoSerializablePermission *)

FOUNDATION_EXPORT JavaIoSerializablePermission *JavaIoObjectStreamConstants_SUBSTITUTION_PERMISSION_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, SUBSTITUTION_PERMISSION_, JavaIoSerializablePermission *)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, SC_WRITE_METHOD, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, SC_SERIALIZABLE, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, SC_EXTERNALIZABLE, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, SC_BLOCK_DATA, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, TC_ENUM, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamConstants, SC_ENUM, jbyte)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectStreamConstants)

#endif // _JavaIoObjectStreamConstants_H_