#!/bin/sh
# $FreeBSD: releng/10.1/tools/regression/lib/msun/test-exponential.t 175463 2008-01-18 21:46:54Z das $

cd `dirname $0`

executable=`basename $0 .t`

make $executable 2>&1 > /dev/null

exec ./$executable
