# $FreeBSD: releng/10.1/secure/usr.sbin/Makefile 265037 2014-04-28 04:20:14Z jmmv $

.include <bsd.own.mk>

SUBDIR= 
.if ${MK_OPENSSH} != "no"
SUBDIR+=sshd
.endif

.if ${MK_TESTS} != "no"
SUBDIR+=tests
.endif

.include <bsd.subdir.mk>
