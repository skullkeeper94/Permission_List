#include <string.h>
#include <jni.h>

extern "C"
{
	JNIEXPORT jstring JNICALL Java_com_skullkeeper94_permissionlist_list_stringFromJNI(JNIEnv* env, jobject thiz)
	{
		return env->NewStringUTF("TODO: Add categories before adding seperate tabs for the permissions.");
	}
}
