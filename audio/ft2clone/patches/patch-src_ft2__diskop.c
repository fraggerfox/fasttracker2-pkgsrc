$NetBSD$

Added sys/device.h to prevent unknown type name error from the included
fts.h.

--- src/ft2_diskop.c.orig	2018-11-23 13:36:02.000000000 +0000
+++ src/ft2_diskop.c
@@ -12,6 +12,9 @@
 #include <windows.h>
 #include <direct.h>
 #else
+#if defined(__NetBSD__)
+#include <sys/device.h>
+#endif
 #include <fts.h> /* for fts_open() and stuff in recursiveDelete() */
 #include <unistd.h>
 #include <dirent.h>
