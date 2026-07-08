--- reprise/jobs/runner.py.orig	2022-07-29 16:29:12 UTC
+++ reprise/jobs/runner.py
@@ -209,7 +209,7 @@ class JobRunner:
 
             jail_pkg_path = instance_zfs.get_path() / 'usr/local/sbin/pkg'
             jail_pkg_static_path = instance_zfs.get_path() / 'usr/local/sbin/pkg-static'
-            jail_pkg_static_path.link_to(jail_pkg_path)
+            jail_pkg_static_path.symlink_to(jail_pkg_path)
             # /pkg bootstrap
 
             lines = await prison.execute(
