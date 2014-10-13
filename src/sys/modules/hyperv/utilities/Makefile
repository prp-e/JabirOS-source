# $FreeBSD: stable/10/sys/modules/hyperv/utilities/Makefile 272152 2014-09-26 03:03:58Z gjb $

.PATH:	${.CURDIR}/../../../dev/hyperv/utilities

KMOD=	hv_utils
SRCS=	hv_util.c
SRCS+=	bus_if.h device_if.h

CFLAGS+= -I${.CURDIR}/../../../dev/hyperv/include \
	 -I${.CURDIR}/../../../dev/hyperv/vmbus

.include <bsd.kmod.mk>
