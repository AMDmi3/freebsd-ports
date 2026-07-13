--- test/StormTest.cpp.orig	2026-07-04 12:21:58 UTC
+++ test/StormTest.cpp
@@ -2493,7 +2493,7 @@ static DWORD TestOpenArchive_SearchEmbedded(TLogHelper
     else
     {
         Logger.PrintError("Failed to search the archive");
-        dwErrCode = GetLastError();
+        dwErrCode = SErrGetLastError();
     }
     return dwErrCode;
 }
