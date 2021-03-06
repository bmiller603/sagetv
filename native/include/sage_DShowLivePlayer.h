/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sage_DShowLivePlayer */

#ifndef _Included_sage_DShowLivePlayer
#define _Included_sage_DShowLivePlayer
#ifdef __cplusplus
extern "C" {
#endif
#undef sage_DShowLivePlayer_OVERLAY_IS_DEFAULT
#define sage_DShowLivePlayer_OVERLAY_IS_DEFAULT 1L
/*
 * Class:     sage_DShowLivePlayer
 * Method:    createGraph0
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_sage_DShowLivePlayer_createGraph0
  (JNIEnv *, jobject);

/*
 * Class:     sage_DShowLivePlayer
 * Method:    setLiveSource0
 * Signature: (JLjava/lang/String;ILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_sage_DShowLivePlayer_setLiveSource0
  (JNIEnv *, jobject, jlong, jstring, jint, jstring, jint);

/*
 * Class:     sage_DShowLivePlayer
 * Method:    setupGraph0
 * Signature: (JLjava/lang/String;Ljava/lang/String;ZZ)V
 */
JNIEXPORT void JNICALL Java_sage_DShowLivePlayer_setupGraph0
  (JNIEnv *, jobject, jlong, jstring, jstring, jboolean, jboolean);

/*
 * Class:     sage_DShowLivePlayer
 * Method:    getLiveMute0
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_DShowLivePlayer_getLiveMute0
  (JNIEnv *, jclass, jint);

/*
 * Class:     sage_DShowLivePlayer
 * Method:    setLiveMute0
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_sage_DShowLivePlayer_setLiveMute0
  (JNIEnv *, jclass, jint, jboolean);

#ifdef __cplusplus
}
#endif
#endif
