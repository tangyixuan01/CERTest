//b:int;a:int [2];printf:func int
int main()
{
  for (b = 0; b < 2; b++)
  {
    a[0] = 1;
    a[b] = 0;
  }

  printf("%d\n", a[0]);
  return 0;
}

