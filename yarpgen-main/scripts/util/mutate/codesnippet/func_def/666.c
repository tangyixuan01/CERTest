//g_3:int;func_57:func void
int main(void)
{
  int *l_4 = &g_3;
  if (g_3)
  {
    func_57(&l_4);
  }
  int x;
  int y;
  for (x = 0; x < 5; x++)
  {
    for (y = 0; y < 5; y++)
    {
      g_3 = 0;
      *l_4 = 1;
    }

  }

  printf("%d\n", g_3);
  return 0;
}

