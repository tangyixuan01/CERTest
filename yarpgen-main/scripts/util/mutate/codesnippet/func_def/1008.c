//g_24:unsigned int;g_225:unsigned char;g_37:unsigned int
int main(void)
{
  int l_289;
  for (l_289 = 1; l_289 < 5; l_289 += 1)
  {
    if (g_225)
    {
      g_24 = g_37;
    }
  }

  g_24 = g_37;
  unsigned short context = g_24 << 1;
  do
  {
    if (context)
      context = (context << 1) ^ 1;
  }
  while (0);
  printf("%d\n", (int) context);
  return 0;
}

