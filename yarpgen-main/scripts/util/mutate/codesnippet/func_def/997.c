//e:int;c:int;printf:func int;a:int;f:int;b:int
int main()
{
  int g;
  short h = 1;
  for (; e < 2; e++)
  {
    L1:
    f = 1;

    while ((b > 0) || (a > 0))
    {
      g++;
      h++;
      printf("%d", g);
    }

    L2:
    if ((!h) && ((!c) || a))
      goto L1;

    if (c)
      goto L2;
  }

  return 0;
}

