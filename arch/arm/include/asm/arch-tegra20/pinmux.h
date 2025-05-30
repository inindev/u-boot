/* SPDX-License-Identifier: GPL-2.0+ */
/*
 *  (C) Copyright 2010,2011
 *  NVIDIA Corporation <www.nvidia.com>
 */

#ifndef _TEGRA20_PINMUX_H_
#define _TEGRA20_PINMUX_H_

/*
 * Pin groups which we adjust. There are three basic attributes of each pin
 * group which use this enum:
 *
 *	- function
 *	- pullup / pulldown
 *	- tristate or normal
 */
enum pmux_pingrp {
	/* APB_MISC_PP_TRISTATE_REG_A_0 */
	PMUX_PINGRP_ATA,
	PMUX_PINGRP_ATB,
	PMUX_PINGRP_ATC,
	PMUX_PINGRP_ATD,
	PMUX_PINGRP_CDEV1,
	PMUX_PINGRP_CDEV2,
	PMUX_PINGRP_CSUS,
	PMUX_PINGRP_DAP1,

	PMUX_PINGRP_DAP2,
	PMUX_PINGRP_DAP3,
	PMUX_PINGRP_DAP4,
	PMUX_PINGRP_DTA,
	PMUX_PINGRP_DTB,
	PMUX_PINGRP_DTC,
	PMUX_PINGRP_DTD,
	PMUX_PINGRP_DTE,

	PMUX_PINGRP_GPU,
	PMUX_PINGRP_GPV,
	PMUX_PINGRP_I2CP,
	PMUX_PINGRP_IRTX,
	PMUX_PINGRP_IRRX,
	PMUX_PINGRP_KBCB,
	PMUX_PINGRP_KBCA,
	PMUX_PINGRP_PMC,

	PMUX_PINGRP_PTA,
	PMUX_PINGRP_RM,
	PMUX_PINGRP_KBCE,
	PMUX_PINGRP_KBCF,
	PMUX_PINGRP_GMA,
	PMUX_PINGRP_GMC,
	PMUX_PINGRP_SDIO1,
	PMUX_PINGRP_OWC,

	/* 32: APB_MISC_PP_TRISTATE_REG_B_0 */
	PMUX_PINGRP_GME,
	PMUX_PINGRP_SDC,
	PMUX_PINGRP_SDD,
	PMUX_PINGRP_RESERVED0,
	PMUX_PINGRP_SLXA,
	PMUX_PINGRP_SLXC,
	PMUX_PINGRP_SLXD,
	PMUX_PINGRP_SLXK,

	PMUX_PINGRP_SPDI,
	PMUX_PINGRP_SPDO,
	PMUX_PINGRP_SPIA,
	PMUX_PINGRP_SPIB,
	PMUX_PINGRP_SPIC,
	PMUX_PINGRP_SPID,
	PMUX_PINGRP_SPIE,
	PMUX_PINGRP_SPIF,

	PMUX_PINGRP_SPIG,
	PMUX_PINGRP_SPIH,
	PMUX_PINGRP_UAA,
	PMUX_PINGRP_UAB,
	PMUX_PINGRP_UAC,
	PMUX_PINGRP_UAD,
	PMUX_PINGRP_UCA,
	PMUX_PINGRP_UCB,

	PMUX_PINGRP_RESERVED1,
	PMUX_PINGRP_ATE,
	PMUX_PINGRP_KBCC,
	PMUX_PINGRP_RESERVED2,
	PMUX_PINGRP_RESERVED3,
	PMUX_PINGRP_GMB,
	PMUX_PINGRP_GMD,
	PMUX_PINGRP_DDC,

	/* 64: APB_MISC_PP_TRISTATE_REG_C_0 */
	PMUX_PINGRP_LD0,
	PMUX_PINGRP_LD1,
	PMUX_PINGRP_LD2,
	PMUX_PINGRP_LD3,
	PMUX_PINGRP_LD4,
	PMUX_PINGRP_LD5,
	PMUX_PINGRP_LD6,
	PMUX_PINGRP_LD7,

	PMUX_PINGRP_LD8,
	PMUX_PINGRP_LD9,
	PMUX_PINGRP_LD10,
	PMUX_PINGRP_LD11,
	PMUX_PINGRP_LD12,
	PMUX_PINGRP_LD13,
	PMUX_PINGRP_LD14,
	PMUX_PINGRP_LD15,

