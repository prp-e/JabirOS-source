# $FreeBSD: releng/10.1/tests/Makefile 262854 2014-03-06 13:38:23Z jmmv $

.include <bsd.own.mk>

SUBDIR= sys

TESTSDIR= ${TESTSBASE}
KYUAFILE= yes

afterinstall: install-tests-local
install-tests-local: .PHONY
	${INSTALL_SYMLINK} ../local/tests ${DESTDIR}${TESTSDIR}/local

.include <bsd.test.mk>
