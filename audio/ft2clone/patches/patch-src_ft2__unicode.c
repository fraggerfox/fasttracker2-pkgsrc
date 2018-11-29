$NetBSD$

Added a type cast to iconv(3) calls to match the prototypes defined
in NetBSD's iconv.h.

--- src/ft2_unicode.c.orig	2018-07-01 14:43:52.000000000 +0000
+++ src/ft2_unicode.c
@@ -275,7 +275,11 @@ char *cp437ToUtf8(char *src)
     inLen  = srcLen;
     outPtr = outBuf;
 
+#if defined(__NetBSD__)
+    rc = iconv(cd, (const char **)&inPtr, &inLen, &outPtr, &outLen);
+#else
     rc = iconv(cd, &inPtr, &inLen, &outPtr, &outLen);
+#endif
     iconv(cd, NULL, NULL, &outPtr, &outLen); /* flush */
     iconv_close(cd);
 
@@ -323,7 +327,11 @@ char *utf8ToCp437(char *src, uint8_t rem
     inLen  = srcLen;
     outPtr = outBuf;
 
+#if defined(__NetBSD__)
+    rc = iconv(cd, (const char **)&inPtr, &inLen, &outPtr, &outLen);
+#else
     rc = iconv(cd, &inPtr, &inLen, &outPtr, &outLen);
+#endif
     iconv(cd, NULL, NULL, &outPtr, &outLen); /* flush */
     iconv_close(cd);
 
