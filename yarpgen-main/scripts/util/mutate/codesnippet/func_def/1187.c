//b:int;a:int *[2][3][3];c:int
int main()
{
  for (c = 0; c < 2; c++)
    for (b = 0; b < 2; b++)
    a[1][c][b] = a[0][0][0];


  return 0;
}

