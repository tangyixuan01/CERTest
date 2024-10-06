//
int f(int *p)
{
  int a = *p;
  int *q = (int *) 0xDEADBEE0;
  *q = 5;
  return (*p) == a;
}

