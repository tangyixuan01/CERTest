//
int f(void)
{
  char b[6];
  __builtin_strcpy(b, "12");
  int n = __builtin_strlen(b);
  __builtin_strcpy(b, "12345");
  if (__builtin_strlen(b) != 5)
    __builtin_abort();
  return n;
}

