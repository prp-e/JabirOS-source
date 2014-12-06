#	@(#)Makefile	5.33.1.1 (Berkeley) 5/6/91
# $FreeBSD: releng/10.1/gnu/Makefile 265037 2014-04-28 04:20:14Z jmmv $

.include <bsd.own.mk>

SUBDIR= lib ${_tests} usr.bin

.if ${MK_TESTS} != "no"
_tests=	tests
.endif

.include <bsd.subdir.mk>
