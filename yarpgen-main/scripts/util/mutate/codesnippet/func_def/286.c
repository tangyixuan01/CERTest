//
void test(int x)
{
  if (x == 1)
    abort();
  else
  {
    int a = -x;
    if (a != 1)
      abort();
  }
}

