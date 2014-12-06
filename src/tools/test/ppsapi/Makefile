# $FreeBSD: releng/10.1/tools/test/ppsapi/Makefile 264485 2014-04-15 02:17:46Z gnn $

PROG=	ppsapitest
NO_MAN=

WARNS?=	5

.include <bsd.prog.mk>

CFLAGS+=-Wno-format-security

test:	${PROG}
	./${PROG} /dev/cuau0
