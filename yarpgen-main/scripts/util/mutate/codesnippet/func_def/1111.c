//e:func uint8_t;b:uint16_t [5][9]
void main()
{
  int f;
  int j;
  int k = 0;
  e();
  for (f = 0; f < 5; f++)
  {
    for (j = 0; j < 9; j++)
    {
      printf("%d ", b[f][j]);
    }

    printf("\n");
  }

}

