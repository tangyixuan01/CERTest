//b:int;a:int
int main()
{
  int c = 0;
  if (a)
    c = 1;
  c = (1 & (a && c)) && b;
  if (a)
  {
    b = c;
    __builtin_abort();
  }
  return 0;
}

