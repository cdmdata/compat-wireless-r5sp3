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
	{ 0xc4220564, "ieee80211_queue_work" },
	{ 0x6f99e9ff, "ieee80211_free_hw" },
	{ 0x5b48a918, "wl1251_init_ieee80211" },
	{ 0xde75b689, "set_irq_type" },
	{ 0x859c6dc7, "request_threaded_irq" },
	{ 0xf46237f7, "spi_setup" },
	{ 0xaaa0cde1, "dev_set_drvdata" },
	{ 0xd81cb02b, "wl1251_alloc_hw" },
	{ 0xa7587646, "crc7" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x5f754e5a, "memset" },
	{ 0xea147363, "printk" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0xd40eeaa7, "spi_sync" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x1295e21e, "wl1251_free_hw" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xac487e08, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,wl1251,crc7";