	PMUX_PINGRP_LD16,
	PMUX_PINGRP_LD17,
	PMUX_PINGRP_LHP0,
	PMUX_PINGRP_LHP1,
	PMUX_PINGRP_LHP2,
	PMUX_PINGRP_LVP0,
	PMUX_PINGRP_LVP1,
	PMUX_PINGRP_HDINT,

	PMUX_PINGRP_LM0,
	PMUX_PINGRP_LM1,
	PMUX_PINGRP_LVS,
	PMUX_PINGRP_LSC0,
	PMUX_PINGRP_LSC1,
	PMUX_PINGRP_LSCK,
	PMUX_PINGRP_LDC,
	PMUX_PINGRP_LCSN,

	/* 96: APB_MISC_PP_TRISTATE_REG_D_0 */
	PMUX_PINGRP_LSPI,
	PMUX_PINGRP_LSDA,
	PMUX_PINGRP_LSDI,
	PMUX_PINGRP_LPW0,
	PMUX_PINGRP_LPW1,
	PMUX_PINGRP_LPW2,
	PMUX_PINGRP_LDI,
	PMUX_PINGRP_LHS,

	PMUX_PINGRP_LPP,
	PMUX_PINGRP_RESERVED4,
	PMUX_PINGRP_KBCD,
	PMUX_PINGRP_GPU7,
	PMUX_PINGRP_DTF,
	PMUX_PINGRP_UDA,
	PMUX_PINGRP_CRTP,
	PMUX_PINGRP_SDB,

	/* these pin groups only have pullup and pull down control */
	PMUX_PINGRP_CK32,
	PMUX_PINGRP_DDRC,
	PMUX_PINGRP_PMCA,
	PMUX_PINGRP_PMCB,
	PMUX_PINGRP_PMCC,
	PMUX_PINGRP_PMCD,
	PMUX_PINGRP_PMCE,
	PMUX_PINGRP_XM2C,
	PMUX_PINGRP_XM2D,
	PMUX_PINGRP_COUNT,
};

enum pmux_drvgrp {
	PMUX_DRVGRP_AO1,
	PMUX_DRVGRP_AO2,
	PMUX_DRVGRP_AT1,
	PMUX_DRVGRP_AT2,
	PMUX_DRVGRP_CDEV1,
	PMUX_DRVGRP_CDEV2,
	PMUX_DRVGRP_CSUS,
	PMUX_DRVGRP_DAP1,
	PMUX_DRVGRP_DAP2,
	PMUX_DRVGRP_DAP3,
	PMUX_DRVGRP_DAP4,
	PMUX_DRVGRP_DBG,
	PMUX_DRVGRP_LCD1,
	PMUX_DRVGRP_LCD2,
	PMUX_DRVGRP_SDIO2,
	PMUX_DRVGRP_SDIO3,
	PMUX_DRVGRP_SPI,
	PMUX_DRVGRP_UAA,
	PMUX_DRVGRP_UAB,
	PMUX_DRVGRP_UART2,
	PMUX_DRVGRP_UART3,
	PMUX_DRVGRP_VI1,
	PMUX_DRVGRP_VI2,
	PMUX_DRVGRP_XM2A,
	PMUX_DRVGRP_XM2C,
	PMUX_DRVGRP_XM2D,
	PMUX_DRVGRP_XM2CLK,
	PMUX_DRVGRP_SDIO1 = (0x78 / 4),
	PMUX_DRVGRP_CRT = (0x84 / 4),
	PMUX_DRVGRP_DDC,
	PMUX_DRVGRP_GMA,
	PMUX_DRVGRP_GMB,
	PMUX_DRVGRP_GMC,
	PMUX_DRVGRP_GMD,
	PMUX_DRVGRP_GME,
	PMUX_DRVGRP_OWR,
	PMUX_DRVGRP_UDA,
	PMUX_DRVGRP_COUNT,
};

/*
 * Functions which can be assigned to each of the pin groups. The values here
 * bear no relation to the values programmed into pinmux registers and are
 * purely a convenience. The translation is done through a table search.
 */
