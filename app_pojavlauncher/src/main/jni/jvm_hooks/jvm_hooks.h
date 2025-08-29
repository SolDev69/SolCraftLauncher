//
// Created by maks on 23.01.2025.
//

#ifndef SOLCRAFTLAUNCHER_JVM_HOOKS_H
#define SOLCRAFTLAUNCHER_JVM_HOOKS_H

#include <jni.h>

void installEMUIIteratorMititgation(JNIEnv *env);
void installLwjglDlopenHook(JNIEnv *env);
void hookExec(JNIEnv *env);

#endif //SOLCRAFTLAUNCHER_JVM_HOOKS_H
