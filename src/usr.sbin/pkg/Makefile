# $FreeBSD: releng/10.1/usr.sbin/pkg/Makefile 268918 2014-07-20 10:54:45Z bapt $

PROG=	pkg
SRCS=	pkg.c dns_utils.c config.c
MAN=	pkg.7

CFLAGS+=-I${.CURDIR}/../../contrib/libucl/include
.PATH:	${.CURDIR}/../../contrib/libucl/include
DPADD=	${LIBARCHIVE} ${LIBELF} ${LIBFETCH} ${LIBUCL} ${LIBSBUF} ${LIBSSL} \
	${LIBCRYPTO} ${LIBM}
LDADD=	-larchive -lelf -lfetch -lucl -lsbuf -lssl -lcrypto -lm
USEPRIVATELIB=	ucl

.include <bsd.prog.mk>
