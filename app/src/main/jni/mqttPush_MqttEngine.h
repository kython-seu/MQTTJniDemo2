/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class mqttPush_MqttEngine */

#ifndef _Included_mqttPush_MqttEngine
#define _Included_mqttPush_MqttEngine
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mqttPush_MqttEngine
 * Method:    jniInit
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_mqttPush_MqttEngine_jniInit
  (JNIEnv *, jobject);

/*
 * Class:     mqttPush_MqttEngine
 * Method:    jniDeInit
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_mqttPush_MqttEngine_jniDeInit
  (JNIEnv *, jobject);

/*
 * Class:     mqttPush_MqttEngine
 * Method:    connect
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_mqttPush_MqttEngine_connect
  (JNIEnv *, jobject);

/*
 * Class:     mqttPush_MqttEngine
 * Method:    disconnect
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_mqttPush_MqttEngine_disconnect
  (JNIEnv *, jobject);

/*
 * Class:     mqttPush_MqttEngine
 * Method:    getCommand
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mqttPush_MqttEngine_getCommand
  (JNIEnv *, jobject);

/*
 * Class:     mqttPush_MqttEngine
 * Method:    sendMessage
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_mqttPush_MqttEngine_sendMessage
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     mqttPush_MqttEngine
 * Method:    getGlobal
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_mqttPush_MqttEngine_getGlobal
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
