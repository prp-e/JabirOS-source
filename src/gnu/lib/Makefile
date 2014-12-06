# $FreeBSD: releng/10.1/gnu/lib/Makefile 265037 2014-04-28 04:20:14Z jmmv $

.include <bsd.own.mk>

SUBDIR= csu libgcc libgcov libdialog libgomp libregex libreadline

.if ${MK_SSP} != "no"
SUBDIR+= libssp
.endif

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

# libsupc++ uses libstdc++ headers, although 'make includes' should
# have taken care of that already.
.if ${MK_GNUCXX} != "no"
SUBDIR+= libstdc++ libsupc++
.endif

.include <bsd.subdir.mk>
