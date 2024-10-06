//inline_read:func int
int foo_read(volatile int *mem)
{
  return inline_read(mem);
}

