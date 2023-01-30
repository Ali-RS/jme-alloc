/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jme3_alloc_util_NativeBufferUtils */

#ifndef _Included_com_jme3_alloc_util_NativeBufferUtils
#define _Included_com_jme3_alloc_util_NativeBufferUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jme3_alloc_util_NativeBufferUtils
 * Method:    memoryAlloc
 * Signature: (J)Ljava/nio/Buffer;
 */
JNIEXPORT jobject JNICALL Java_com_jme3_alloc_util_NativeBufferUtils_memoryAlloc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_jme3_alloc_util_NativeBufferUtils
 * Method:    clearAlloc
 * Signature: (J)Ljava/nio/Buffer;
 */
JNIEXPORT jobject JNICALL Java_com_jme3_alloc_util_NativeBufferUtils_clearAlloc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_jme3_alloc_util_NativeBufferUtils
 * Method:    memorySet
 * Signature: (Ljava/nio/Buffer;IJ)Ljava/nio/Buffer;
 */
JNIEXPORT jobject JNICALL Java_com_jme3_alloc_util_NativeBufferUtils_memorySet
  (JNIEnv *, jclass, jobject, jint, jlong);

/*
 * Class:     com_jme3_alloc_util_NativeBufferUtils
 * Method:    memoryMove
 * Signature: (Ljava/nio/Buffer;Ljava/nio/Buffer;J)V
 */
JNIEXPORT void JNICALL Java_com_jme3_alloc_util_NativeBufferUtils_memoryMove
  (JNIEnv *, jclass, jobject, jobject, jlong);

/*
 * Class:     com_jme3_alloc_util_NativeBufferUtils
 * Method:    destroy
 * Signature: (Ljava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_alloc_util_NativeBufferUtils_destroy
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_jme3_alloc_util_NativeBufferUtils
 * Method:    getMemoryAdress
 * Signature: (Ljava/nio/Buffer;)J
 */
JNIEXPORT jlong JNICALL Java_com_jme3_alloc_util_NativeBufferUtils_getMemoryAdress
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
