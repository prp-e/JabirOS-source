# $FreeBSD: releng/10.1/usr.sbin/ntp/sntp/Makefile 264598 2014-04-17 12:16:27Z des $

.PATH: ${.CURDIR}/../../../contrib/ntp/sntp

PROG=	sntp
MAN=	sntp.1
SRCS= 	internet.c main.c socket.c timing.c unix.c

CFLAGS+= -I${.CURDIR}/../../../contrib/ntp/include -I${.CURDIR}/../ \
	-DPACKAGE=\"sntp\" -DVERSION=\"1.6\" \
	-I${.CURDIR}/../../../contrib/ntp/libopts

DPADD=	${LIBM} ${LIBOPTS}
LDADD=	-lm ${LIBOPTS}

.include <bsd.prog.mk>
