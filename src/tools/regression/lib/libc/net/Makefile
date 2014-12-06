# $FreeBSD: releng/10.1/tools/regression/lib/libc/net/Makefile 264457 2014-04-14 13:30:08Z jmmv $

TESTS=	test-ether test-eui64_aton test-eui64_ntoa
CFLAGS+= -g -Wall

.PHONY: tests
tests: ${TESTS}
	for p in ${TESTS}; do ${.OBJDIR}/$$p; done

.PHONY: clean
clean:
	-rm -f ${TESTS}
