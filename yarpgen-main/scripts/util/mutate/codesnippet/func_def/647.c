//a:volatile int
int main()
{
  for (int b = 0; b < 33; b += 3)
  {
    if (b > 31)
      a++;
  }

  if (a != 0)
    __builtin_abort();
  return 0;
}

