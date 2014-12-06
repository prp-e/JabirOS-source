# $FreeBSD: releng/10.1/usr.sbin/bsdconfig/usermgmt/Makefile 263980 2014-04-01 00:19:13Z dteske $

NO_OBJ=

SUBDIR= include share

FILESDIR=	${LIBEXECDIR}/bsdconfig/070.usermgmt
FILES=		INDEX USAGE

SCRIPTSDIR=	${FILESDIR}
SCRIPTS=	groupadd groupdel groupedit useradd userdel useredit usermgmt

beforeinstall:
	mkdir -p ${DESTDIR}${FILESDIR}

.include <bsd.prog.mk>
