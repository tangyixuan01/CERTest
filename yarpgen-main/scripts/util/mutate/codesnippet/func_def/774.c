//b:int *[10];a:int [9][2];c:int **;d:int
int main()
{
  for (; d < 4; d++)
    b[d + 5] = &a[d + 2][1];

  *(*c) = 0;
  return 0;
}

