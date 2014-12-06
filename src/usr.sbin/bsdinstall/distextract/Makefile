# $FreeBSD: releng/10.1/usr.sbin/bsdinstall/distextract/Makefile 262643 2014-03-01 03:09:16Z brooks $

BINDIR= /usr/libexec/bsdinstall
PROG=	distextract
DPADD=	${LIBARCHIVE} ${LIBDIALOG} ${LIBM}
LDADD=	-larchive -ldialog -lm

WARNS?=	6
NO_MAN=	true

.include <bsd.own.mk>

.if ${MK_NCURSESW} == "no"
DPADD+=	${LIBNCURSES}
LDADD+=	-lncurses
.else
DPADD+=	${LIBNCURSESW}
LDADD+=	-lncursesw
.endif

.include <bsd.prog.mk>