enum pmux_func {
	PMUX_FUNC_DEFAULT,
	PMUX_FUNC_AHB_CLK,
	PMUX_FUNC_APB_CLK,
	PMUX_FUNC_AUDIO_SYNC,
	PMUX_FUNC_CRT,
	PMUX_FUNC_DAP1,
	PMUX_FUNC_DAP2,
	PMUX_FUNC_DAP3,
	PMUX_FUNC_DAP4,
	PMUX_FUNC_DAP5,
	PMUX_FUNC_DISPA,
	PMUX_FUNC_DISPB,
	PMUX_FUNC_EMC_TEST0_DLL,
	PMUX_FUNC_EMC_TEST1_DLL,
	PMUX_FUNC_GMI,
	PMUX_FUNC_GMI_INT,
	PMUX_FUNC_HDMI,
	PMUX_FUNC_I2C,
	PMUX_FUNC_I2C2,
	PMUX_FUNC_I2C3,
	PMUX_FUNC_IDE,
	PMUX_FUNC_KBC,
	PMUX_FUNC_MIO,
	PMUX_FUNC_MIPI_HS,
	PMUX_FUNC_NAND,
	PMUX_FUNC_OSC,
	PMUX_FUNC_OWR,
	PMUX_FUNC_PCIE,
	PMUX_FUNC_PLLA_OUT,
	PMUX_FUNC_PLLC_OUT1,
	PMUX_FUNC_PLLM_OUT1,
	PMUX_FUNC_PLLP_OUT2,
	PMUX_FUNC_PLLP_OUT3,
	PMUX_FUNC_PLLP_OUT4,
	PMUX_FUNC_PWM,
	PMUX_FUNC_PWR_INTR,
	PMUX_FUNC_PWR_ON,
	PMUX_FUNC_RTCK,
	PMUX_FUNC_SDIO1,
	PMUX_FUNC_SDIO2,
	PMUX_FUNC_SDIO3,
	PMUX_FUNC_SDIO4,
	PMUX_FUNC_SFLASH,
	PMUX_FUNC_SPDIF,
	PMUX_FUNC_SPI1,
	PMUX_FUNC_SPI2,
	PMUX_FUNC_SPI2_ALT,
	PMUX_FUNC_SPI3,
	PMUX_FUNC_SPI4,
	PMUX_FUNC_TRACE,
	PMUX_FUNC_TWC,
	PMUX_FUNC_UARTA,
	PMUX_FUNC_UARTB,
	PMUX_FUNC_UARTC,
	PMUX_FUNC_UARTD,
	PMUX_FUNC_UARTE,
	PMUX_FUNC_ULPI,
	PMUX_FUNC_VI,
	PMUX_FUNC_VI_SENSOR_CLK,
	PMUX_FUNC_XIO,
	PMUX_FUNC_RSVD1,
	PMUX_FUNC_RSVD2,
	PMUX_FUNC_RSVD3,
	PMUX_FUNC_RSVD4,
	PMUX_FUNC_COUNT,
};

