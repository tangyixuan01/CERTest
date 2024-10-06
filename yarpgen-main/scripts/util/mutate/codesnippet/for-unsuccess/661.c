//d:int *;f:int;e:int;c:int;b:int;a:struct 
{
  int f0;
  int f1 : 1;
  int f2 : 2;
}
for (; b < 1; ++b)
{
  for (e = 0; e < 1; e = 1)
  {
    int **g = &d;
    *g = &c;
  }

  *d = 0;
  f = a.f1;
  if (f)
    return 0;
}
