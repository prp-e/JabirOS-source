# $FreeBSD: releng/10.1/tests/sys/netinet/Makefile 263445 2014-03-20 20:39:41Z asomers $

TESTSDIR=	${TESTSBASE}/sys/netinet
BINDIR=		${TESTSDIR}

ATF_TESTS_SH+=	fibs_test
PROG=	udp_dontroute
SRCS=	udp_dontroute.c
NO_MAN=
WARNS?=	6

.include <bsd.test.mk>
