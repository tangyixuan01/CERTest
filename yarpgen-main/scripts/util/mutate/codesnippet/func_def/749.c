//b:int;a:int [4];c:int;printf:func int
int main()
{
  for (; b < 4; b++)
  {
    short t = a[b];
    a[b] = (c = t % 3);
  }

  printf("%d\n", a[0]);
  return 0;
}

