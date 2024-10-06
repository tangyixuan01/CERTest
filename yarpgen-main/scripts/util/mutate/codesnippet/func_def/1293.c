//
void test(double l, double r)
{
  if (((l == r) && (l == 0)) && (signbit(l) || signbit(r)))
  {
    puts("one is negative");
  }
}

