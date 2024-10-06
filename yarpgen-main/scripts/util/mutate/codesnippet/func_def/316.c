//e:int [100];n:int
void foo(void)
{
  int i;
  int k = 0;
  for (i = 0; i < n; ++i)
  {
    e[k] = 10;
    ++k;
    e[k] = 10;
    ++k;
  }

  for (i = 0; i < k; ++i)
    printf("%d\n", e[i]);

  printf("k=%d\n", k);
}

