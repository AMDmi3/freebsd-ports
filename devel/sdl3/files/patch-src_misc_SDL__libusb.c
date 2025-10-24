--- src/misc/SDL_libusb.c.orig	2025-10-23 22:20:26 UTC
+++ src/misc/SDL_libusb.c
@@ -65,7 +65,11 @@ bool SDL_InitLibUSB(SDL_LibUSBContext **ctx)
             LOAD_LIBUSB_SYMBOL(int (LIBUSB_CALL *)(libusb_device *, uint8_t, struct libusb_config_descriptor **), get_config_descriptor)
             LOAD_LIBUSB_SYMBOL(void (LIBUSB_CALL *)(struct libusb_config_descriptor *), free_config_descriptor)
             LOAD_LIBUSB_SYMBOL(uint8_t (LIBUSB_CALL *)(libusb_device *), get_bus_number)
+#ifdef SDL_PLATFORM_FREEBSD
+            LOAD_LIBUSB_SYMBOL(int (LIBUSB_CALL *)(libusb_device *dev, uint8_t *port_numbers, uint8_t port_numbers_len), get_port_numbers)
+#else
             LOAD_LIBUSB_SYMBOL(int (LIBUSB_CALL *)(libusb_device *dev, uint8_t *port_numbers, int port_numbers_len), get_port_numbers)
+#endif
             LOAD_LIBUSB_SYMBOL(uint8_t (LIBUSB_CALL *)(libusb_device *), get_device_address)
             LOAD_LIBUSB_SYMBOL(int (LIBUSB_CALL *)(libusb_device *, libusb_device_handle **), open)
             LOAD_LIBUSB_SYMBOL(void (LIBUSB_CALL *)(libusb_device_handle *), close)
