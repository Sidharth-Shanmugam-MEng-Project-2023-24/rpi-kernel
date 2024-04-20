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

KSYMTAB_DATA(crypto_aes_sbox, "", "");
KSYMTAB_DATA(crypto_aes_inv_sbox, "", "");
KSYMTAB_FUNC(aes_expandkey, "", "");
KSYMTAB_FUNC(aes_encrypt, "", "");
KSYMTAB_FUNC(aes_decrypt, "", "");

SYMBOL_CRC(crypto_aes_sbox, 0xd9d952d1, "");
SYMBOL_CRC(crypto_aes_inv_sbox, 0xa84ce9e0, "");
SYMBOL_CRC(aes_expandkey, 0x558b281d, "");
SYMBOL_CRC(aes_encrypt, 0x77e9eb37, "");
SYMBOL_CRC(aes_decrypt, 0x78a16f48, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe478ef45, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "894C12FB3D631A5EC053F4D");