static const char * const tegra_pinctrl_to_pingrp[] = {
	/* APB_MISC_PP_TRISTATE_REG_A_0 */
	[PMUX_PINGRP_ATA] = "ata",
	[PMUX_PINGRP_ATB] = "atb",
	[PMUX_PINGRP_ATC] = "atc",
	[PMUX_PINGRP_ATD] = "atd",
	[PMUX_PINGRP_CDEV1] = "cdev1",
	[PMUX_PINGRP_CDEV2] = "cdev2",
	[PMUX_PINGRP_CSUS] = "csus",
	[PMUX_PINGRP_DAP1] = "dap1",

	[PMUX_PINGRP_DAP2] = "dap2",
	[PMUX_PINGRP_DAP3] = "dap3",
	[PMUX_PINGRP_DAP4] = "dap4",
	[PMUX_PINGRP_DTA] = "dta",
	[PMUX_PINGRP_DTB] = "dtb",
	[PMUX_PINGRP_DTC] = "dtc",
	[PMUX_PINGRP_DTD] = "dtd",
	[PMUX_PINGRP_DTE] = "dte",

	[PMUX_PINGRP_GPU] = "gpu",
	[PMUX_PINGRP_GPV] = "gpv",
	[PMUX_PINGRP_I2CP] = "i2cp",
	[PMUX_PINGRP_IRTX] = "irtx",
	[PMUX_PINGRP_IRRX] = "irrx",
	[PMUX_PINGRP_KBCB] = "kbcb",
	[PMUX_PINGRP_KBCA] = "kbca",
	[PMUX_PINGRP_PMC] = "pmc",

	[PMUX_PINGRP_PTA] = "pta",
	[PMUX_PINGRP_RM] = "rm",
	[PMUX_PINGRP_KBCE] = "kbce",
	[PMUX_PINGRP_KBCF] = "kbcf",
	[PMUX_PINGRP_GMA] = "gma",
	[PMUX_PINGRP_GMC] = "gmc",
	[PMUX_PINGRP_SDIO1] = "sdio1",
	[PMUX_PINGRP_OWC] = "owc",

	/* 32: APB_MISC_PP_TRISTATE_REG_B_0 */
	[PMUX_PINGRP_GME] = "gme",
	[PMUX_PINGRP_SDC] = "sdc",
	[PMUX_PINGRP_SDD] = "sdd",
	[PMUX_PINGRP_RESERVED0] = "reserved0",
	[PMUX_PINGRP_SLXA] = "slxa",
	[PMUX_PINGRP_SLXC] = "slxc",
	[PMUX_PINGRP_SLXD] = "slxd",
	[PMUX_PINGRP_SLXK] = "slxk",

	[PMUX_PINGRP_SPDI] = "spdi",
	[PMUX_PINGRP_SPDO] = "spdo",
	[PMUX_PINGRP_SPIA] = "spia",
	[PMUX_PINGRP_SPIB] = "spib",
	[PMUX_PINGRP_SPIC] = "spic",
	[PMUX_PINGRP_SPID] = "spid",
	[PMUX_PINGRP_SPIE] = "spie",
	[PMUX_PINGRP_SPIF] = "spif",

	[PMUX_PINGRP_SPIG] = "spig",
	[PMUX_PINGRP_SPIH] = "spih",
	[PMUX_PINGRP_UAA] = "uaa",
	[PMUX_PINGRP_UAB] = "uab",
	[PMUX_PINGRP_UAC] = "uac",
	[PMUX_PINGRP_UAD] = "uad",
	[PMUX_PINGRP_UCA] = "uca",
	[PMUX_PINGRP_UCB] = "ucb",

	[PMUX_PINGRP_RESERVED1] = "reserved1",
	[PMUX_PINGRP_ATE] = "ate",
	[PMUX_PINGRP_KBCC] = "kbcc",
	[PMUX_PINGRP_RESERVED2] = "reserved2",
	[PMUX_PINGRP_RESERVED3] = "reserved3",
	[PMUX_PINGRP_GMB] = "gmb",
	[PMUX_PINGRP_GMD] = "gmd",
	[PMUX_PINGRP_DDC] = "ddc",

	/* 64: APB_MISC_PP_TRISTATE_REG_C_0 */
	[PMUX_PINGRP_LD0] = "ld0",
	[PMUX_PINGRP_LD1] = "ld1",
	[PMUX_PINGRP_LD2] = "ld2",
	[PMUX_PINGRP_LD3] = "ld3",
	[PMUX_PINGRP_LD4] = "ld4",
	[PMUX_PINGRP_LD5] = "ld5",
	[PMUX_PINGRP_LD6] = "ld6",
	[PMUX_PINGRP_LD7] = "ld7",

	[PMUX_PINGRP_LD8] = "ld8",
	[PMUX_PINGRP_LD9] = "ld9",
	[PMUX_PINGRP_LD10] = "ld10",
	[PMUX_PINGRP_LD11] = "ld11",
	[PMUX_PINGRP_LD12] = "ld12",
	[PMUX_PINGRP_LD13] = "ld13",
	[PMUX_PINGRP_LD14] = "ld14",
	[PMUX_PINGRP_LD15] = "ld15",

	[PMUX_PINGRP_LD16] = "ld16",
	[PMUX_PINGRP_LD17] = "ld17",
	[PMUX_PINGRP_LHP0] = "lhp0",
	[PMUX_PINGRP_LHP1] = "lhp1",
	[PMUX_PINGRP_LHP2] = "lhp2",
	[PMUX_PINGRP_LVP0] = "lvp0",
	[PMUX_PINGRP_LVP1] = "lvp1",
	[PMUX_PINGRP_HDINT] = "hdint",

	[PMUX_PINGRP_LM0] = "lm0",
	[PMUX_PINGRP_LM1] = "lm1",
	[PMUX_PINGRP_LVS] = "lvs",
	[PMUX_PINGRP_LSC0] = "lsc0",
	[PMUX_PINGRP_LSC1] = "lsc1",
	[PMUX_PINGRP_LSCK] = "lsck",
	[PMUX_PINGRP_LDC] = "ldc",
	[PMUX_PINGRP_LCSN] = "lcsn",

	/* 96: APB_MISC_PP_TRISTATE_REG_D_0 */
	[PMUX_PINGRP_LSPI] = "lspi",
	[PMUX_PINGRP_LSDA] = "lsda",
	[PMUX_PINGRP_LSDI] = "lsdi",
	[PMUX_PINGRP_LPW0] = "lpw0",
	[PMUX_PINGRP_LPW1] = "lpw1",
	[PMUX_PINGRP_LPW2] = "lpw2",
	[PMUX_PINGRP_LDI] = "ldi",
	[PMUX_PINGRP_LHS] = "lhs",

	[PMUX_PINGRP_LPP] = "lpp",
	[PMUX_PINGRP_RESERVED4] = "reserved4",
	[PMUX_PINGRP_KBCD] = "kbcd",
	[PMUX_PINGRP_GPU7] = "gpu7",
	[PMUX_PINGRP_DTF] = "dtf",
	[PMUX_PINGRP_UDA] = "uda",
	[PMUX_PINGRP_CRTP] = "crtp",
	[PMUX_PINGRP_SDB] = "sdb",

	/* these pin groups only have pullup and pull down control */
	[PMUX_PINGRP_CK32] = "ck32",
	[PMUX_PINGRP_DDRC] = "ddrc",
	[PMUX_PINGRP_PMCA] = "pmca",
	[PMUX_PINGRP_PMCB] = "pmcb",
	[PMUX_PINGRP_PMCC] = "pmcc",
	[PMUX_PINGRP_PMCD] = "pmcd",
	[PMUX_PINGRP_PMCE] = "pmce",
	[PMUX_PINGRP_XM2C] = "xm2c",
	[PMUX_PINGRP_XM2D] = "xm2d",
};

