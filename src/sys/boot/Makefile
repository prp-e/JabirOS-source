# $FreeBSD: releng/10.1/sys/boot/Makefile 271135 2014-09-04 21:01:10Z emaste $

.include <bsd.own.mk>
.include <bsd.arch.inc.mk>

.if ${MK_FORTH} != "no"
# Build the add-in FORTH interpreter.
SUBDIR+=		ficl
.endif

# Pick the machine-dependent subdir based on the target architecture.
ADIR=			${MACHINE:S/powerpc64/powerpc/}
.if exists(${.CURDIR}/${ADIR}/.)
SUBDIR+=		${ADIR}
.endif
.if ${MACHINE} == "amd64"
SUBDIR+=		i386
.endif

.include <bsd.subdir.mk>
