//func_16:func int;g_23:int;printf:func int
int main(void)
{
  int *l_172[1];
  int **l_176 = &l_172[0];
  int i;
  for (i = 0; i < 1; i++)
  {
    l_172[i] = &g_23;
  }

  *(*l_176) = func_16(*(*l_176));
  printf("%d\n", g_23);
  return 0;
}