static const char * const tegra_pinctrl_to_drvgrp[] = {
	[PMUX_DRVGRP_AO1] = "drive_ao1",
	[PMUX_DRVGRP_AO2] = "drive_ao2",
	[PMUX_DRVGRP_AT1] = "drive_at1",
	[PMUX_DRVGRP_AT2] = "drive_at2",
	[PMUX_DRVGRP_CDEV1] = "drive_cdev1",
	[PMUX_DRVGRP_CDEV2] = "drive_cdev2",
	[PMUX_DRVGRP_CSUS] = "drive_csus",
	[PMUX_DRVGRP_DAP1] = "drive_dap1",
	[PMUX_DRVGRP_DAP2] = "drive_dap2",
	[PMUX_DRVGRP_DAP3] = "drive_dap3",
	[PMUX_DRVGRP_DAP4] = "drive_dap4",
	[PMUX_DRVGRP_DBG] = "drive_dbg",
	[PMUX_DRVGRP_LCD1] = "drive_lcd1",
	[PMUX_DRVGRP_LCD2] = "drive_lcd2",
	[PMUX_DRVGRP_SDIO2] = "drive_sdio2",
	[PMUX_DRVGRP_SDIO3] = "drive_sdio3",
	[PMUX_DRVGRP_SPI] = "drive_spi",
	[PMUX_DRVGRP_UAA] = "drive_uaa",
	[PMUX_DRVGRP_UAB] = "drive_uab",
	[PMUX_DRVGRP_UART2] = "drive_uart2",
	[PMUX_DRVGRP_UART3] = "drive_uart3",
	[PMUX_DRVGRP_VI1] = "drive_vi1",
	[PMUX_DRVGRP_VI2] = "drive_vi2",
	[PMUX_DRVGRP_XM2A] = "drive_xm2a",
	[PMUX_DRVGRP_XM2C] = "drive_xm2c",
	[PMUX_DRVGRP_XM2D] = "drive_xm2d",
	[PMUX_DRVGRP_XM2CLK] = "drive_xm2clk",
	[PMUX_DRVGRP_SDIO1] = "drive_sdio1",
	[PMUX_DRVGRP_CRT] = "drive_crt",
	[PMUX_DRVGRP_DDC] = "drive_ddc",
	[PMUX_DRVGRP_GMA] = "drive_gma",
	[PMUX_DRVGRP_GMB] = "drive_gmb",
	[PMUX_DRVGRP_GMC] = "drive_gmc",
	[PMUX_DRVGRP_GMD] = "drive_gmd",
	[PMUX_DRVGRP_GME] = "drive_gme",
	[PMUX_DRVGRP_OWR] = "drive_owr",
	[PMUX_DRVGRP_UDA] = "drive_uda",
};

