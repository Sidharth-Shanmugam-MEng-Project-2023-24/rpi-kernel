#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_DATA(raid6_empty_zero_page, "", "");
KSYMTAB_DATA(raid6_call, "_gpl", "");
KSYMTAB_DATA(raid6_2data_recov, "_gpl", "");
KSYMTAB_DATA(raid6_datap_recov, "_gpl", "");
KSYMTAB_DATA(raid6_gfmul, "", "");
KSYMTAB_DATA(raid6_vgfmul, "", "");
KSYMTAB_DATA(raid6_gfexp, "", "");
KSYMTAB_DATA(raid6_gflog, "", "");
KSYMTAB_DATA(raid6_gfinv, "", "");
KSYMTAB_DATA(raid6_gfexi, "", "");

SYMBOL_CRC(raid6_empty_zero_page, 0x6680e7aa, "");
SYMBOL_CRC(raid6_call, 0x804a5b70, "_gpl");
SYMBOL_CRC(raid6_2data_recov, 0x1803a6ed, "_gpl");
SYMBOL_CRC(raid6_datap_recov, 0xe4b051cf, "_gpl");
SYMBOL_CRC(raid6_gfmul, 0xd91319d6, "");
SYMBOL_CRC(raid6_vgfmul, 0x0b2c64a3, "");
SYMBOL_CRC(raid6_gfexp, 0x17f54263, "");
SYMBOL_CRC(raid6_gflog, 0xc8e3332b, "");
SYMBOL_CRC(raid6_gfinv, 0x59a2712d, "");
SYMBOL_CRC(raid6_gfexi, 0xcc4ee841, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xd1372b6c, "system_cpucaps" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xdcb764ad, "memset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xe478ef45, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1B27A276AFF8E979FA85C45");
