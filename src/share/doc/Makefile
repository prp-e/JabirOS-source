#	From: @(#)Makefile	8.1 (Berkeley) 6/5/93
# $FreeBSD: releng/10.1/share/doc/Makefile 260013 2013-12-28 20:05:31Z jmmv $

.include <bsd.own.mk>

SUBDIR=	${_IPv6} \
	${_atf} \
	legal \
	${_llvm} \
	${_roffdocs}

.if ${MK_TESTS} != "no"
_atf= atf
.endif

.if ${MK_CLANG} != "no"
_llvm=	llvm
.endif

.if ${MK_INET6} != "no"
_IPv6=	IPv6
.endif

# FIXME this is not a real solution ...
.if ${MK_GROFF} != "no"
_roffdocs=	papers psd smm usd
.endif

# Default output format for troff documents is ascii.
# To generate postscript versions of troff documents, use:
#  make PRINTERDEVICE=ps

.include <bsd.subdir.mk>
