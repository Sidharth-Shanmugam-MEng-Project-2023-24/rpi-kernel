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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(lc_create, "", "");
KSYMTAB_FUNC(lc_reset, "", "");
KSYMTAB_FUNC(lc_destroy, "", "");
KSYMTAB_FUNC(lc_del, "", "");
KSYMTAB_FUNC(lc_try_get, "", "");
KSYMTAB_FUNC(lc_find, "", "");
KSYMTAB_FUNC(lc_get, "", "");
KSYMTAB_FUNC(lc_put, "", "");
KSYMTAB_FUNC(lc_committed, "", "");
KSYMTAB_FUNC(lc_element_by_index, "", "");
KSYMTAB_FUNC(lc_seq_printf_stats, "", "");
KSYMTAB_FUNC(lc_seq_dump_details, "", "");
KSYMTAB_FUNC(lc_try_lock, "", "");
KSYMTAB_FUNC(lc_is_used, "", "");
KSYMTAB_FUNC(lc_get_cumulative, "", "");

SYMBOL_CRC(lc_create, 0xaeb959aa, "");
SYMBOL_CRC(lc_reset, 0xbf18a077, "");
SYMBOL_CRC(lc_destroy, 0x75e88edc, "");
SYMBOL_CRC(lc_del, 0x2675693b, "");
SYMBOL_CRC(lc_try_get, 0x96d40a48, "");
SYMBOL_CRC(lc_find, 0xc4d8d7a4, "");
SYMBOL_CRC(lc_get, 0x1d2ebc6a, "");
SYMBOL_CRC(lc_put, 0x0cb562e6, "");
SYMBOL_CRC(lc_committed, 0x12de578e, "");
SYMBOL_CRC(lc_element_by_index, 0xdbdee578, "");
SYMBOL_CRC(lc_seq_printf_stats, 0x4d883db0, "");
SYMBOL_CRC(lc_seq_dump_details, 0x8ef594cf, "");
SYMBOL_CRC(lc_try_lock, 0xf0e20f9b, "");
SYMBOL_CRC(lc_is_used, 0xa79000a0, "");
SYMBOL_CRC(lc_get_cumulative, 0xfba16232, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0xfb9fde1a, "seq_printf" },
	{ 0x503ff16a, "seq_putc" },
	{ 0x3c996fe6, "kmem_cache_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3911da40, "kmem_cache_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x92162e51, "kmalloc_caches" },
	{ 0x83e4564a, "kmalloc_trace" },
	{ 0xc75e629e, "kmem_cache_alloc" },
	{ 0xe478ef45, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3C66FC7B7955B59A6631DA4");
