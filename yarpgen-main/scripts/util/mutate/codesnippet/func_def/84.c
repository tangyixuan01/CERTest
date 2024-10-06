//somefunc:func void *
void testcase(s1 *s)
{
  void *p;
  label:
  if (p == 0)
  {
    s->p = p;
    return;
  }

  p = somefunc();
  goto label;
}

