--- client/renderSDL/CTrueTypeFont.h.orig	2024-08-25 21:27:47 UTC
+++ client/renderSDL/CTrueTypeFont.h
@@ -9,6 +9,8 @@
  */
 #pragma once
 
+#include <SDL_ttf.h>
+
 #include "../render/IFont.h"
 
 VCMI_LIB_NAMESPACE_BEGIN
@@ -16,8 +18,6 @@ class CBitmapFont;
 VCMI_LIB_NAMESPACE_END
 
 class CBitmapFont;
-
-using TTF_Font = struct _TTF_Font;
 
 class CTrueTypeFont : public IFont
 {
