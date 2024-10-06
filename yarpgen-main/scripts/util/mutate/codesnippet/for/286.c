//d:int;e:int;c:volatile int;b:int;a:int
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
