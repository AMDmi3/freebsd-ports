--- base/profiler/stack_sampling_profiler_unittest.cc.orig	2025-02-19 07:43:18 UTC
+++ base/profiler/stack_sampling_profiler_unittest.cc
@@ -46,7 +46,7 @@
 
 #include <intrin.h>
 #include <malloc.h>
-#else
+#elif !BUILDFLAG(IS_BSD)
 #include <alloca.h>
 #endif
 
