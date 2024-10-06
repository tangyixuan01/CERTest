//c:int;b:int;a:unsigned;d:long
while (1)
{
  int m = a;
  L:
  a = ~(-(m || (b & d)));

  b = (1 ^ a) / c;
  if (b)
    goto L;
  break;
}
