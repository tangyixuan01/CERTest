//b:int;a:int [1][2];printf:func int
int main()
{
  int c;
  for (; b < 1; b++)
    for (c = 0; c < 2; c++)
    a[b][c] = 0;


  printf("%d\n", b);
  return 0;
}

