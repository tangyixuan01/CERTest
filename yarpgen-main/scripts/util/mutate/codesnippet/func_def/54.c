//c:int;a:int;b:int
void fn1(int e)
{
  int *f;
  int *g;
  int **h = &g;
  *h = &e;
  for (; b < 4; b++)
  {
    f = *h;
    if ((f != (&e)) && f)
      __builtin_abort();
    *h = &c;
    a = 0;
    for (; a < 4; a++)
      *h = 0;

  }

}

