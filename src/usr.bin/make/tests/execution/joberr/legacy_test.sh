#! /bin/sh
# $FreeBSD: releng/10.1/usr.bin/make/tests/execution/joberr/legacy_test.sh 263346 2014-03-19 12:29:20Z jmmv $

. $(dirname $0)/../../common.sh

# Description
DESC="Test job make error output"

# Run
TEST_N=1
TEST_1=

eval_cmd $*
