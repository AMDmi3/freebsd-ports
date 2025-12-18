--- cmake/version.cmake.orig	2025-02-20 03:02:25 UTC
+++ cmake/version.cmake
@@ -2,7 +2,7 @@ execute_process(
 # Attempt to get build version from git
 execute_process(
 	COMMAND
-		git rev-parse --short HEAD
+		echo 0
 	RESULT_VARIABLE
 		RETURN_CODE
 	OUTPUT_VARIABLE
