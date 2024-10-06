//a:int [16]
int test(int n, int *a)
{
  int i;
  int j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      a[j] = i + n;
    }

  }

  if ((a[0] != 31) || (((i + n) - 1) != 31))
    printf("incorrect %d  %d \n", a[0], (i + n) - 1);
  return 0;
}

