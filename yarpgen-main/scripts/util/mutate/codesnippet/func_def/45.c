//e:long;c:int;d:short;a:int;f:int;b:long
int main()
{
  if (c)
    goto L1;
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

  if (f)
    goto L2;
  return 0;
}

