# $FreeBSD: releng/10.1/cddl/sbin/Makefile 265037 2014-04-28 04:20:14Z jmmv $

.include <bsd.own.mk>

SUBDIR=	${_tests} ${_zfs} ${_zpool}

.if ${MK_TESTS} != "no"
_tests=	tests
.endif

.if ${MK_ZFS} != "no"
_zfs=	zfs
_zpool=	zpool
.endif

.include <bsd.subdir.mk>
