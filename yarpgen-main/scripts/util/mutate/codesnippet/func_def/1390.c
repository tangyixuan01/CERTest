//ii:int [3];f:func const int *
int main()
{
  const int *i = f(&ii[0]);
  printf("%d\n", i - (&ii[0]));
  return 0;
}

