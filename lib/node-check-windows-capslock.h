#ifndef NODE_CHECK_WINDOWS_CAPSLOCK_H
#define NODE_CHECK_WINDOWS_CAPSLOCK_H

#include <napi.h>
#include <windows.h>
#include <map>

Napi::Value IsCapslockOpen(const Napi::CallbackInfo& info);

#endif