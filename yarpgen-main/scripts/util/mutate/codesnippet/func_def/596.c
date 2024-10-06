//c:int *;d:unsigned short;a:int;b:int
int main()
{
  unsigned int e = a;
  *c = 1;
  if (!b)
  {
    d = e;
    *c = d | e;
  }
  if (a != 0)
    __builtin_abort();
  return 0;
}

