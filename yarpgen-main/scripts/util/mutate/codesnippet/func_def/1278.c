//
long long broken(int a)
{
  struct cl val;
  val.one = a;
  val.two = 0;
  return *((long long *) (&val));
}

