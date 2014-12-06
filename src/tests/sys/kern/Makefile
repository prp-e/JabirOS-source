# $FreeBSD: releng/10.1/tests/sys/kern/Makefile 264483 2014-04-14 23:51:57Z jmmv $

TESTSDIR=	${TESTSBASE}/sys/kern

ATF_TESTS_C=	unix_seqpacket_test
TEST_METADATA.unix_seqpacket_test+=	timeout="15"

LDADD.unix_seqpacket_test+=		-lpthread

WARNS?=	5

.include <bsd.test.mk>
