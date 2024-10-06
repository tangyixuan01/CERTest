//foo:func void
static void bar(int a, ...)
{
  __builtin_apply(foo, __builtin_apply_args(), 20);
}

