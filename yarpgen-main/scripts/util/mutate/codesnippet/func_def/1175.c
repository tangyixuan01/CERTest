//f:func void
void g(const char *s)
{
  if (__builtin_strlen(s) > 7)
    return;
  struct A a;
  __builtin_strcpy(a.a, s);
  a.a[0] = 0;
  f(&a);
}

