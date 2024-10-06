//b:int;a:int
int main()
{
  int c = 0;
  long d;
  for (; b < 1; b++)
  {
    ((c && d) & 3) || a;
    d = c;
    c = -1;
    if (d)
      __builtin_abort();
  }

  return 0;
}

