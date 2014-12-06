# $FreeBSD: releng/10.1/sys/boot/efi/Makefile.inc 271135 2014-09-04 21:01:10Z emaste $

BINDIR?=	/boot

.if ${MACHINE_CPUARCH} == "i386"
CFLAGS+=        -march=i386
.endif

# Options used when building app-specific efi components
CFLAGS+=	-ffreestanding -fshort-wchar -Wformat
LDFLAGS+=	-nostdlib

.include "../Makefile.inc"
