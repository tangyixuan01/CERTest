//
int g(void)
{
  int n = 3;
  return __builtin_strncmp("123", "1234", n);
}

