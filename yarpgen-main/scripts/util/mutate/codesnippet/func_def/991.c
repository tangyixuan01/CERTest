//b:int;a:int [3];c:int
int e()
{
  if (!c)
  {
    for (b = 0; b < 3; b++)
      for (c = 0; c < 3; c++)
      a[c] ^= 1;


    return -1;
  }
  return 0;
}

