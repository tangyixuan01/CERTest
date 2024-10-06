//
static void test(short *Input, short *Output, short InputSize, short OutputSize)
{
  int i;
  int j;
  for (j = 0; j < OutputSize; j++)
  {
    int Sum = 0;
    for (i = 0; i < (InputSize - j); i++)
      Sum += Input[i + j];

    Output[j] = Sum;
  }

}

