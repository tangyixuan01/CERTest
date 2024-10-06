//g_50:int [];printf:func int
int main(void)
{
  int i;
  for (i = 0; i <= 1; i++)
    g_50[i + 5] = g_50[i + 4];

  for (i = 0; i < 7; i++)
    printf("%d\n", g_50[i]);

  return 0;
}

