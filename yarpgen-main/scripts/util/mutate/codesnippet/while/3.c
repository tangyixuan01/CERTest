//b:long;a:int;e:long;d:short
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
