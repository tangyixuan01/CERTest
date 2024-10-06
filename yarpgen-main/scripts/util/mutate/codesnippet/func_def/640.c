//bar:void *;foo:int;baz:unsigned int
void *pure_alloc()
{
  void *res;
  while (1)
  {
    res = (void *) (((unsigned int) (foo + bar)) & (~1));
    foo += 2;
    if (foo < baz)
      return res;
    foo = 0;
  }

}

