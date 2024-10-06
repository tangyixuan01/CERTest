//x:int
int main(void)
{
  int t = (-0x7FFFFFFF) - ((-2) * x);
  if (t != 1)
    __builtin_abort();
  return 0;
}

