//ipv4_devconf:struct ipv4_devconf [2];t:struct devinet_sysctl_table
void devinet_sysctl_relocate(struct devinet_sysctl_table *t, struct ipv4_devconf *p)
{
  int i;
  for (i = 0; i < 5; i++)
    t->devinet_vars[i].data += ((char *) p) - ((char *) (&ipv4_devconf[0]));

}

