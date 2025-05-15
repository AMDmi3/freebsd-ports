--- src/http/modules/ngx_http_autoindex_module.c.orig	2025-04-23 11:48:54 UTC
+++ src/http/modules/ngx_http_autoindex_module.c
@@ -50,9 +50,9 @@ typedef struct {
 #define NGX_HTTP_AUTOINDEX_JSONP        2
 #define NGX_HTTP_AUTOINDEX_XML          3
 
-#define NGX_HTTP_AUTOINDEX_PREALLOCATE  50
+#define NGX_HTTP_AUTOINDEX_PREALLOCATE  60
 
-#define NGX_HTTP_AUTOINDEX_NAME_LEN     50
+#define NGX_HTTP_AUTOINDEX_NAME_LEN     60
 
 
 static ngx_buf_t *ngx_http_autoindex_html(ngx_http_request_t *r,
