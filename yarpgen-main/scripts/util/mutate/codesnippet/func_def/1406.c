//n:int;N:int;a:double *;m:int;L:int
void test_func(double *a, int L, int m, int n, int N)
{
  double *ak;
  int k;
  if (N <= 0)
  {
    return;
  }
  ak = a + (L * (-m));
  for (k = -m; k < (N - m); k++)
  {
    if ((k >= 0) && (k < n))
    {
      *ak = 0.0;
    }
    ak += L;
  }

  return;
}

