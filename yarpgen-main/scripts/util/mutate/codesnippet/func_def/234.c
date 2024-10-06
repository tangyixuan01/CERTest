//b:int;a:int [16];printf:func int
int main()
{
  int c = 0;
  for (; c < 16; c++)
  {
    a[c] = c;
    b = a[1];
  }

  printf("%d\n", b);
  return 0;
}

