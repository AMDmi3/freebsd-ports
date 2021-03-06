--- net/nqe/network_quality_estimator_unittest.cc.orig	2021-01-07 00:36:38 UTC
+++ net/nqe/network_quality_estimator_unittest.cc
@@ -2114,7 +2114,7 @@ TEST_F(NetworkQualityEstimatorTest, TestGlobalSocketWa
 // TestTCPSocketRTT requires kernel support for tcp_info struct, and so it is
 // enabled only on certain platforms.
 // ChromeOS is disabled due to crbug.com/986904
-#if (defined(TCP_INFO) || defined(OS_LINUX) || defined(OS_ANDROID)) && \
+#if (defined(TCP_INFO) || defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_BSD)) && \
     !defined(OS_CHROMEOS)
 #define MAYBE_TestTCPSocketRTT TestTCPSocketRTT
 #else
