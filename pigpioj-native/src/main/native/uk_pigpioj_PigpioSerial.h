/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class uk_pigpioj_PigpioSerial */

#ifndef _Included_uk_pigpioj_PigpioSerial
#define _Included_uk_pigpioj_PigpioSerial
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     uk_pigpioj_PigpioSerial
 * Method:    serOpen
 * Signature: (Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioSerial_serOpen
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioSerial
 * Method:    serClose
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioSerial_serClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_pigpioj_PigpioSerial
 * Method:    serWriteByte
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioSerial_serWriteByte
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioSerial
 * Method:    serReadByte
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioSerial_serReadByte
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_pigpioj_PigpioSerial
 * Method:    serWrite
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioSerial_serWrite
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     uk_pigpioj_PigpioSerial
 * Method:    serRead
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioSerial_serRead
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     uk_pigpioj_PigpioSerial
 * Method:    serDataAvailable
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioSerial_serDataAvailable
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
