//b:int [4];d:int;e:char;c:int;a:int [4]
for (;; c++)
{
  for (;;)
  {
    e = b[3];
    if (e)
    {
      b[c] = 0;
      break;
    }
    return;
  }

  a[3] = (d = 1);
  for (; d < 4; d++)
  {
    a[d] = 0;
    if (b[3])
      break;
  }

}
