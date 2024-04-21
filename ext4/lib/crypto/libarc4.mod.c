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

KSYMTAB_FUNC(arc4_setkey, "", "");
KSYMTAB_FUNC(arc4_crypt, "", "");

SYMBOL_CRC(arc4_setkey, 0x2bb32ad1, "");
SYMBOL_CRC(arc4_crypt, 0xcd47fcc4, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x17283661, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "05196858B824AC576BCFD4F");
