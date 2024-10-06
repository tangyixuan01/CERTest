//i:int;printf:func int
for (i = 0; i < 8; i++)
{
  unsigned j = 1u << i;
  printf("%2d %10u %2d\n", i, j, __builtin_ffs(j));
}
