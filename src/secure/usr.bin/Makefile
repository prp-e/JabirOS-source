# $FreeBSD: releng/10.1/secure/usr.bin/Makefile 265037 2014-04-28 04:20:14Z jmmv $

.include <bsd.own.mk>

SUBDIR=
.if ${MK_OPENSSL} != "no"
SUBDIR+=bdes openssl
.if ${MK_OPENSSH} != "no"
SUBDIR+=scp sftp ssh ssh-add ssh-agent ssh-keygen ssh-keyscan
.endif
.endif

.if ${MK_TESTS} != "no"
SUBDIR+=tests
.endif

.include <bsd.subdir.mk>
