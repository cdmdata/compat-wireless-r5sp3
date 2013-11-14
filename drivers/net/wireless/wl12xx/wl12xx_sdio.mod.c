#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x4761e8a3, "module_layout" },
	{ 0x405d0a0b, "sdio_register_driver" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x88a16f44, "pm_runtime_forbid" },
	{ 0x4a6380da, "platform_device_add" },
	{ 0xb7a934f9, "platform_device_add_data" },
	{ 0xd0393101, "platform_device_add_resources" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x7a8c61ef, "platform_device_alloc" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0x94864c7a, "wl12xx_get_platform_data" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0x64bcba37, "sdio_memcpy_fromio" },
	{ 0x43c3e165, "sdio_readsb" },
	{ 0x6f0a2224, "sdio_f0_readb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7ed26023, "sdio_memcpy_toio" },
	{ 0xbd572bbe, "sdio_writesb" },
	{ 0x7f181630, "sdio_f0_writeb" },
	{ 0x6dc7dde3, "__pm_runtime_put" },
	{ 0x346a84e9, "mmc_power_save_host" },
	{ 0x1fdec9bf, "sdio_disable_func" },
	{ 0xae2c5ad2, "sdio_enable_func" },
	{ 0x6d40e3c3, "mmc_power_restore_host" },
	{ 0x4d2ffb17, "__pm_runtime_get" },
	{ 0x9566b5f5, "sdio_release_host" },
	{ 0x664c78, "sdio_set_block_size" },
	{ 0x820d3079, "sdio_claim_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x1a6c4935, "platform_device_put" },
	{ 0xf000dd33, "platform_device_del" },
	{ 0x2169f8ec, "sdio_set_host_pm_flags" },
	{ 0x8adfa98c, "sdio_get_host_pm_caps" },
	{ 0x4336eda0, "dev_driver_string" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xbbd2e609, "sdio_unregister_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xea147363, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v0097d4076*");
