//
int foo()
{
  int i = 1;
  int j = 2;
  struct S s;
  int **p;
  s.p1 = &i;
  s.p2 = &j;
  p = &s.p1;
  uintptr_t pi = (uintptr_t) p;
  pi = pi + (sizeof(int *));
  p = (int **) pi;
  *(*p) = 3;
  return j;
}

