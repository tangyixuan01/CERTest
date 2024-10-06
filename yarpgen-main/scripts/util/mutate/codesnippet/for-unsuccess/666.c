//ipv4_devconf:struct ipv4_devconf [2];devinet_sysctl:struct devinet_sysctl_table;i:int
for (i = 0; i < 5; i++)
  devinet_sysctl.devinet_vars[i].data = &ipv4_devconf[0].var[i];
