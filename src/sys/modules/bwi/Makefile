# $FreeBSD: releng/10.1/sys/modules/bwi/Makefile 235775 2012-05-22 06:33:08Z uqs $

.PATH: ${.CURDIR}/../../dev/bwi

KMOD	= if_bwi

SRCS	= if_bwi.c if_bwi_pci.c bwimac.c bwiphy.c bwirf.c
SRCS	+= device_if.h bus_if.h pci_if.h opt_inet.h opt_bwi.h opt_wlan.h

opt_bwi.h:
	echo '#define BWI_DEBUG 1' > opt_bwi.h
#	echo '#define BWI_DEBUG_VERBOSE 1' >> opt_bwi.h

.include <bsd.kmod.mk>
