//b:int;a:int;c:volatile int;d:int
int main()
{
  int e = 0;
  for (; e < 1; e++)
  {
    L1:
    if (b)
      goto L2;

    int h;
    int i = h = c;
    b = (a = ~0);
    if (h)
      goto L1;
    a = i;
    L2:
    c = 1 % (~a);

    d = h;
  }

  return 0;
}

