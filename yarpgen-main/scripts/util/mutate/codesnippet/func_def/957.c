//
int foo(int a, int b)
{
  int sum = 0;
  for (int i = 0; i < 60000; i++)
  {
    sum += a + (i * b);
  }

  return sum;
}

