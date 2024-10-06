//
int main(void)
{
  volatile int v = 10;
  int x = (-214748365) * (v - 1);
  return x == (-1932735285);
}

