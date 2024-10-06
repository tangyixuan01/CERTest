//
intptr_t f(void)
{
  int i;
  if (((intptr_t) (&i)) == 0)
    __builtin_abort();
  return (intptr_t) (&i);
}

