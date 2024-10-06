//abort:func void
void f(int i)
{
  if (i > 0)
    abort();
  i = -i;
  if (i < 0)
    return;
  abort();
}

