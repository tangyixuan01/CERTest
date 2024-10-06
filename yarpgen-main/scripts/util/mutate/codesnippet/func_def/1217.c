//Q:double [4 * 64];P:double [5 * 64]
int main()
{
  int i;
  int j;
  double *p = P;
  double *q = Q;
  for (j = 0; j < 32; ++j)
  {
    for (i = 0; i < 4; ++i)
    {
      q[i] = p[i];
    }

    q += 4;
    p += 5;
  }

  return 0;
}