static const char * const tegra_pinctrl_to_func[] = {
	[PMUX_FUNC_DEFAULT] = "default",
	[PMUX_FUNC_AHB_CLK] = "ahb_clk",
	[PMUX_FUNC_APB_CLK] = "apb_clk",
	[PMUX_FUNC_AUDIO_SYNC] = "audio_sync",
	[PMUX_FUNC_CRT] = "crt",
	[PMUX_FUNC_DAP1] = "dap1",
	[PMUX_FUNC_DAP2] = "dap2",
	[PMUX_FUNC_DAP3] = "dap3",
	[PMUX_FUNC_DAP4] = "dap4",
	[PMUX_FUNC_DAP5] = "dap5",
	[PMUX_FUNC_DISPA] = "displaya",
	[PMUX_FUNC_DISPB] = "displayb",
	[PMUX_FUNC_EMC_TEST0_DLL] = "emc_test0_dll",
	[PMUX_FUNC_EMC_TEST1_DLL] = "emc_test1_dll",
	[PMUX_FUNC_GMI] = "gmi",
	[PMUX_FUNC_GMI_INT] = "gmi_int",
	[PMUX_FUNC_HDMI] = "hdmi",
	[PMUX_FUNC_I2C] = "i2c1",
	[PMUX_FUNC_I2C2] = "i2c2",
	[PMUX_FUNC_I2C3] = "i2c3",
	[PMUX_FUNC_IDE] = "ide",
	[PMUX_FUNC_KBC] = "kbc",
	[PMUX_FUNC_MIO] = "mio",
	[PMUX_FUNC_MIPI_HS] = "mipi_hs",
	[PMUX_FUNC_NAND] = "nand",
	[PMUX_FUNC_OSC] = "osc",
	[PMUX_FUNC_OWR] = "owr",
	[PMUX_FUNC_PCIE] = "pcie",
	[PMUX_FUNC_PLLA_OUT] = "plla_out",
	[PMUX_FUNC_PLLC_OUT1] = "pllc_out1",
	[PMUX_FUNC_PLLM_OUT1] = "pllm_out1",
	[PMUX_FUNC_PLLP_OUT2] = "pllp_out2",
	[PMUX_FUNC_PLLP_OUT3] = "pllp_out3",
	[PMUX_FUNC_PLLP_OUT4] = "pllp_out4",
	[PMUX_FUNC_PWM] = "pwm",
	[PMUX_FUNC_PWR_INTR] = "pwr_intr",
	[PMUX_FUNC_PWR_ON] = "pwr_on",
	[PMUX_FUNC_RTCK] = "rtck",
	[PMUX_FUNC_SDIO1] = "sdio1",
	[PMUX_FUNC_SDIO2] = "sdio2",
	[PMUX_FUNC_SDIO3] = "sdio3",
	[PMUX_FUNC_SDIO4] = "sdio4",
	[PMUX_FUNC_SFLASH] = "sflash",
	[PMUX_FUNC_SPDIF] = "spdif",
	[PMUX_FUNC_SPI1] = "spi1",
	[PMUX_FUNC_SPI2] = "spi2",
	[PMUX_FUNC_SPI2_ALT] = "spi2_alt",
	[PMUX_FUNC_SPI3] = "spi3",
	[PMUX_FUNC_SPI4] = "spi4",
	[PMUX_FUNC_TRACE] = "trace",
	[PMUX_FUNC_TWC] = "twc",
	[PMUX_FUNC_UARTA] = "uarta",
	[PMUX_FUNC_UARTB] = "uartb",
	[PMUX_FUNC_UARTC] = "uartc",
	[PMUX_FUNC_UARTD] = "uartd",
	[PMUX_FUNC_UARTE] = "uarte",
	[PMUX_FUNC_ULPI] = "ulpi",
	[PMUX_FUNC_VI] = "vi",
	[PMUX_FUNC_VI_SENSOR_CLK] = "vi_sensor_clk",
	[PMUX_FUNC_XIO] = "xio",
	[PMUX_FUNC_RSVD1] = "rsvd1",
	[PMUX_FUNC_RSVD2] = "rsvd2",
	[PMUX_FUNC_RSVD3] = "rsvd3",
	[PMUX_FUNC_RSVD4] = "rsvd4",
};

#define TEGRA_PMX_SOC_DRV_GROUP_BASE_REG 0x868
#include <asm/arch-tegra/pinmux.h>

#endif /* _TEGRA20_PINMUX_H_ */
