--- setup.py.orig	2022-03-31 00:21:46 UTC
+++ setup.py
@@ -43,7 +43,7 @@ setup(
     package_data={"draftjs_exporter": ["py.typed"]},
     extras_require={
         # Keep this in sync with the dependencies in setup.py, requirements.txt, tox.ini.
-        "lxml": ["lxml>=4.2.0,<5"],
+        "lxml": ["lxml>=4.2.0"],
         "html5lib": ["beautifulsoup4>=4.4.1,<5", "html5lib>=0.999,<2"],
     },
     zip_safe=False,
