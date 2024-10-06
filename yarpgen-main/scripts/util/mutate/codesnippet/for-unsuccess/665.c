//i:int;t:struct devinet_sysctl_table;ipv4_devconf:struct ipv4_devconf [2]
for (i = 0; i < 5; i++)
  t->devinet_vars[i].data += ((char *) p) - ((char *) (&ipv4_devconf[0]));
