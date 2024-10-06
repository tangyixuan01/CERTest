//a:int;z:va_list
static void foo(int x, const char *y, va_list z)
{
  __builtin_printf("%s %d %s", (x) ? ("") : ("foo"), ++a, (y && (*y)) ? ("bar") : (""));
  if (y && (*y))
    __builtin_vprintf(y, z);
}

