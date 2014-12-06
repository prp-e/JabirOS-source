# $FreeBSD: releng/10.1/lib/ncurses/Makefile 262643 2014-03-01 03:09:16Z brooks $

.include <bsd.own.mk>

SUBDIR=	ncurses form menu panel

.if ${MK_NCURSESW} != "no"
SUBDIR+=	ncursesw formw menuw panelw
.endif

.include <bsd.subdir.mk>
