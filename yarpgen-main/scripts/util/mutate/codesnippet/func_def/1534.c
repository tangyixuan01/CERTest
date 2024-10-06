//devinet_sysctl_relocate:func void;ipv4_devconf:struct ipv4_devconf [2];devinet_sysctl:struct devinet_sysctl_table
int main(void)
{
  struct devinet_sysctl_table t;
  int i;
  for (i = 0; i < 5; i++)
    devinet_sysctl.devinet_vars[i].data = &ipv4_devconf[0].var[i];

  memcpy(&t, &devinet_sysctl, sizeof(t));
  devinet_sysctl_relocate(&t, &ipv4_devconf[1]);
  for (i = 0; i < 5; i++)
    if (t.devinet_vars[i].data != (&ipv4_devconf[1].var[i]))
  {
    fprintf(stderr, "t.devinet_vars[%u].data == %p, should be %p\n", i, t.devinet_vars[i].data, &ipv4_devconf[1].var[i]);
    return 1;
  }

  printf("all ok\n");
  return 0;
}

