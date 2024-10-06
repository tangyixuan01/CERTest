//t:struct devinet_sysctl_table;i:int;ipv4_devconf:struct ipv4_devconf [2]
for (i = 0; i < 5; i++)
  if (t.devinet_vars[i].data != (&ipv4_devconf[1].var[i]))
{
  fprintf(stderr, "t.devinet_vars[%u].data == %p, should be %p\n", i, t.devinet_vars[i].data, &ipv4_devconf[1].var[i]);
  return 1;
}
