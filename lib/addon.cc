#include <napi.h>
#include "node-check-windows-capslock.h"

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports.Set(Napi::String::New(env, "IsCapslockOpen"), Napi::Function::New(env, IsCapslockOpen));
  return exports;
}

NODE_API_MODULE(node_check_windows_capslock, Init)