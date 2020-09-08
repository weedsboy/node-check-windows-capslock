#include <napi.h>
#include "node-check-windows-capslock.h"

Napi::Value IsCapslockOpen(const Napi::CallbackInfo& info) {
	bool result = GetKeyState(VK_CAPITAL) & 0x0001;
    return Napi::Boolean::New(info.Env(), result);
}