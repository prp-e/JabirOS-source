#	@(#)Makefile	5.3 (Berkeley) 5/12/90
# $FreeBSD: releng/10.1/usr.bin/yacc/Makefile 268899 2014-07-20 00:21:38Z bapt $

.include <bsd.own.mk>

.PATH: ${.CURDIR}/../../contrib/byacc

PROG=	yacc
SRCS=	closure.c error.c graph.c lalr.c lr0.c main.c mkpar.c mstring.c output.c \
	reader.c yaccpar.c symtab.c verbose.c warshall.c

CFLAGS+=	-DMIXEDCASE_FILENAMES=1 \
		-DHAVE_FCNTL_H=1 \
		-DHAVE_MKSTEMP=1
		
LINKS=	${BINDIR}/yacc ${BINDIR}/byacc
MLINKS=	yacc.1 byacc.1

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

.include <bsd.prog.mk>
