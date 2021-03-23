// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (C) 2012 Atmel Corporation
 */

#include <common.h>
#include <env.h>
#include <dm.h>
#include <init.h>
#include <asm/arch/at91_common.h>
#include <asm/arch/clk.h>
#include <debug_uart.h>
#include <asm/mach-types.h>
#include <atmel_lcd.h>
#include <version.h>
#include <video.h>
#ifdef CONFIG_DM_VIDEO
#include <video_console.h>
#endif

DECLARE_GLOBAL_DATA_PTR;

/* ------------------------------------------------------------------------- */
/*
 * Miscelaneous platform dependent initialisations
 */

#if defined(CONFIG_DM_VIDEO) && defined(CONFIG_ATMEL_HLCD)
int at91_video_show_board_info(void)
{
	struct video_priv *vid;
	struct vidconsole_priv *priv;
//	ulong dram_size, nand_size;
	int i, j;
	u32 len = 0;
	char b;
	char *p;
	char buf[255];
	char *corp = "Microchip Technology Inc.\n";
	char temp[32];
	struct udevice *dev, *con;
	const char *s;
	vidinfo_t logo_info;
	int ret;

	len += sprintf(&buf[len], "%s\n", U_BOOT_VERSION);
	memcpy(&buf[len], corp, strlen(corp));
	len += strlen(corp);
	len += sprintf(&buf[len], "%s CPU at %s MHz\n", get_cpu_name(),
			strmhz(temp, get_cpu_clk_rate()));

	len += sprintf(&buf[len], "%d MB SDRAM, 16 MB Flash\n",
			CONFIG_SYS_SDRAM_SIZE >> 20);

	ret = uclass_get_device(UCLASS_VIDEO, 0, &dev);
	if (ret)
		return ret;

	/* rotate the logo 180 degrees, then move to lower-right */
	microchip_logo_info(&logo_info);
	p = (char*)logo_info.logo_addr;
	i = *(int*)(logo_info.logo_addr + 10);
	j = logo_info.logo_width * logo_info.logo_height + i - 1;
	for( ; i<j; i++, j--) {
		b = p[i];
		p[i] = p[j];
		p[j] = b;
	}

	vid = dev_get_uclass_priv(dev);
	ret = video_bmp_display(dev, logo_info.logo_addr,
				vid->xsize - logo_info.logo_width - 4,
				vid->ysize - logo_info.logo_height - 2,
				false);
	if (ret)
		return ret;

	ret = uclass_get_device(UCLASS_VIDEO_CONSOLE, 0, &con);
	if (ret)
		return ret;

	priv = dev_get_uclass_priv(con);
	vidconsole_position_cursor(con, 0, (logo_info.logo_height +
				   priv->y_charsize - 1) / priv->y_charsize);
	for (s = buf, i = 0; i < len; s++, i++)
		vidconsole_put_char(con, *s);

	return 0;
}
#endif

#ifdef CONFIG_BOARD_LATE_INIT
int board_late_init(void)
{
#ifdef CONFIG_DM_VIDEO
	at91_video_show_board_info();
#endif
	env_set("cpu", get_cpu_name());
	return 0;
}
#endif

#ifdef CONFIG_DEBUG_UART_BOARD_INIT
void board_debug_uart_init(void)
{
	at91_seriald_hw_init();
}
#endif

#ifdef CONFIG_BOARD_EARLY_INIT_F
int board_early_init_f(void)
{
#ifdef CONFIG_DEBUG_UART
	debug_uart_init();
#endif
	return 0;
}
#endif

int board_init(void)
{
	/* arch number of AT91SAM9X5EK-Board */
	gd->bd->bi_arch_number = MACH_TYPE_AT91SAM9X5EK;

	/* adress of boot parameters */
	gd->bd->bi_boot_params = CONFIG_SYS_SDRAM_BASE + 0x100;

#if defined(CONFIG_USB_OHCI_NEW) || defined(CONFIG_USB_EHCI_HCD)
	at91_uhp_hw_init();
#endif
	return 0;
}

int dram_init(void)
{
	gd->ram_size = get_ram_size((void *) CONFIG_SYS_SDRAM_BASE,
					CONFIG_SYS_SDRAM_SIZE);
	return 0;
}
