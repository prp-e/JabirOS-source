# $FreeBSD: releng/10.1/secure/libexec/Makefile 265037 2014-04-28 04:20:14Z jmmv $

.include <bsd.own.mk>

SUBDIR=
.if ${MK_OPENSSH} != "no"
SUBDIR+=sftp-server ssh-keysign ssh-pkcs11-helper
.endif

.if ${MK_TESTS} != "no"
SUBDIR+=tests
.endif

.include <bsd.subdir.mk>
