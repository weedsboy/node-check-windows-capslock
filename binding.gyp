{
  "targets": [
    {
      "target_name": "node_check_windows_capslock",
      "sources": [ ],
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ],
      "defines": [ "NAPI_DISABLE_CPP_EXCEPTIONS" ],
      "include_dirs": [
        "<!@(node -p \"require('node-addon-api').include\")"
      ],
      "conditions": [
        ['OS=="win"', {
          "sources": [ "lib/node-check-windows-capslock.cc", "lib/addon.cc" ],
        }]
      ]
    }
  ]
}
