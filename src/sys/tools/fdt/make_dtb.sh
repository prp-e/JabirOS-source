#!/bin/sh
#
# $FreeBSD: releng/10.1/sys/tools/fdt/make_dtb.sh 266251 2014-05-16 15:56:34Z ian $

# Script generates dtb file ($3) from dts source ($2) in build tree S ($1)
S=$1
dts=$2
dtb=$3

cpp -x assembler-with-cpp -I $S/gnu/dts/include -I $S/boot/fdt/dts/${MACHINE} -I $S/gnu/dts/${MACHINE} -include $dts /dev/null | 
	dtc -O dtb -o $dtb -b 0 -p 1024 -i $S/boot/fdt/dts/${MACHINE} -i $S/gnu/dts/${MACHINE}
