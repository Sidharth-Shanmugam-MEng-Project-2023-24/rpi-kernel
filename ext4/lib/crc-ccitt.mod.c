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

KSYMTAB_DATA(crc_ccitt_table, "", "");
KSYMTAB_DATA(crc_ccitt_false_table, "", "");
KSYMTAB_FUNC(crc_ccitt, "", "");
KSYMTAB_FUNC(crc_ccitt_false, "", "");

SYMBOL_CRC(crc_ccitt_table, 0x7f03b6a9, "");
SYMBOL_CRC(crc_ccitt_false_table, 0x44469a76, "");
SYMBOL_CRC(crc_ccitt, 0x52ecbc75, "");
SYMBOL_CRC(crc_ccitt_false, 0x0cc4b4b6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x17283661, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7ABEE33A4A889B14A925D82");
