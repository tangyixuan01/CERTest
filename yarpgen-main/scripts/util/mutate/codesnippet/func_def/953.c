//fn1:func int;d:char
static int fn2(int *p1, long *p2)
{
  char *f = &d;
  fn1(*p2);
  *f = *p1;
  return 0;
}

