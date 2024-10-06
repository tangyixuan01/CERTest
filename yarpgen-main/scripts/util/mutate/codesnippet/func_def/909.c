//a:unsigned;b:unsigned
void fn1()
{
  struct S0 c = {7, 0};
  if (c.f1)
    c.f3 = 3;
  a = -(~c.f3);
  c.f3 = ~(c.f1 && c.f1);
  c.f1 = (c.f3 * (c.f1 - (c.f1 - (a % c.f1)))) + ((~c.f3) * (-a));
  b = ~(c.f1 & a);
  if (b >= 4294967295)
    __builtin_printf("%d\n", a);
}

