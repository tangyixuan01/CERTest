//g_2:signed char;g_1:unsigned int;foo:func unsigned char;printf:func int
int main(void)
{
  int l_5[2];
  int i;
  for (i = 0; i < 2; i++)
    l_5[i] = 1;

  g_1 = g_2 <= foo(-6, l_5[0]);
  printf("%u\n", g_1);
  return 0;
}

