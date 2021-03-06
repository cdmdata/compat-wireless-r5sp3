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
	{ 0xc1f6d818, "no_llseek" },
	{ 0xbb8b9c58, "nonseekable_open" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x7685a152, "cfg80211_notify_new_peer_candidate" },
	{ 0x8c278198, "kmem_cache_create" },
	{ 0xfcd354c9, "kmem_cache_destroy" },
	{ 0xe97d0e88, "kmem_cache_free" },
	{ 0xf934df51, "debugfs_create_symlink" },
	{ 0xcf82ea3, "debugfs_remove" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x3dcbe324, "debugfs_rename" },
	{ 0x6fff393f, "time_to_tm" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x84b183ae, "strncmp" },
	{ 0x57ceb8e5, "noop_llseek" },
	{ 0x89938c52, "generic_file_llseek" },
	{ 0x81799cee, "vscnprintf" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xea07ec7, "kstrtou8_from_user" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x374ed073, "scnprintf" },
	{ 0xb722ed12, "debugfs_create_u32" },
	{ 0x6a5aa869, "cfg80211_michael_mic_failure" },
	{ 0xde0e5ae0, "cfg80211_classify8021d" },
	{ 0xa0611dc3, "queue_work" },
	{ 0xaf4b6526, "queue_delayed_work" },
	{ 0x8a4fa83b, "__aeabi_llsr" },
	{ 0xefd4bf15, "cfg80211_gtk_rekey_notify" },
	{ 0xc63f1b81, "ieee80211_radiotap_iterator_next" },
	{ 0x982e6b6d, "ieee80211_radiotap_iterator_init" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x6d27ef64, "__bitmap_empty" },
	{ 0x634324ca, "cfg80211_rx_spurious_frame" },
	{ 0x722b0ab5, "skb_copy_expand" },
	{ 0xec02c2a3, "cfg80211_rx_mgmt" },
	{ 0x563a3ad9, "cfg80211_send_unprot_disassoc" },
	{ 0x39512236, "cfg80211_send_unprot_deauth" },
	{ 0x39c6224c, "cfg80211_report_obss_beacon" },
	{ 0x682735ff, "ieee80211_data_to_8023" },
	{ 0x49839571, "cfg80211_rx_unexpected_4addr_frame" },
	{ 0x5385d8d6, "ieee80211_amsdu_to_8023s" },
	{ 0xa14f3d8c, "ewma_add" },
	{ 0x6abe7cd7, "__pskb_pull_tail" },
	{ 0x302a2222, "skb_copy_bits" },
	{ 0x1b95cd45, "dev_queue_xmit" },
	{ 0x210c7539, "netif_receive_skb" },
	{ 0x28041357, "pskb_expand_head" },
	{ 0xf6388d86, "___pskb_trim" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x93f412a3, "netif_rx_ni" },
	{ 0xe0b36ebd, "eth_type_trans" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb86e4ab9, "random32" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x41344088, "param_get_charp" },
	{ 0x6ad065f4, "param_set_charp" },
	{ 0x2759216b, "default_llseek" },
	{ 0x9775cdc, "kref_get" },
	{ 0xa02a3bb9, "debugfs_remove_recursive" },
	{ 0x1fc8818c, "module_put" },
	{ 0xa1a79b6d, "debugfs_create_file" },
	{ 0x887c2815, "debugfs_create_dir" },
	{ 0xe90dcae0, "__request_module" },
	{ 0x83800bfa, "kref_init" },
	{ 0xd5b037e1, "kref_put" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x97255bdf, "strlen" },
	{ 0xdc3ee484, "ether_setup" },
	{ 0x10f8cd0a, "free_netdev" },
	{ 0x7bd4b18, "register_netdevice" },
	{ 0x349cba85, "strchr" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x9c1fdc5b, "dev_alloc_name" },
	{ 0xd6c5f5a9, "alloc_netdev_mq" },
	{ 0x76cf47f6, "__aeabi_llsl" },
	{ 0xb0ab9f8c, "flush_work" },
	{ 0xf91f3e12, "dev_close" },
	{ 0x3e9110fa, "__hw_addr_unsync" },
	{ 0x865029ac, "__hw_addr_sync" },
	{ 0x12bdf803, "eth_mac_addr" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xd7374736, "unregister_netdevice_queue" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xf9a482f9, "msleep" },
	{ 0x80d817ab, "wait_for_completion_timeout" },
	{ 0x6980fe91, "param_get_int" },
	{ 0xff964b25, "param_set_int" },
	{ 0xb7b61546, "crc32_be" },
	{ 0x2b44d5c1, "cfg80211_send_rx_auth" },
	{ 0x9b3b8cc7, "cfg80211_send_auth_timeout" },
	{ 0xe5c2548, "cfg80211_send_rx_assoc" },
	{ 0xcf08a73f, "cfg80211_send_assoc_timeout" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0xfbe6cf77, "ieee80211_bss_get_ie" },
	{ 0x81c1338d, "__cfg80211_auth_canceled" },
	{ 0x890be3b4, "cfg80211_send_disassoc" },
	{ 0xb6d530d9, "__cfg80211_send_disassoc" },
	{ 0xd1ffb407, "cfg80211_send_deauth" },
	{ 0x6f1ee657, "__cfg80211_send_deauth" },
	{ 0xe8a30fc6, "cfg80211_cqm_rssi_notify" },
	{ 0x4c92d41, "cfg80211_req_channel_switch" },
	{ 0x60f71cfa, "complete" },
	{ 0x47236644, "cfg80211_ch_switch_notify" },
	{ 0x99ffe4cd, "skb_copy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1dc9fc65, "cfg80211_ibss_joined" },
	{ 0xc27d4920, "netif_carrier_on" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x5f754e5a, "memset" },
	{ 0xf466936f, "cfg80211_can_beacon_sec_chan" },
	{ 0x8cfc414e, "add_timer" },
	{ 0xb2369b9, "netif_carrier_off" },
	{ 0x24d9b3fc, "cfg80211_unlink_bss" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xb5313bd6, "kmalloc_caches" },
	{ 0x94c3a224, "kmem_cache_alloc" },
	{ 0xcccca482, "_test_and_clear_bit_le" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3ebf2f8f, "__netif_schedule" },
	{ 0x592363b2, "cfg80211_ready_on_channel" },
	{ 0x110a810, "cfg80211_remain_on_channel_expired" },
	{ 0xc46d0297, "cfg80211_get_bss" },
	{ 0x5bb6f786, "cfg80211_send_intermediate_result" },
	{ 0xb4ca1b5f, "__ieee80211_get_channel" },
	{ 0xb1d5fd6a, "ieee80211_channel_to_frequency" },
	{ 0xb1f28746, "cfg80211_put_bss" },
	{ 0x53dc0ec2, "cfg80211_inform_bss_frame" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0xab6babaf, "pm_qos_request" },
	{ 0x7ed30568, "cfg80211_scan_done" },
	{ 0x709bcf59, "cfg80211_sched_scan_results" },
	{ 0x1dd3a26b, "cfg80211_sched_scan_stopped" },
	{ 0xe318fbb, "crypto_alloc_base" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbf06790d, "crypto_destroy_tfm" },
	{ 0xe649f8b3, "skb_pull" },
	{ 0xf42dcb32, "skb_trim" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x99bb8806, "memmove" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x1251d30f, "call_rcu" },
	{ 0x2c321062, "cfg80211_del_sta" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x7a27c184, "ewma_init" },
	{ 0xefdd5a63, "ktime_get_ts" },
	{ 0xdd86ec08, "cfg80211_new_sta" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe7084ce7, "skb_put" },
	{ 0xe7a0a06f, "dev_alloc_skb" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x5093fa82, "_clear_bit_le" },
	{ 0x313341a3, "_set_bit_le" },
	{ 0xda5c96f9, "__alloc_skb" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xe2795d55, "dev_kfree_skb_irq" },
	{ 0xc550f7f3, "netif_rx" },
	{ 0x19427470, "skb_clone" },
	{ 0x59d1dae4, "skb_push" },
	{ 0x49e9253e, "cfg80211_mgmt_tx_status" },
	{ 0x6d826f3, "cfg80211_probe_status" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x9d669763, "memcpy" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7d11c268, "jiffies" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x3fddd533, "skb_queue_tail" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x82c93cf4, "cfg80211_cqm_pktloss_notify" },
	{ 0xb4a5f277, "cfg80211_roaming_status" },
	{ 0xdfc857eb, "dev_kfree_skb_any" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x80de231a, "idr_remove" },
	{ 0xb81fd3be, "idr_find" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x8949858b, "schedule_work" },
	{ 0x5899ec6, "__napi_schedule" },
	{ 0x671c1a0b, "napi_complete" },
	{ 0x5f90ac1a, "flush_workqueue" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x91098e39, "skb_dequeue" },
	{ 0x3504720f, "consume_skb" },
	{ 0x71c90087, "memcmp" },
	{ 0x953d6341, "init_dummy_netdev" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x221dfde0, "idr_pre_get" },
	{ 0x4347b971, "idr_init" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0xf389fe60, "__hw_addr_init" },
	{ 0xc27487dd, "__bug" },
	{ 0x1a72c650, "wiphy_new" },
	{ 0x59e55c8b, "netif_napi_add" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0x96cbcf31, "pm_qos_add_notifier" },
	{ 0xe261d585, "__create_workqueue_key" },
	{ 0x30e2a75f, "wiphy_register" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x80f2f9b9, "wiphy_unregister" },
	{ 0xe816707a, "destroy_workqueue" },
	{ 0x5b1b65c7, "skb_queue_purge" },
	{ 0xea147363, "printk" },
	{ 0x4336eda0, "dev_driver_string" },
	{ 0x933740ca, "cancel_work_sync" },
	{ 0xd8f795ca, "del_timer" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0xae0c87ee, "pm_qos_remove_notifier" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4c11f58f, "kfree_skb" },
	{ 0x8d66a3a, "warn_slowpath_fmt" },
	{ 0xda391039, "wiphy_free" },
	{ 0x302c48b, "idr_destroy" },
	{ 0xc45ef616, "idr_for_each" },
	{ 0x37a0cba, "kfree" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211,compat";

