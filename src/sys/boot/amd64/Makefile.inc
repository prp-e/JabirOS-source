# Common defines for all of /sys/boot/amd64/
#
# $FreeBSD: releng/10.1/sys/boot/amd64/Makefile.inc 271135 2014-09-04 21:01:10Z emaste $

BINDIR?=	/boot

# See conf/kern.mk for the correct set of these
CFLAGS+=	-ffreestanding
CFLAGS+=	-mno-mmx -mno-sse -mno-aes -mno-avx -msoft-float
LDFLAGS+=	-nostdlib

.include "../Makefile.inc"
