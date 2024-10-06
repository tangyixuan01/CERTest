//table:int [32][256]
int main(void)
{
  int i;
  int j;
  for (i = 0; i < 32; i++)
    for (j = 0; j < 256; j++)
    table[i][j] = ((signed char) j) * i;


  for (i = 0; i < 10; i++)
    printf("%10i %10i\n", table[i][5], table[i][132]);

  return 0;
}

