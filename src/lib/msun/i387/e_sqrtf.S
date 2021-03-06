/*
 * Written by J.T. Conklin <jtc@netbsd.org>.
 * Public domain.
 */

#include <machine/asm.h>

__FBSDID("$FreeBSD: releng/10.1/lib/msun/i387/e_sqrtf.S 217108 2011-01-07 16:13:12Z kib $");
/* RCSID("$NetBSD: e_sqrtf.S,v 1.2 1995/05/08 23:50:14 jtc Exp $") */

ENTRY(sqrtf)
	flds	4(%esp)
	fsqrt
	ret
END(sqrtf)

	.section .note.GNU-stack,"",%progbits
