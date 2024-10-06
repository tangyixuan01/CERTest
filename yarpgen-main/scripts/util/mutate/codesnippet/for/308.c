//d:short;e:unsigned;c:int *;b:int;a:int
for (d = 9; d > 8; d += 2)
{
  int *f = &a;
  int **g = &f;
  if (d > (++e))
    *g = c;
  if (f != (&b))
    __builtin_abort();
}
