//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/io/GwtWorkarounds.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoGwtWorkarounds_INCLUDE_ALL")
#if ComGoogleCommonIoGwtWorkarounds_RESTRICT
#define ComGoogleCommonIoGwtWorkarounds_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoGwtWorkarounds_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoGwtWorkarounds_RESTRICT

#if !defined (_ComGoogleCommonIoGwtWorkarounds_) && (ComGoogleCommonIoGwtWorkarounds_INCLUDE_ALL || ComGoogleCommonIoGwtWorkarounds_INCLUDE)
#define _ComGoogleCommonIoGwtWorkarounds_

@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaIoReader;
@class JavaIoWriter;
@protocol ComGoogleCommonIoGwtWorkarounds_ByteInput;
@protocol ComGoogleCommonIoGwtWorkarounds_ByteOutput;
@protocol ComGoogleCommonIoGwtWorkarounds_CharInput;
@protocol ComGoogleCommonIoGwtWorkarounds_CharOutput;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonIoGwtWorkarounds : NSObject

#pragma mark Package-Private

+ (id<ComGoogleCommonIoGwtWorkarounds_CharInput>)asCharInputWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

+ (id<ComGoogleCommonIoGwtWorkarounds_CharInput>)asCharInputWithJavaIoReader:(JavaIoReader *)reader;

+ (id<ComGoogleCommonIoGwtWorkarounds_CharOutput>)asCharOutputWithJavaIoWriter:(JavaIoWriter *)writer;

+ (JavaIoInputStream *)asInputStreamWithComGoogleCommonIoGwtWorkarounds_ByteInput:(id<ComGoogleCommonIoGwtWorkarounds_ByteInput>)input;

+ (JavaIoOutputStream *)asOutputStreamWithComGoogleCommonIoGwtWorkarounds_ByteOutput:(id<ComGoogleCommonIoGwtWorkarounds_ByteOutput>)output;

+ (id<ComGoogleCommonIoGwtWorkarounds_CharOutput>)stringBuilderOutputWithInt:(jint)initialSize;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoGwtWorkarounds)

FOUNDATION_EXPORT id<ComGoogleCommonIoGwtWorkarounds_CharInput> ComGoogleCommonIoGwtWorkarounds_asCharInputWithJavaIoReader_(JavaIoReader *reader);

FOUNDATION_EXPORT id<ComGoogleCommonIoGwtWorkarounds_CharInput> ComGoogleCommonIoGwtWorkarounds_asCharInputWithJavaLangCharSequence_(id<JavaLangCharSequence> chars);

FOUNDATION_EXPORT JavaIoInputStream *ComGoogleCommonIoGwtWorkarounds_asInputStreamWithComGoogleCommonIoGwtWorkarounds_ByteInput_(id<ComGoogleCommonIoGwtWorkarounds_ByteInput> input);

FOUNDATION_EXPORT JavaIoOutputStream *ComGoogleCommonIoGwtWorkarounds_asOutputStreamWithComGoogleCommonIoGwtWorkarounds_ByteOutput_(id<ComGoogleCommonIoGwtWorkarounds_ByteOutput> output);

FOUNDATION_EXPORT id<ComGoogleCommonIoGwtWorkarounds_CharOutput> ComGoogleCommonIoGwtWorkarounds_asCharOutputWithJavaIoWriter_(JavaIoWriter *writer);

FOUNDATION_EXPORT id<ComGoogleCommonIoGwtWorkarounds_CharOutput> ComGoogleCommonIoGwtWorkarounds_stringBuilderOutputWithInt_(jint initialSize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoGwtWorkarounds)

#endif

#if !defined (_ComGoogleCommonIoGwtWorkarounds_CharInput_) && (ComGoogleCommonIoGwtWorkarounds_INCLUDE_ALL || ComGoogleCommonIoGwtWorkarounds_CharInput_INCLUDE)
#define _ComGoogleCommonIoGwtWorkarounds_CharInput_

@protocol ComGoogleCommonIoGwtWorkarounds_CharInput < NSObject, JavaObject >

- (jint)read;

- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoGwtWorkarounds_CharInput)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoGwtWorkarounds_CharInput)

#endif

#if !defined (_ComGoogleCommonIoGwtWorkarounds_ByteInput_) && (ComGoogleCommonIoGwtWorkarounds_INCLUDE_ALL || ComGoogleCommonIoGwtWorkarounds_ByteInput_INCLUDE)
#define _ComGoogleCommonIoGwtWorkarounds_ByteInput_

@protocol ComGoogleCommonIoGwtWorkarounds_ByteInput < NSObject, JavaObject >

- (jint)read;

- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoGwtWorkarounds_ByteInput)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoGwtWorkarounds_ByteInput)

#endif

#if !defined (_ComGoogleCommonIoGwtWorkarounds_ByteOutput_) && (ComGoogleCommonIoGwtWorkarounds_INCLUDE_ALL || ComGoogleCommonIoGwtWorkarounds_ByteOutput_INCLUDE)
#define _ComGoogleCommonIoGwtWorkarounds_ByteOutput_

@protocol ComGoogleCommonIoGwtWorkarounds_ByteOutput < NSObject, JavaObject >

- (void)writeWithByte:(jbyte)b;

- (void)flush;

- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoGwtWorkarounds_ByteOutput)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoGwtWorkarounds_ByteOutput)

#endif

#if !defined (_ComGoogleCommonIoGwtWorkarounds_CharOutput_) && (ComGoogleCommonIoGwtWorkarounds_INCLUDE_ALL || ComGoogleCommonIoGwtWorkarounds_CharOutput_INCLUDE)
#define _ComGoogleCommonIoGwtWorkarounds_CharOutput_

@protocol ComGoogleCommonIoGwtWorkarounds_CharOutput < NSObject, JavaObject >

- (void)writeWithChar:(jchar)c;

- (void)flush;

- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoGwtWorkarounds_CharOutput)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoGwtWorkarounds_CharOutput)

#endif

#pragma pop_macro("ComGoogleCommonIoGwtWorkarounds_INCLUDE_ALL")
