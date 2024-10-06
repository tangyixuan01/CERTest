//e:int  L1:Label  b:int  L2:Label  c:volatile int  a:int  d:int  
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
