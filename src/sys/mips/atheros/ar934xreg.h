/*-
 * Copyright (c) 2013 Adrian Chadd <adrian@FreeBSD.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD: stable/10/sys/mips/atheros/ar934xreg.h 261455 2014-02-04 03:36:42Z eadler $
 */

#ifndef	__AR934X_REG_H__
#define	__AR934X_REG_H__

#define	AR934X_GMAC_BASE	(AR71XX_APB_BASE + 0x00070000)
#define	AR934X_GMAC_SIZE	0x14
#define	AR934X_WMAC_BASE	(AR71XX_APB_BASE + 0x00100000)
#define	AR934X_WMAC_SIZE	0x20000
#define	AR934X_EHCI_BASE	0x1b000000
#define	AR934X_EHCI_SIZE	0x200
#define	AR934X_SRIF_BASE	(AR71XX_APB_BASE + 0x00116000)
#define	AR934X_SRIF_SIZE	0x1000

/* AR934x GMAC configuration */
#define	AR934X_GMAC_REG_ETH_CFG		(AR934X_GMAC_BASE + 0x00)

#define	AR934X_ETH_CFG_RGMII_GMAC0		(1 << 0)
#define	AR934X_ETH_CFG_MII_GMAC0		(1 << 1)
#define	AR934X_ETH_CFG_GMII_GMAC0		(1 << 2)
#define	AR934X_ETH_CFG_MII_GMAC0_MASTER		(1 << 3)
#define	AR934X_ETH_CFG_MII_GMAC0_SLAVE		(1 << 4)
#define	AR934X_ETH_CFG_MII_GMAC0_ERR_EN		(1 << 5)
#define	AR934X_ETH_CFG_SW_ONLY_MODE		(1 << 6)
#define	AR934X_ETH_CFG_SW_PHY_SWAP		(1 << 7)
#define	AR934X_ETH_CFG_SW_APB_ACCESS		(1 << 9)
#define	AR934X_ETH_CFG_RMII_GMAC0		(1 << 10)
#define	AR933X_ETH_CFG_MII_CNTL_SPEED		(1 << 11)
#define	AR934X_ETH_CFG_RMII_GMAC0_MASTER	(1 << 12)
#define	AR934X_ETH_CFG_SW_ACC_MSB_FIRST		(1 << 13)

#define	AR934X_DDR_REG_FLUSH_GE0	(AR71XX_APB_BASE + 0x9c)
#define	AR934X_DDR_REG_FLUSH_GE1	(AR71XX_APB_BASE + 0xa0)
#define	AR934X_DDR_REG_FLUSH_USB	(AR71XX_APB_BASE + 0xa4)
#define	AR934X_DDR_REG_FLUSH_PCIE	(AR71XX_APB_BASE + 0xa8)
#define	AR934X_DDR_REG_FLUSH_WMAC	(AR71XX_APB_BASE + 0xac)

#define	AR934X_PLL_CPU_CONFIG_REG	(AR71XX_PLL_CPU_BASE + 0x00)
#define	AR934X_PLL_DDR_CONFIG_REG	(AR71XX_PLL_CPU_BASE + 0x04)
#define	AR934X_PLL_CPU_DDR_CLK_CTRL_REG	(AR71XX_PLL_CPU_BASE + 0x08)
#define	AR934X_PLL_SWITCH_CLOCK_CONTROL_REG	(AR71XX_PLL_CPU_BASE + 0x24)
#define		AR934X_PLL_SWITCH_CLOCK_CONTROL_MDIO_CLK_SEL   (1 << 6)
#define	AR934X_PLL_ETH_XMII_CONTROL_REG	(AR71XX_PLL_CPU_BASE + 0x2c)

#define	AR934X_PLL_CPU_CONFIG_NFRAC_SHIFT	0
#define	AR934X_PLL_CPU_CONFIG_NFRAC_MASK	0x3f
#define	AR934X_PLL_CPU_CONFIG_NINT_SHIFT	6
#define	AR934X_PLL_CPU_CONFIG_NINT_MASK		0x3f
#define	AR934X_PLL_CPU_CONFIG_REFDIV_SHIFT	12
#define	AR934X_PLL_CPU_CONFIG_REFDIV_MASK	0x1f
#define	AR934X_PLL_CPU_CONFIG_OUTDIV_SHIFT	19
#define	AR934X_PLL_CPU_CONFIG_OUTDIV_MASK	0x3

#define	AR934X_PLL_DDR_CONFIG_NFRAC_SHIFT	0
#define	AR934X_PLL_DDR_CONFIG_NFRAC_MASK	0x3ff
#define	AR934X_PLL_DDR_CONFIG_NINT_SHIFT	10
#define	AR934X_PLL_DDR_CONFIG_NINT_MASK		0x3f
#define	AR934X_PLL_DDR_CONFIG_REFDIV_SHIFT	16
#define	AR934X_PLL_DDR_CONFIG_REFDIV_MASK	0x1f
#define	AR934X_PLL_DDR_CONFIG_OUTDIV_SHIFT	23
#define	AR934X_PLL_DDR_CONFIG_OUTDIV_MASK	0x7

