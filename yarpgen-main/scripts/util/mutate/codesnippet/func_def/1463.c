//b:int;c:long;a:int
int main()
{
  for (int d = 0; d < 8; d++)
  {
    a ^= c;
    b = a;
    a ^= 1;
  }

  if (b != 1)
    __builtin_abort();
  return 0;
}

