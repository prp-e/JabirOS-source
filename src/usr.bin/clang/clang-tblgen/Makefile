# $FreeBSD: releng/10.1/usr.bin/clang/clang-tblgen/Makefile 263508 2014-03-21 17:53:59Z dim $

NO_MAN=
.include <bsd.own.mk>

PROG_CXX=clang-tblgen

SRCDIR=	tools/clang/utils/TableGen
SRCS=	ClangASTNodesEmitter.cpp \
	ClangAttrEmitter.cpp \
	ClangCommentCommandInfoEmitter.cpp \
	ClangCommentHTMLNamedCharacterReferenceEmitter.cpp \
	ClangCommentHTMLTagsEmitter.cpp \
	ClangDiagnosticsEmitter.cpp \
	ClangSACheckersEmitter.cpp \
	NeonEmitter.cpp \
	TableGen.cpp

LIBDEPS=llvmtablegen \
	llvmsupport

.include "../clang.prog.mk"
