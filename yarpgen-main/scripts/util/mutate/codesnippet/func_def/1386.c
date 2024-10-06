//b:int;a:int
int main()
{
  short d;
  short g;
  short i;
  int e = 34000;
  int h;
  d = b;
  g = 100 | b;
  L1:
  i = g;

  L2:
  g = ~(d / e);

  e = ~((2 / g) & d);
  h = a;
  while (!e)
  {
    a = b;
    e = ~(1L << i);
  }

  if (g > 0)
    goto L2;
  if (!g)
    goto L1;
  if (h < e)
    __builtin_abort();
  return 0;
}

