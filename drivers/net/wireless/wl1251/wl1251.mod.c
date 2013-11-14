#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x4761e8a3, "module_layout" },
	{ 0x89938c52, "generic_file_llseek" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x374ed073, "scnprintf" },
	{ 0xa1a79b6d, "debugfs_create_file" },
	{ 0x887c2815, "debugfs_create_dir" },
	{ 0xcf82ea3, "debugfs_remove" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x56f4c6e5, "ieee80211_queue_delayed_work" },
	{ 0xd8f795ca, "del_timer" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x9e3bb08a, "ieee80211_rx" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xb1d5fd6a, "ieee80211_channel_to_frequency" },
	{ 0xe7084ce7, "skb_put" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0x36a15265, "skb_queue_head" },
	{ 0xdfc857eb, "dev_kfree_skb_any" },
	{ 0x722b0ab5, "skb_copy_expand" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x59d1dae4, "skb_push" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf393de9a, "ieee80211_wake_queues" },
	{ 0x99bb8806, "memmove" },
	{ 0x31bca9e0, "ieee80211_get_hdrlen_from_skb" },
	{ 0xe649f8b3, "skb_pull" },
	{ 0x91098e39, "skb_dequeue" },
	{ 0x2417539c, "ieee80211_tx_status" },
	{ 0xfabbaf95, "ieee80211_cqm_rssi_notify" },
	{ 0xcdd7c74b, "ieee80211_beacon_loss" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6ff15b66, "ieee80211_register_hw" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0xbdf29c33, "ieee80211_alloc_hw" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xeaf3046e, "ieee80211_stop_queues" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xc4220564, "ieee80211_queue_work" },
	{ 0x3fddd533, "skb_queue_tail" },
	{ 0x328a05f1, "strncpy" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x61a6ea47, "release_firmware" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xebff25ef, "request_firmware" },
	{ 0xf9a482f9, "msleep" },
	{ 0x933740ca, "cancel_work_sync" },
	{ 0xe339a6cc, "ieee80211_scan_completed" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x71c90087, "memcmp" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xef5d3242, "ieee80211_beacon_get_tim" },
	{ 0xbe50e47f, "ieee80211_pspoll_get" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xa0ac5394, "ieee80211_nullfunc_get" },
	{ 0x9d669763, "memcpy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3504720f, "consume_skb" },
	{ 0xdee843b3, "ieee80211_probereq_get" },
	{ 0xea147363, "printk" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x6f99e9ff, "ieee80211_free_hw" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x3737da40, "ieee80211_unregister_hw" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

