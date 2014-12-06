#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: releng/10.1/usr.bin/uudecode/Makefile 264996 2014-04-27 01:15:10Z jmmv $

NO_MAN=

.include <bsd.own.mk>

PROG=	uudecode
LINKS=	${BINDIR}/uudecode ${BINDIR}/b64decode

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

.include <bsd.prog.mk>
