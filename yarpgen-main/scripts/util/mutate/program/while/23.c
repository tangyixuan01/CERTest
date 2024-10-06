//e:long  d:short  b:long  a:int  
while (1)
{
  int h = -1;
  L2:
  {
    int j = 0;
    L1:
    e = d ^ (h | (j & b));

    a = a / (~(3 | (~e)));
    if (e)
      break;
  }

  h = 0;
}
