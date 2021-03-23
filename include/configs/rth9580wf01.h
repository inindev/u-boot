/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * configuation settings for the rth9580wf01 board
 */

#ifndef __RTH9580WF01_H__
#define __RTH9580WF01_H__

/* ARM asynchronous clock */
#define CONFIG_SYS_AT91_SLOW_CLOCK	32768
#define CONFIG_SYS_AT91_MAIN_CLOCK	12000000	/* 12 MHz crystal */

#define CONFIG_CMDLINE_TAG		/* enable passing of ATAGs */
#define CONFIG_SETUP_MEMORY_TAGS
#define CONFIG_INITRD_TAG
#define CONFIG_SKIP_LOWLEVEL_INIT

/* general purpose I/O */
#define CONFIG_ATMEL_LEGACY		/* required until (g)pio is fixed */

/* BOOTP options */
#define CONFIG_BOOTP_BOOTFILESIZE
#define CONFIG_BOOTP_BOOTPATH
#define CONFIG_BOOTP_GATEWAY
#define CONFIG_BOOTP_HOSTNAME

/* SDRAM */
#define CONFIG_SYS_SDRAM_BASE		0x20000000
#define CONFIG_SYS_SDRAM_SIZE		0x01000000	/* 16 megs */

#define CONFIG_SYS_INIT_SP_ADDR \
	(CONFIG_SYS_SDRAM_BASE + 16 * 1024 - GENERATED_GBL_DATA_SIZE)

/* USB */
#ifdef CONFIG_CMD_USB
#ifndef CONFIG_USB_EHCI_HCD
#define CONFIG_USB_ATMEL
#define CONFIG_USB_ATMEL_CLK_SEL_UPLL
#define CONFIG_USB_OHCI_NEW
#define CONFIG_SYS_USB_OHCI_CPU_INIT
#define CONFIG_SYS_USB_OHCI_REGS_BASE		ATMEL_BASE_OHCI
#define CONFIG_SYS_USB_OHCI_SLOT_NAME		"at91sam9x5"
#define CONFIG_SYS_USB_OHCI_MAX_ROOT_PORTS	3
#endif
#endif

#define CONFIG_SYS_LOAD_ADDR		0x20f50000	/* load address */

/* bootstrap + u-boot + env1 + env2  + linux in spi flash */
#define CONFIG_BOOTCOMMAND	"sf probe 0; " \
				"sf read 0x20800000 0xc0000 0x400000; " \
				"bootm 0x20800000 - 0x${fdtcontroladdr}"

/*
 * Size of malloc() pool
 */
#define CONFIG_SYS_MALLOC_LEN		(256 << 10)	/* reserve 256k for malloc() */

#define CONFIG_SYS_MASTER_CLOCK		132096000
#define CONFIG_SYS_AT91_PLLA		0x20c73f03
#define CONFIG_SYS_MCKR			0x1301
#define CONFIG_SYS_MCKR_CSS		0x1302

#endif /* __RTH9580WF01_H__ */
