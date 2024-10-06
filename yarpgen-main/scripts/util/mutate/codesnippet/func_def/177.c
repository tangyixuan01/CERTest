//
void foo(char *p)
{
  unsigned l = __builtin_strlen(p);
  unsigned expected = 9;
  __builtin_printf("expected: %d, got: %d\n", expected, l);
  if (l != expected)
    __builtin_abort();
}

