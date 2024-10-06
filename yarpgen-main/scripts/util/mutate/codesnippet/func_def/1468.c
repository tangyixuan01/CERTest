//y:int;x:int [1]
int f(int *p, int *q)
{
  *q = y;
  if (p == (x + 1))
  {
    *p = 2;
    return y;
  }
  return 0;
}

