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

KSYMTAB_FUNC(crc8_populate_msb, "", "");
KSYMTAB_FUNC(crc8_populate_lsb, "", "");
KSYMTAB_FUNC(crc8, "", "");

SYMBOL_CRC(crc8_populate_msb, 0xaa8106bc, "");
SYMBOL_CRC(crc8_populate_lsb, 0xc3cd034d, "");
SYMBOL_CRC(crc8, 0x9c5d5b94, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe478ef45, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C221BC50E5FC9FDF4673A6F");