#define	AR934X_PLL_CPU_DDR_CLK_CTRL_CPU_PLL_BYPASS	(1 << 2)
#define	AR934X_PLL_CPU_DDR_CLK_CTRL_DDR_PLL_BYPASS	(1 << 3)
#define	AR934X_PLL_CPU_DDR_CLK_CTRL_AHB_PLL_BYPASS	(1 << 4)
#define	AR934X_PLL_CPU_DDR_CLK_CTRL_CPU_POST_DIV_SHIFT	5
#define	AR934X_PLL_CPU_DDR_CLK_CTRL_CPU_POST_DIV_MASK	0x1f
#define	AR934X_PLL_CPU_DDR_CLK_CTRL_DDR_POST_DIV_SHIFT	10
#define	AR934X_PLL_CPU_DDR_CLK_CTRL_DDR_POST_DIV_MASK	0x1f
#define	AR934X_PLL_CPU_DDR_CLK_CTRL_AHB_POST_DIV_SHIFT	15
#define	AR934X_PLL_CPU_DDR_CLK_CTRL_AHB_POST_DIV_MASK	0x1f
#define	AR934X_PLL_CPU_DDR_CLK_CTRL_CPUCLK_FROM_CPUPLL	(1 << 20)
#define	AR934X_PLL_CPU_DDR_CLK_CTRL_DDRCLK_FROM_DDRPLL	(1 << 21)
#define	AR934X_PLL_CPU_DDR_CLK_CTRL_AHBCLK_FROM_DDRPLL	(1 << 24)

#define	AR934X_RESET_REG_RESET_MODULE		(AR71XX_RST_BLOCK_BASE + 0x1c)
#define	AR934X_RESET_REG_BOOTSTRAP		(AR71XX_RST_BLOCK_BASE + 0xb0)
#define	AR934X_RESET_REG_PCIE_WMAC_INT_STATUS	(AR71XX_RST_BLOCK_BASE + 0xac)

#define	AR934X_RESET_HOST		(1U << 31)
#define	AR934X_RESET_SLIC		(1 << 30)
#define	AR934X_RESET_HDMA		(1 << 29)
#define	AR934X_RESET_EXTERNAL		(1 << 28)
#define	AR934X_RESET_RTC		(1 << 27)
#define	AR934X_RESET_PCIE_EP_INT	(1 << 26)
#define	AR934X_RESET_CHKSUM_ACC		(1 << 25)
#define	AR934X_RESET_FULL_CHIP		(1 << 24)
#define	AR934X_RESET_GE1_MDIO		(1 << 23)
#define	AR934X_RESET_GE0_MDIO		(1 << 22)
#define	AR934X_RESET_CPU_NMI		(1 << 21)
#define	AR934X_RESET_CPU_COLD		(1 << 20)
#define	AR934X_RESET_HOST_RESET_INT	(1 << 19)
#define	AR934X_RESET_PCIE_EP		(1 << 18)
#define	AR934X_RESET_UART1		(1 << 17)
#define	AR934X_RESET_DDR		(1 << 16)
#define	AR934X_RESET_USB_PHY_PLL_PWD_EXT	(1 << 15)
#define	AR934X_RESET_NANDF		(1 << 14)
#define	AR934X_RESET_GE1_MAC		(1 << 13)
#define	AR934X_RESET_ETH_SWITCH_ANALOG	(1 << 12)
#define	AR934X_RESET_USB_PHY_ANALOG	(1 << 11)
#define	AR934X_RESET_HOST_DMA_INT	(1 << 10)
#define	AR934X_RESET_GE0_MAC		(1 << 9)
#define	AR934X_RESET_ETH_SWITCH		(1 << 8)
#define	AR934X_RESET_PCIE_PHY		(1 << 7)
#define	AR934X_RESET_PCIE		(1 << 6)
#define	AR934X_RESET_USB_HOST		(1 << 5)
#define	AR934X_RESET_USB_PHY		(1 << 4)
#define	AR934X_RESET_USBSUS_OVERRIDE	(1 << 3)
#define	AR934X_RESET_LUT		(1 << 2)
#define	AR934X_RESET_MBOX		(1 << 1)
#define	AR934X_RESET_I2S		(1 << 0)

