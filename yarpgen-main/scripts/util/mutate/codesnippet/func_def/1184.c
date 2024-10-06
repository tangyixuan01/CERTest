//f:func intptr_t
void g(void)
{
  intptr_t i = f();
  if (i == 0)
    __builtin_trap();
}

