# $FreeBSD: releng/10.1/lib/libcrypt/tests/Makefile 270386 2014-08-23 02:24:47Z ngie $

# exercise libcrypt

TESTSDIR= ${TESTSBASE}/lib/libcrypt

ATF_TESTS_C= crypt_tests

CFLAGS+= -I${.CURDIR:H}
DPADD+=	${LIBCRYPT}
LDADD+= -lcrypt

.include <bsd.test.mk>