#define	AR934X_BOOTSTRAP_SW_OPTION8	(1 << 23)
#define	AR934X_BOOTSTRAP_SW_OPTION7	(1 << 22)
#define	AR934X_BOOTSTRAP_SW_OPTION6	(1 << 21)
#define	AR934X_BOOTSTRAP_SW_OPTION5	(1 << 20)
#define	AR934X_BOOTSTRAP_SW_OPTION4	(1 << 19)
#define	AR934X_BOOTSTRAP_SW_OPTION3	(1 << 18)
#define	AR934X_BOOTSTRAP_SW_OPTION2	(1 << 17)
#define	AR934X_BOOTSTRAP_SW_OPTION1	(1 << 16)
#define	AR934X_BOOTSTRAP_USB_MODE_DEVICE	(1 << 7)
#define	AR934X_BOOTSTRAP_PCIE_RC	(1 << 6)
#define	AR934X_BOOTSTRAP_EJTAG_MODE	(1 << 5)
#define	AR934X_BOOTSTRAP_REF_CLK_40	(1 << 4)
#define	AR934X_BOOTSTRAP_BOOT_FROM_SPI	(1 << 2)
#define	AR934X_BOOTSTRAP_SDRAM_DISABLED	(1 << 1)
#define	AR934X_BOOTSTRAP_DDR1		(1 << 0)

#define	AR934X_PCIE_WMAC_INT_WMAC_MISC	(1 << 0)
#define	AR934X_PCIE_WMAC_INT_WMAC_TX	(1 << 1)
#define	AR934X_PCIE_WMAC_INT_WMAC_RXLP	(1 << 2)
#define	AR934X_PCIE_WMAC_INT_WMAC_RXHP	(1 << 3)
#define	AR934X_PCIE_WMAC_INT_PCIE_RC	(1 << 4)
#define	AR934X_PCIE_WMAC_INT_PCIE_RC0	(1 << 5)
#define	AR934X_PCIE_WMAC_INT_PCIE_RC1	(1 << 6)
#define	AR934X_PCIE_WMAC_INT_PCIE_RC2	(1 << 7)
#define	AR934X_PCIE_WMAC_INT_PCIE_RC3	(1 << 8)
#define	AR934X_PCIE_WMAC_INT_WMAC_ALL \
        (AR934X_PCIE_WMAC_INT_WMAC_MISC | AR934X_PCIE_WMAC_INT_WMAC_TX | \
         AR934X_PCIE_WMAC_INT_WMAC_RXLP | AR934X_PCIE_WMAC_INT_WMAC_RXHP)

#define	AR934X_PCIE_WMAC_INT_PCIE_ALL \
        (AR934X_PCIE_WMAC_INT_PCIE_RC | AR934X_PCIE_WMAC_INT_PCIE_RC0 | \
         AR934X_PCIE_WMAC_INT_PCIE_RC1 | AR934X_PCIE_WMAC_INT_PCIE_RC2 | \
         AR934X_PCIE_WMAC_INT_PCIE_RC3)

#define	REV_ID_MAJOR_AR9341		0x0120
#define	REV_ID_MAJOR_AR9342		0x1120
#define	REV_ID_MAJOR_AR9344		0x2120

#define	AR934X_REV_ID_REVISION_MASK     0xf

/*
 * GPIO block
 */
#define	AR934X_GPIO_REG_FUNC		0x6c
#define	AR934X_GPIO_COUNT		23

/*
 * SRIF block
 */
#define	AR934X_SRIF_CPU_DPLL1_REG	(AR934X_SRIF_BASE + 0x1c0)
#define	AR934X_SRIF_CPU_DPLL2_REG	(AR934X_SRIF_BASE + 0x1c4)
#define	AR934X_SRIF_CPU_DPLL3_REG	(AR934X_SRIF_BASE + 0x1c8)

#define	AR934X_SRIF_DDR_DPLL1_REG	(AR934X_SRIF_BASE + 0x240)
#define	AR934X_SRIF_DDR_DPLL2_REG	(AR934X_SRIF_BASE + 0x244)
#define	AR934X_SRIF_DDR_DPLL3_REG	(AR934X_SRIF_BASE + 0x248)

#define	AR934X_SRIF_DPLL1_REFDIV_SHIFT	27
#define	AR934X_SRIF_DPLL1_REFDIV_MASK	0x1f
#define	AR934X_SRIF_DPLL1_NINT_SHIFT	18
#define	AR934X_SRIF_DPLL1_NINT_MASK	0x1ff
#define	AR934X_SRIF_DPLL1_NFRAC_MASK	0x0003ffff

#define	AR934X_SRIF_DPLL2_LOCAL_PLL	(1 << 30)
#define	AR934X_SRIF_DPLL2_OUTDIV_SHIFT	13
#define	AR934X_SRIF_DPLL2_OUTDIV_MASK	0x7

/* XXX verify! */
#define	AR934X_PLL_VAL_1000		0x16000000
#define	AR934X_PLL_VAL_100		0x00000101
#define	AR934X_PLL_VAL_10		0x00001616

#endif	/* __AR934X_REG_H__ */
