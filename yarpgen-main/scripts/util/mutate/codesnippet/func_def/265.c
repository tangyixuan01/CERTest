//a:int
int main()
{
  int b;
  L:
  b = a;

  if (a >= 0)
  {
    int c;
    if ((!a) <= 0)
      goto L;
    a = -1;
  }
  if (b != 0)
    __builtin_abort();
  return 0;
}

