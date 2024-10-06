//g_23:int
static struct S1 foo(void)
{
  int *l_100 = &g_23;
  int **l_110 = &l_100;
  struct S1 l_128 = {1};
  assert(l_100 == (&g_23));
  assert(l_100 == (&g_23));
  assert(l_100 == (&g_23));
  assert(l_100 == (&g_23));
  assert(l_100 == (&g_23));
  assert(l_100 == (&g_23));
  assert(l_100 == (&g_23));
  return l_128;
}

