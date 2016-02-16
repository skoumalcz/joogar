//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/jar/JarVerifier.java
//

#ifndef _JavaUtilJarJarVerifier_H_
#define _JavaUtilJarJarVerifier_H_

#include "J2ObjC_header.h"
#include "java/io/OutputStream.h"

@class IOSByteArray;
@class IOSObjectArray;
@class JavaSecurityMessageDigest;
@class JavaUtilHashMap;
@class JavaUtilHashtable;
@class JavaUtilJarJarVerifier_VerifierEntry;
@class JavaUtilJarManifest;

/*!
 @brief Non-public class used by <code>JarFile</code> and <code>JarInputStream</code> to manage
 the verification of signed JARs.
 <code>JarFile</code> and <code>JarInputStream</code>
 objects are expected to have a <code>JarVerifier</code> instance member which
 can be used to carry out the tasks associated with verifying a signed JAR.
 These tasks would typically include:
 <ul>
 <li>verification of all signed signature files
 <li>confirmation that all signed data was signed only by the party or parties
 specified in the signature block data
 <li>verification that the contents of all signature files (i.e. <code>.SF</code>
 files) agree with the JAR entries information found in the JAR manifest.
 </ul>
 */
@interface JavaUtilJarJarVerifier : NSObject

#pragma mark Package-Private

/*!
 @brief Constructs and returns a new instance of <code>JarVerifier</code>.
 @param name
 the name of the JAR file being verified.
 */
- (instancetype)initWithNSString:(NSString *)name
         withJavaUtilJarManifest:(JavaUtilJarManifest *)manifest
             withJavaUtilHashMap:(JavaUtilHashMap *)metaEntries;

/*!
 @brief Add a new meta entry to the internal collection of data held on each JAR
 entry in the <code>META-INF</code> directory including the manifest
 file itself.
 Files associated with the signing of a JAR would also be
 added to this collection.
 @param name
 the name of the file located in the <code>META-INF</code>
 directory.
 @param buf
 the file bytes for the file called <code>name</code>.
 */
- (void)addMetaEntryWithNSString:(NSString *)name
                   withByteArray:(IOSByteArray *)buf;

/*!
 @brief Returns all of the <code>java.security.cert.Certificate</code> chains that
 were used to verify the signature on the JAR entry called
 <code>name</code>.
 Callers must not modify the returned arrays.
 @param name
 the name of a JAR entry.
 @return an array of <code>java.security.cert.Certificate</code> chains.
 */
- (IOSObjectArray *)getCertificateChainsWithNSString:(NSString *)name;

/*!
 @brief Invoked for each new JAR entry read operation from the input
 stream.
 This method constructs and returns a new <code>VerifierEntry</code>
 which contains the certificates used to sign the entry and its hash value
 as specified in the JAR MANIFEST format.
 @param name
 the name of an entry in a JAR file which is <b>not</b> in the
 <code>META-INF</code> directory.
 @return a new instance of <code>VerifierEntry</code> which can be used by
 callers as an <code>OutputStream</code>.
 */
- (JavaUtilJarJarVerifier_VerifierEntry *)initEntryWithNSString:(NSString *)name OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a <code>boolean</code> indication of whether or not the
 associated jar file is signed.
 @return <code>true</code> if the JAR is signed, <code>false</code>
 otherwise.
 */
- (jboolean)isSignedJar;

/*!
 @brief If the associated JAR file is signed, check on the validity of all of the
 known signatures.
 @return <code>true</code> if the associated JAR is signed and an internal
 check verifies the validity of the signature(s). <code>false</code> if
 the associated JAR file has no entries at all in its <code>META-INF</code>
  directory. This situation is indicative of an invalid
 JAR file.
 <p>
 Will also return <code>true</code> if the JAR file is <i>not</i>
 signed.
 @throws SecurityException
 if the JAR file is signed and it is determined that a
 signature block file contains an invalid signature for the
 corresponding signature file.
 */
- (jboolean)readCertificates;

/*!
 @brief Remove all entries from the internal collection of data held about each
 JAR entry in the <code>META-INF</code> directory.
 */
- (void)removeMetaEntries;

@end

J2OBJC_STATIC_INIT(JavaUtilJarJarVerifier)

FOUNDATION_EXPORT void JavaUtilJarJarVerifier_initWithNSString_withJavaUtilJarManifest_withJavaUtilHashMap_(JavaUtilJarJarVerifier *self, NSString *name, JavaUtilJarManifest *manifest, JavaUtilHashMap *metaEntries);

FOUNDATION_EXPORT JavaUtilJarJarVerifier *new_JavaUtilJarJarVerifier_initWithNSString_withJavaUtilJarManifest_withJavaUtilHashMap_(NSString *name, JavaUtilJarManifest *manifest, JavaUtilHashMap *metaEntries) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilJarJarVerifier)

/*!
 @brief Stores and a hash and a message digest and verifies that massage digest
 matches the hash.
 */
@interface JavaUtilJarJarVerifier_VerifierEntry : JavaIoOutputStream

#pragma mark Public

/*!
 @brief Updates a digest with byte array.
 */
- (void)writeWithByteArray:(IOSByteArray *)buf
                   withInt:(jint)off
                   withInt:(jint)nbytes;

/*!
 @brief Updates a digest with one byte.
 */
- (void)writeWithInt:(jint)value;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)name
   withJavaSecurityMessageDigest:(JavaSecurityMessageDigest *)digest
                   withByteArray:(IOSByteArray *)hash_
withJavaSecurityCertCertificateArray2:(IOSObjectArray *)certChains
           withJavaUtilHashtable:(JavaUtilHashtable *)verifedEntries;

/*!
 @brief Verifies that the digests stored in the manifest match the decrypted
 digests from the .SF file.
 This indicates the validity of the
 signing, not the integrity of the file, as its digest must be
 calculated and verified when its contents are read.
 @throws SecurityException
 if the digest value stored in the manifest does <i>not</i>
 agree with the decrypted digest as recovered from the
 <code>.SF</code> file.
 */
- (void)verify;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilJarJarVerifier_VerifierEntry)

FOUNDATION_EXPORT void JavaUtilJarJarVerifier_VerifierEntry_initWithNSString_withJavaSecurityMessageDigest_withByteArray_withJavaSecurityCertCertificateArray2_withJavaUtilHashtable_(JavaUtilJarJarVerifier_VerifierEntry *self, NSString *name, JavaSecurityMessageDigest *digest, IOSByteArray *hash_, IOSObjectArray *certChains, JavaUtilHashtable *verifedEntries);

FOUNDATION_EXPORT JavaUtilJarJarVerifier_VerifierEntry *new_JavaUtilJarJarVerifier_VerifierEntry_initWithNSString_withJavaSecurityMessageDigest_withByteArray_withJavaSecurityCertCertificateArray2_withJavaUtilHashtable_(NSString *name, JavaSecurityMessageDigest *digest, IOSByteArray *hash_, IOSObjectArray *certChains, JavaUtilHashtable *verifedEntries) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilJarJarVerifier_VerifierEntry)

#endif // _JavaUtilJarJarVerifier_H_