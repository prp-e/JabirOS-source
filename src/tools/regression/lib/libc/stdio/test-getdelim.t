#!/bin/sh
# $FreeBSD: stable/10/tools/regression/lib/libc/stdio/test-getdelim.t 230115 2012-01-14 21:38:31Z das $

cd `dirname $0`

executable=`basename $0 .t`

make $executable 2>&1 > /dev/null

exec ./$executable
