/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_qualcomm_wfd_WFDNative */

#ifndef _Included_com_qualcomm_wfd_WFDNative
#define _Included_com_qualcomm_wfd_WFDNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    enableWfd
 * Signature: (Lcom/qualcomm/wfd/WfdDevice;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_qualcomm_wfd_WFDNative_enableWfd
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    disableWfd
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_qualcomm_wfd_WFDNative_disableWfd
  (JNIEnv *, jclass);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    startWfdSession
 * Signature: (Lcom/qualcomm/wfd/WfdDevice;)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_startWfdSession
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    stopWfdSession
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_stopWfdSession
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    play
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_play
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    pause
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_pause
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    teardown
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_teardown
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    standby
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_qualcomm_wfd_WFDNative_standby
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    enableUIBC
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_qualcomm_wfd_WFDNative_enableUIBC
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    disableUIBC
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_qualcomm_wfd_WFDNative_disableUIBC
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    startUIBC
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_startUIBC
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    stopUIBC
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_stopUIBC
  (JNIEnv *, jclass);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    setVideoSurface
 * Signature: (Landroid/view/Surface;)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_setVideoSurface
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    sendUIBCKeyEvent
 * Signature: (Landroid/view/KeyEvent;)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_sendUIBCKeyEvent
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    sendUIBCMotionEvent
 * Signature: (Landroid/view/MotionEvent;)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_sendUIBCMotionEvent
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    sendUIBCRotateEvent
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_qualcomm_wfd_WFDNative_sendUIBCRotateEvent
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    setResolution
 * Signature: (II[I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_qualcomm_wfd_WFDNative_setResolution
  (JNIEnv *, jclass, jint, jint, jintArray);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    setBitrate
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_setBitrate
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    queryTCPTransportSupport
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_queryTCPTransportSupport
  (JNIEnv *, jclass);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    negotiateRtpTransport
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_negotiateRtpTransport
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    setRtpTransport
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_setRtpTransport
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    tcpPlaybackControl
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_tcpPlaybackControl
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    setDecoderLatency
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_setDecoderLatency
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    flush
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_flush
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    setSurfaceProp
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_setSurfaceProp
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    setAvPlaybackMode
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_qualcomm_wfd_WFDNative_setAvPlaybackMode
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    getConfigItems
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_com_qualcomm_wfd_WFDNative_getConfigItems
  (JNIEnv *, jclass, jintArray);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    setUIBC
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_qualcomm_wfd_WFDNative_setUIBC
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    executeRuntimeCommand
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_qualcomm_wfd_WFDNative_executeRuntimeCommand
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    getCommonRes
 * Signature: ([I)[I
 */
JNIEXPORT jintArray JNICALL Java_com_qualcomm_wfd_WFDNative_getCommonRes
  (JNIEnv *, jclass, jintArray);

/*
 * Class:     com_qualcomm_wfd_WFDNative
 * Method:    getNegotiatedRes
 * Signature: ([I)[I
 */
JNIEXPORT jintArray JNICALL Java_com_qualcomm_wfd_WFDNative_getNegotiatedRes
  (JNIEnv *, jclass, jintArray);

#ifdef __cplusplus
}
#endif
#endif
