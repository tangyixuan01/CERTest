//test_func:func void
int main()
{
  double *a;
  int L;
  int m;
  int n;
  int N;
  L = 10000000;
  n = 4;
  N = 100 * n;
  a = (double *) malloc(((sizeof(double)) * L) * n);
  for (m = 0; m < N; m += n)
  {
    test_func(a, L, m, n, N);
  }

  free(a);
  return 0;
}

