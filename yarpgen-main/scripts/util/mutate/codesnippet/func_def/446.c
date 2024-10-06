//abort:func void
void foo(signed char a)
{
  if ((a - 0x7F) > 1)
    abort();
}

