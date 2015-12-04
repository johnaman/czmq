/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "czmq.h"
#include "../../native/include/org_zeromq_czmq_Zconfig.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zconfig__1_1new (JNIEnv *env, jclass c, jstring name, jlong parent)
{
    char *name_ = (char *) (*env)->GetStringUTFChars (env, name, NULL);
    jlong new_ = (jlong) zconfig_new (name_, (zconfig_t *) parent);
    (*env)->ReleaseStringUTFChars (env, name, name_);
    return new_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zconfig__1_1destroy (JNIEnv *env, jclass c, jlong self_p)
{
    zconfig_destroy ((zconfig_t **) &self_p);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zconfig__1_1name (JNIEnv *env, jclass c, jlong self)
{
    char *name_ = (char *) zconfig_name ((zconfig_t *) self);
    jstring string = (*env)->NewStringUTF (env, name_);
    return string;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zconfig__1_1value (JNIEnv *env, jclass c, jlong self)
{
    char *value_ = (char *) zconfig_value ((zconfig_t *) self);
    jstring string = (*env)->NewStringUTF (env, value_);
    return string;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zconfig__1_1put (JNIEnv *env, jclass c, jlong self, jstring path, jstring value)
{
    char *path_ = (char *) (*env)->GetStringUTFChars (env, path, NULL);
    char *value_ = (char *) (*env)->GetStringUTFChars (env, value, NULL);
    zconfig_put ((zconfig_t *) self, path_, value_);
    (*env)->ReleaseStringUTFChars (env, path, path_);
    (*env)->ReleaseStringUTFChars (env, value, value_);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zconfig__1_1putf (JNIEnv *env, jclass c, jlong self, jstring path, jstring format)
{
    char *path_ = (char *) (*env)->GetStringUTFChars (env, path, NULL);
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    zconfig_putf ((zconfig_t *) self, path_, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, path, path_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zconfig__1_1get (JNIEnv *env, jclass c, jlong self, jstring path, jstring default_value)
{
    char *path_ = (char *) (*env)->GetStringUTFChars (env, path, NULL);
    char *default_value_ = (char *) (*env)->GetStringUTFChars (env, default_value, NULL);
    char *get_ = (char *) zconfig_get ((zconfig_t *) self, path_, default_value_);
    jstring string = (*env)->NewStringUTF (env, get_);
    (*env)->ReleaseStringUTFChars (env, path, path_);
    (*env)->ReleaseStringUTFChars (env, default_value, default_value_);
    return string;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zconfig__1_1setName (JNIEnv *env, jclass c, jlong self, jstring name)
{
    char *name_ = (char *) (*env)->GetStringUTFChars (env, name, NULL);
    zconfig_set_name ((zconfig_t *) self, name_);
    (*env)->ReleaseStringUTFChars (env, name, name_);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zconfig__1_1setValue (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    zconfig_set_value ((zconfig_t *) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zconfig__1_1child (JNIEnv *env, jclass c, jlong self)
{
    jlong child_ = (jlong) zconfig_child ((zconfig_t *) self);
    return child_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zconfig__1_1next (JNIEnv *env, jclass c, jlong self)
{
    jlong next_ = (jlong) zconfig_next ((zconfig_t *) self);
    return next_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zconfig__1_1locate (JNIEnv *env, jclass c, jlong self, jstring path)
{
    char *path_ = (char *) (*env)->GetStringUTFChars (env, path, NULL);
    jlong locate_ = (jlong) zconfig_locate ((zconfig_t *) self, path_);
    (*env)->ReleaseStringUTFChars (env, path, path_);
    return locate_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zconfig__1_1atDepth (JNIEnv *env, jclass c, jlong self, jint level)
{
    jlong at_depth_ = (jlong) zconfig_at_depth ((zconfig_t *) self, (int) level);
    return at_depth_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zconfig__1_1execute (JNIEnv *env, jclass c, jlong self, jlong handler, jlong arg)
{
    jint execute_ = (jint) zconfig_execute ((zconfig_t *) self, (zconfig_fct *) handler, (void *) arg);
    return execute_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zconfig__1_1setComment (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    zconfig_set_comment ((zconfig_t *) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zconfig__1_1comments (JNIEnv *env, jclass c, jlong self)
{
    jlong comments_ = (jlong) zconfig_comments ((zconfig_t *) self);
    return comments_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zconfig__1_1load (JNIEnv *env, jclass c, jstring filename)
{
    char *filename_ = (char *) (*env)->GetStringUTFChars (env, filename, NULL);
    jlong load_ = (jlong) zconfig_load (filename_);
    (*env)->ReleaseStringUTFChars (env, filename, filename_);
    return load_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zconfig__1_1save (JNIEnv *env, jclass c, jlong self, jstring filename)
{
    char *filename_ = (char *) (*env)->GetStringUTFChars (env, filename, NULL);
    jint save_ = (jint) zconfig_save ((zconfig_t *) self, filename_);
    (*env)->ReleaseStringUTFChars (env, filename, filename_);
    return save_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zconfig__1_1loadf (JNIEnv *env, jclass c, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    jlong loadf_ = (jlong) zconfig_loadf ("%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
    return loadf_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zconfig__1_1savef (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    jint savef_ = (jint) zconfig_savef ((zconfig_t *) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
    return savef_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zconfig__1_1filename (JNIEnv *env, jclass c, jlong self)
{
    char *filename_ = (char *) zconfig_filename ((zconfig_t *) self);
    jstring string = (*env)->NewStringUTF (env, filename_);
    return string;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zconfig__1_1reload (JNIEnv *env, jclass c, jlong self_p)
{
    jint reload_ = (jint) zconfig_reload ((zconfig_t **) &self_p);
    return reload_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zconfig__1_1chunkLoad (JNIEnv *env, jclass c, jlong chunk)
{
    jlong chunk_load_ = (jlong) zconfig_chunk_load ((zchunk_t *) chunk);
    return chunk_load_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zconfig__1_1chunkSave (JNIEnv *env, jclass c, jlong self)
{
    jlong chunk_save_ = (jlong) zconfig_chunk_save ((zconfig_t *) self);
    return chunk_save_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zconfig__1_1strLoad (JNIEnv *env, jclass c, jstring string)
{
    char *string_ = (char *) (*env)->GetStringUTFChars (env, string, NULL);
    jlong str_load_ = (jlong) zconfig_str_load (string_);
    (*env)->ReleaseStringUTFChars (env, string, string_);
    return str_load_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zconfig__1_1strSave (JNIEnv *env, jclass c, jlong self)
{
    char *str_save_ = (char *) zconfig_str_save ((zconfig_t *) self);
    jstring string = (*env)->NewStringUTF (env, str_save_);
    zstr_free (&str_save_);
    return string;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zconfig__1_1hasChanged (JNIEnv *env, jclass c, jlong self)
{
    jboolean has_changed_ = (jboolean) zconfig_has_changed ((zconfig_t *) self);
    return has_changed_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zconfig__1_1print (JNIEnv *env, jclass c, jlong self)
{
    zconfig_print ((zconfig_t *) self);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zconfig__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    zconfig_test ((bool) verbose);
}

