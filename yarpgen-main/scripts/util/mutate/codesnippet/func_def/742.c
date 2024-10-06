//global:int
int bla(struct test1 *xa, struct test2 *xb)
{
  global = 1;
  xb->sub.a = 1;
  xa->a = 8;
  return xb->sub.a;
}

