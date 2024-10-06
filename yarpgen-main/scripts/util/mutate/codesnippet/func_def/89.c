//
int main(void)
{
  volatile unsigned char a = 1;
  long b = 0x80000000L;
  int c = -(((int) (-b)) - ((-0x7FFFFFFF) * a));
  if (c != 1)
    __builtin_abort();
  return 0;
}

