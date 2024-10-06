//c:int *;d:short;a:int;b:int
int main()
{
  unsigned e = 1;
  for (d = 9; d > 8; d += 2)
  {
    int *f = &a;
    int **g = &f;
    if (d > (++e))
      *g = c;
    if (f != (&b))
      __builtin_abort();
  }

  return 0;
}

