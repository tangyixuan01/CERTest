//b:volatile int;a:int [3];c:int;printf:func int
int main()
{
  c = 0;
  for (; c <= 2; c++)
  {
    a[1] = 1;
    a[c] = 0;
    b;
  }

  printf("%d\n", a[1]);
  return 0;
}

