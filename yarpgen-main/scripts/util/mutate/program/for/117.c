//j:int  OutputSize:short  i:int  InputSize:int  Input:short  Output:short  
for (j = 0; j < OutputSize; j++)
{
  int Sum = 0;
  for (i = 0; i < (InputSize - j); i++)
    Sum += Input[i + j];

  Output[j] = Sum;
}
