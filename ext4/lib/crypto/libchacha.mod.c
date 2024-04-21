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

KSYMTAB_FUNC(chacha_crypt_generic, "", "");

SYMBOL_CRC(chacha_crypt_generic, 0xcec122d7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0x11e30762, "chacha_block_generic" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x17283661, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D761BA46A61BFB7B2FE59FE");
