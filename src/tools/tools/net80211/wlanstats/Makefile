# $FreeBSD: releng/10.1/tools/tools/net80211/wlanstats/Makefile 260096 2013-12-30 20:15:46Z dim $

.include <bsd.compiler.mk>

PROG=	wlanstats
BINDIR=	/usr/local/bin
NO_MAN=

SRCS=	statfoo.c wlanstats.c main.c
CFLAGS.clang+= -fbracket-depth=512

.include <bsd.prog.mk>
