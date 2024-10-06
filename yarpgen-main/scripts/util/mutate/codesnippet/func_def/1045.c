//
int main(void)
{
  volatile int a = 0;
  long b = 2147483648L;
  int c = a % 2;
  int x = (((int) (-b)) + c) % (-2147483647);
  if (x != (-1))
    __builtin_abort();
  return 0;
}

