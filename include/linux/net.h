#include <linux/version.h>

#ifndef __COMPAT_LINUX_NET_H

#if (LINUX_VERSION_CODE <= KERNEL_VERSION(3,3,0))

#define MODULE_ALIAS_NET_PF_PROTO_NAME(pf, proto, name) \
	MODULE_ALIAS("net-pf-" __stringify(pf) "-proto-" __stringify(proto) \
		     name)

#endif
#include_next <linux/net.h>

#endif

