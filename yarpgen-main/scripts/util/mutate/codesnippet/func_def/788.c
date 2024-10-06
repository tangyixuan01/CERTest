//
int main(void)
{
  volatile int a = 0;
  int b = -(a == 0);
  int x = 1 % ((b + (b * 0x7fffffffffffffff)) + 0x7fffffffffffffff);
  if (x != 0)
    __builtin_abort();
  return 0;
}

