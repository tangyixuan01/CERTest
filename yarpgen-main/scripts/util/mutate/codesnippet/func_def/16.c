//bf:int
int main(void)
{
  int dc[5];
  for (bf = 0; bf < 2; ++bf)
  {
    int l9;
    int g5 = -1;
    for (l9 = 0; l9 < 5; ++l9)
    {
      dc[l9] = g5;
      g5 = dc[l9] > 0;
    }

  }

  if (dc[0] != (-1))
    __builtin_abort();
  return 0;
}

