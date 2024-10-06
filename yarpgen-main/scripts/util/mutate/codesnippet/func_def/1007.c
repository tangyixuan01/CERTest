//g_248:struct S2 *;g_99:struct S2;printf:func int
int main(void)
{
  struct S2 l_438 = {1, 1, 1};
  *g_248 = l_438;
  *g_248 = g_99;
  printf("g_99.f0 = %d\n", g_99.f0);
  return 0;
}

