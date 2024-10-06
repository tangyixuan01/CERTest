//
static void next_set(int *x, int n, int k)
{
  int i;
  int j;
  int tmp;
  j = k - 1;
  tmp = x[j]++;
  while ((j > 0) && (x[j] >= (n - ((k - 1) - j))))
    tmp = ++x[--j];

  for (i = j + 1; i < k; i++)
    x[i] = ++tmp;

}

