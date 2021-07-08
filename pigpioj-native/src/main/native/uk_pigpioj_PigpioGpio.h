/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class uk_pigpioj_PigpioGpio */

#ifndef _Included_uk_pigpioj_PigpioGpio
#define _Included_uk_pigpioj_PigpioGpio
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    initialise
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_initialise
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    terminate
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_uk_pigpioj_PigpioGpio_terminate
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    getVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_getVersion
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    getHardwareRevision
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_getHardwareRevision
  (JNIEnv *, jclass);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    getMode
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_getMode
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    setMode
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_setMode
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    setPullUpDown
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_setPullUpDown
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    read
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_read
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    write
 * Signature: (IZ)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_write
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    getPWMDutyCycle
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_getPWMDutyCycle
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    setPWMDutyCycle
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_setPWMDutyCycle
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    getPWMRange
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_getPWMRange
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    setPWMRange
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_setPWMRange
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    getPWMRealRange
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_getPWMRealRange
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    getPWMFrequency
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_getPWMFrequency
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    setPWMFrequency
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_setPWMFrequency
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    getServoPulseWidth
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_getServoPulseWidth
  (JNIEnv *, jclass, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    setServoPulseWidth
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_setServoPulseWidth
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    setISRFunc
 * Signature: (IIILuk/pigpioj/PigpioCallback;)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_setISRFunc
  (JNIEnv *, jclass, jint, jint, jint, jobject);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    noiseFilter
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_noiseFilter
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    glitchFilter
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_glitchFilter
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    hardwareClock
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_hardwareClock
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     uk_pigpioj_PigpioGpio
 * Method:    hardwarePwm
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_uk_pigpioj_PigpioGpio_hardwarePwm
  (JNIEnv *, jclass, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
