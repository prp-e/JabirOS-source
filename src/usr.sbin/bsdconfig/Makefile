# $FreeBSD: releng/10.1/usr.sbin/bsdconfig/Makefile 260675 2014-01-15 07:36:34Z dteske $

SUBDIR=	console \
	diskmgmt \
	docsinstall \
	dot \
	examples \
	include \
	includes \
	mouse \
	networking \
	packages \
	password \
	security \
	share \
	startup \
	timezone \
	ttys \
	usermgmt

FILESDIR=	${LIBEXECDIR}/bsdconfig
FILES=		USAGE

SCRIPTS= bsdconfig

MAN= bsdconfig.8

beforeinstall:
	mkdir -p ${DESTDIR}${FILESDIR}
	mkdir -p ${DESTDIR}${SCRIPTSDIR}
	mkdir -p ${DESTDIR}${MANDIR}8

.include <bsd.prog.mk>
