//printf:func int;bar:func unsigned short;foo:func signed char;g_62:int
int main(void)
{
  int l_111[1];
  int i;
  for (i = 0; i < 1; i++)
    l_111[i] = 128;

  g_62 = bar(foo(l_111[0], 8), 8);
  printf("g_62 = %d\n", g_62);
  return 0;
}

