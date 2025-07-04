--- src/3rdparty/chromium/content/public/common/content_switches.cc.orig	2025-02-21 12:29:33 UTC
+++ src/3rdparty/chromium/content/public/common/content_switches.cc
@@ -350,6 +350,8 @@ const char kEnableLogging[]                 = "enable-
 // builds.
 const char kEnableLogging[]                 = "enable-logging";
 
+const char kDisableUnveil[]                 = "disable-unveil";
+
 // Enables the type, downlinkMax attributes of the NetInfo API. Also, enables
 // triggering of change attribute of the NetInfo API when there is a change in
 // the connection type.
@@ -978,7 +980,7 @@ const char kPreventResizingContentsForTesting[] =
 
 // TODO(crbug.com/40118868): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
 // Allows sending text-to-speech requests to speech-dispatcher, a common
 // Linux speech service. Because it's buggy, the user must explicitly
 // enable it so that visiting a random webpage can't cause instability.
