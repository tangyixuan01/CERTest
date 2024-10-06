//foo_read:func int
unsigned int foo(volatile int *mem)
{
  foo_read(mem);
  return foo_read(mem);
}

