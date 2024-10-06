//
int g(void)
{
  return __builtin_snprintf(0, 0, "%-s", "foobar");
}

