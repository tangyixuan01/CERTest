//g:func uint8_t;b:uint16_t [5][9]
void main()
{
  int i;
  int j;
  int n = 0;
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 9; j++)
    {
      printf("%d ", b[i][j]);
    }

    printf("\n");
  }

  printf("---------------\n");
  g();
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 9; j++)
    {
      printf("%d ", b[i][j]);
    }

    printf("\n");
  }

}

