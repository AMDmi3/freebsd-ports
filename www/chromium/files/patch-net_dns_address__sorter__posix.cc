--- net/dns/address_sorter_posix.cc.orig	2021-03-12 23:57:27 UTC
+++ net/dns/address_sorter_posix.cc
@@ -13,7 +13,9 @@
 #include <sys/socket.h>  // Must be included before ifaddrs.h.
 #include <ifaddrs.h>
 #include <net/if.h>
+#include <net/if_var.h>
 #include <netinet/in_var.h>
+#include <netinet6/in6_var.h>
 #include <string.h>
 #include <sys/ioctl.h>
 #endif
