//a:union U
{
  int f1;
  int f2;
}
static int foo(union U p)
{
  for (a.f2 = 0; a.f2 < 1; a.f2++)
    if (p.f2)
    break;

  return 0;
}

