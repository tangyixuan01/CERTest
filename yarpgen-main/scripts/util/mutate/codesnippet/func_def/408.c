//c:int;a:int;b:int;fn1:func int
int main()
{
  char d;
  int e;
  c = (b < 0) + 2;
  d = c - 1;
  e = d * 2;
  a = fn1(e);
  if (a != 1)
    __builtin_abort();
  return 0;
}

