//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/FileDescriptorChannel.java
//

#ifndef _JavaNioFileDescriptorChannel_H_
#define _JavaNioFileDescriptorChannel_H_

#include "J2ObjC_header.h"

@class JavaIoFileDescriptor;

/*!
 @brief Allows access to the FileDescriptor underlying a Channel.
 */
@protocol JavaNioFileDescriptorChannel < NSObject, JavaObject >

- (JavaIoFileDescriptor *)getFD;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileDescriptorChannel)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileDescriptorChannel)

#endif // _JavaNioFileDescriptorChannel_H_
