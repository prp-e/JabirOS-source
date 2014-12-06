# $FreeBSD: releng/10.1/usr.sbin/iscsid/Makefile 270909 2014-09-01 03:04:59Z ngie $

PROG=		iscsid
SRCS=		discovery.c iscsid.c keys.c log.c login.c pdu.c
CFLAGS+=	-I${.CURDIR}
CFLAGS+=	-I${.CURDIR}/../../sys/cam
CFLAGS+=	-I${.CURDIR}/../../sys/dev/iscsi
#CFLAGS+=	-DICL_KERNEL_PROXY
MAN=		iscsid.8

DPADD=		${LIBCRYPTO} ${LIBSSL} ${LIBUTIL}
LDADD=		-lcrypto -lssl -lutil

WARNS=		6

.include <bsd.prog.mk>
