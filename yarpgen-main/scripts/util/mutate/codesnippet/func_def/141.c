//y:struct S1;x:struct S1
static void foo(struct S0 p)
{
  struct S0 *l = &y.f0;
  *l = x.f0;
  if (p.f0)
    *l = *l;
}

