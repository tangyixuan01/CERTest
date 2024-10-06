//
unsigned long foo(struct ia64_psr *c)
{
  return ((unsigned long) c->cpl) << 62;
}

