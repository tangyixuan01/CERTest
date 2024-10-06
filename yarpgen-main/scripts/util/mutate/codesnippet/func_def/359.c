//foo:func short
int main(void)
{
  int *l_320 = &g_14;
  char l_441 = -9L;
  if (foo(l_441, *l_320) <= (-1L))
    g_66 = 1;
  else
    g_66 = 0;
  printf("checksum g_66 = %d\n", g_66);
  return g_66;
}

