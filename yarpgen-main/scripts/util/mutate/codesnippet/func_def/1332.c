//safe_15:func short;safe_56:func short;g_65:int [2][8][2];f0:long;g_72:int
void func_57(void)
{
  int *l_64 = &g_65[1][2][1];
  g_72 = safe_15(safe_56(1, f0), *l_64);
  *l_64 &= 1;
}

