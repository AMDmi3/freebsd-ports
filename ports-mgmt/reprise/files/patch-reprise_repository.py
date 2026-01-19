--- reprise/repository.py.orig	2022-07-29 16:29:12 UTC
+++ reprise/repository.py
@@ -305,7 +305,7 @@ class RepositoryManager:
     async def get_repository(self, release: int, arch: str) -> Repository:
         branch = 'latest'
         system = 'FreeBSD'
-        url = 'https://pkg.freebsd.org/'
+        url = 'https://pkg.freebsd.org'
 
         key = f'{system}:{release}:{arch}:{branch}'
 
