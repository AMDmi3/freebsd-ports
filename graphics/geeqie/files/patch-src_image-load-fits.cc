--- src/image-load-fits.cc.orig	2025-05-05 14:23:21 UTC
+++ src/image-load-fits.cc
@@ -20,6 +20,7 @@
 
 #include "image-load-fits.h"
 
+#include <algorithm>
 #include <cmath>
 #include <fitsio.h>
 #include <limits>
