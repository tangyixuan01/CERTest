//c:int;d:int;a:int;b:int
int main()
{
  int e = d = 3;
  for (; d >= 0; d--)
  {
    c = e;
    e = (a ^ (a && b)) && 1;
  }

  if (c != 0)
    __builtin_abort();
  return 0;
}

