#ifndef CONFIG_H_
#define CONFIG_H_

// Set to 0 (or build with -DENABLE_WIFI=0) to compile without WiFi / web UI / OTA.
// The #ifndef lets a -D flag from the build system override this default.
#ifndef ENABLE_WIFI
#define ENABLE_WIFI 1
#endif

#endif
