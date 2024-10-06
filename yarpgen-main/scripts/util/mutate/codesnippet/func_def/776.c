//foo:func char;g_76:int **;g_20:int;g_137:int
int func_7(long long p_8)
{
  int *l_138 = &g_137;
  int **l_151 = &l_138;
  *l_151 = &g_20;
  assert(g_76 == 0);
  *l_138 = foo(7, 0) > 0;
  return p_8;
}

