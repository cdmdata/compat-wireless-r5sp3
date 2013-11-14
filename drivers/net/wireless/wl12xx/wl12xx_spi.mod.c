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
	{ 0x52d76ac3, "spi_register_driver" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x6bc894e8, "driver_unregister" },
	{ 0x4a6380da, "platform_device_add" },
	{ 0xb7a934f9, "platform_device_add_data" },
	{ 0xd0393101, "platform_device_add_resources" },
	{ 0x7a8c61ef, "platform_device_alloc" },
	{ 0xf46237f7, "spi_setup" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0x5f754e5a, "memset" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0xa7587646, "crc7" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xea147363, "printk" },
	{ 0x4336eda0, "dev_driver_string" },
	{ 0xd40eeaa7, "spi_sync" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x1a6c4935, "platform_device_put" },
	{ 0xf000dd33, "platform_device_del" },
	{ 0xac487e08, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc7";

