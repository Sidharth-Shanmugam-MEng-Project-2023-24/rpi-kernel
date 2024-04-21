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

KSYMTAB_FUNC(LZ4_compress_fast, "", "");
KSYMTAB_FUNC(LZ4_compress_default, "", "");
KSYMTAB_FUNC(LZ4_compress_destSize, "", "");
KSYMTAB_FUNC(LZ4_loadDict, "", "");
KSYMTAB_FUNC(LZ4_saveDict, "", "");
KSYMTAB_FUNC(LZ4_compress_fast_continue, "", "");

SYMBOL_CRC(LZ4_compress_fast, 0x6004858d, "");
SYMBOL_CRC(LZ4_compress_default, 0x4f4d78c5, "");
SYMBOL_CRC(LZ4_compress_destSize, 0x5bc92e85, "");
SYMBOL_CRC(LZ4_loadDict, 0x749849d8, "");
SYMBOL_CRC(LZ4_saveDict, 0x635ff76d, "");
SYMBOL_CRC(LZ4_compress_fast_continue, 0xf9eced44, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x4829a47e, "memcpy" },
	{ 0x17283661, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "58689308D03EC757F9839F4");
