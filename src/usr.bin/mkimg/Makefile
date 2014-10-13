# $FreeBSD: stable/10/usr.bin/mkimg/Makefile 269177 2014-07-28 02:07:16Z marcel $

PROG=	mkimg
SRCS=	format.c image.c mkimg.c scheme.c
MAN=	mkimg.1

CFLAGS+=-DSPARSE_WRITE

# List of formats to support
SRCS+= \
	raw.c \
	vhd.c \
	vmdk.c

# List of schemes to support
SRCS+=	\
	apm.c \
	bsd.c \
	ebr.c \
	gpt.c \
	mbr.c \
	pc98.c \
	vtoc8.c

BINDIR?=/usr/bin

DPADD=	${LIBUTIL}
LDADD=	-lutil

WARNS?=	6

.include <bsd.prog.mk>
