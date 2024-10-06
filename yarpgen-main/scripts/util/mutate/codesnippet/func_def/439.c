//
int main(void)
{
  const long ONE = 1L;
  long y = 0L;
  long x = ((long) (ONE || (y = 1L))) % 8L;
  printf("x = %ld, y = %ld\n", x, y);
}

