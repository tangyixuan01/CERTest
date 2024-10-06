//a:struct S3
{
  struct S1 f4;
  struct S0 f5;
}
struct S3 fn1(struct S3 p)
{
  struct S1 c = {{0, 0, 0, 0, 0, 0}, {-1, 0, 0, 0, 0, 0}};
  if (a.f5.f4)
    p.f4 = a.f4;
  else
    p.f4.f1 = c.f4;
  return p;
}

