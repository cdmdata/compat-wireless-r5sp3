#include <linux/version.h>

#ifndef __COMPAT_LINUX_GENETLINK_H

#if (LINUX_VERSION_CODE < KERNEL_VERSION(3,3,0))

#define MODULE_ALIAS_GENL_FAMILY(family)\
 MODULE_ALIAS_NET_PF_PROTO_NAME(PF_NETLINK, NETLINK_GENERIC, "-family-" family)

#endif
#include_next <linux/genetlink.h>

#endif

