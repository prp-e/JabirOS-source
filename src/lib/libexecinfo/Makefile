# $FreeBSD: releng/10.1/lib/libexecinfo/Makefile 255175 2013-09-03 13:31:43Z emaste $

LIBEXECINFO=	${.CURDIR}/../../contrib/libexecinfo

LIB=		execinfo
SHLIB_MAJOR=	1

.PATH:		${LIBEXECINFO}

INCS=		execinfo.h
SRCS=		backtrace.c symtab.c unwind.c

DPADD=		${LIBELF}
LDADD=		-lelf

MAN=		backtrace.3

MLINKS+=	backtrace.3 backtrace_symbols.3
MLINKS+=	backtrace.3 backtrace_symbols_fmt.3
MLINKS+=	backtrace.3 backtrace_symbols_fd.3
MLINKS+=	backtrace.3 backtrace_symbols_fd_fmt.3

.include <bsd.lib.mk>
