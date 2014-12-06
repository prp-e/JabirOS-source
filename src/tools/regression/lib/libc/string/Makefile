# $FreeBSD: releng/10.1/tools/regression/lib/libc/string/Makefile 264457 2014-04-14 13:30:08Z jmmv $

TESTS=	test-stpncpy test-strerror test-wcscasecmp test-wcsnlen

.PHONY: tests
tests: ${TESTS}
	for p in ${TESTS}; do ${.OBJDIR}/$$p; done

.PHONY: clean
clean:
	-rm -f ${TESTS}
