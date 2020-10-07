/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class uk_pigpioj_PigpioWaveform */

#ifndef _Included_uk_pigpioj_PigpioWaveform
#define _Included_uk_pigpioj_PigpioWaveform
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveClear
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveClear
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveAddNew
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveAddNew
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveAddGeneric
 * Signature: ([Luk/pigpioj/GpioPulse;)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveAddGeneric
  (JNIEnv *, jclass, jobjectArray);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveAddSerial
 * Signature: (IIIII[B)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveAddSerial
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jbyteArray);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveCreate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveCreate
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveCreatePad
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveCreatePad
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveDelete
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveDelete
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveTxSend
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveTxSend
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveChain
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveChain
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveTxAt
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveTxAt
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveTxBusy
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveTxBusy
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveTxStop
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveTxStop
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveGetMicros
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveGetMicros
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveGetHighMicros
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveGetHighMicros
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveGetMaxMicros
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveGetMaxMicros
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveGetPulses
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveGetPulses
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveGetHighPulses
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveGetHighPulses
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveGetMaxPulses
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveGetMaxPulses
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveGetCbs
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveGetCbs
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveGetHighCbs
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveGetHighCbs
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioWaveform
 * Method:    gpioWaveGetMaxCbs
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioWaveform_gpioWaveGetMaxCbs
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif