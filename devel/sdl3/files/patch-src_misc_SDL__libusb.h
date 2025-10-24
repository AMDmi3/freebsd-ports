--- src/misc/SDL_libusb.h.orig	2025-10-23 22:20:26 UTC
+++ src/misc/SDL_libusb.h
@@ -43,7 +43,11 @@ typedef struct SDL_LibUSBContext
     );
     void (LIBUSB_CALL *free_config_descriptor)(struct libusb_config_descriptor *config);
     uint8_t (LIBUSB_CALL *get_bus_number)(libusb_device *dev);
+#ifdef SDL_PLATFORM_FREEBSD
+    int (LIBUSB_CALL *get_port_numbers)(libusb_device *dev, uint8_t *port_numbers, uint8_t port_numbers_len);
+#else
     int (LIBUSB_CALL *get_port_numbers)(libusb_device *dev, uint8_t *port_numbers, int port_numbers_len);
+#endif
     uint8_t (LIBUSB_CALL *get_device_address)(libusb_device *dev);
     int (LIBUSB_CALL *open)(libusb_device *dev, libusb_device_handle **dev_handle);
     void (LIBUSB_CALL *close)(libusb_device_handle *dev_handle);
