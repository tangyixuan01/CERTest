//c:char [128];foo:func void;b:int
void bar(int x, const char *y, ...)
{
  va_list z;
  __builtin_va_start(z);
  if ((!x) && ((*c) == '\0'))
    ++b;
  foo(x, y, z);
  ;
}

