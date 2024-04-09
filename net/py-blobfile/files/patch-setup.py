--- setup.py.orig	2023-11-02 22:55:08 UTC
+++ setup.py
@@ -21,7 +21,7 @@ setup_dict: Dict[str, Any] = dict(
     author="Christopher Hesse",
     license="Public Domain",
     packages=find_packages(),
-    install_requires=["pycryptodomex~=3.8", "urllib3>=1.25.3,<3", "lxml~=4.9", "filelock~=3.0"],
+    install_requires=["pycryptodomex~=3.8", "urllib3>=1.25.3,<3", "lxml>=4.9", "filelock~=3.0"],
     python_requires=">=3.8.0",
     # indicate that we have type information
     package_data={"blobfile": ["py.typed", "VERSION"]},
