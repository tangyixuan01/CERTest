//
void test(unsigned int a, unsigned int b)
{
  if (a < 5)
    abort();
  if (b < 5)
    abort();
  if ((a + b) != 0)
    abort();
}

