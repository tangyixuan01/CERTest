//abort:func void;N:volatile int
void foo(void)
{
  int i;
  char *p;
  char value[10];
  value[0] = 0x42;
  for (i = 0; i < N; i++)
    if (i > 0)
  {
    p = ((char *) i) - 1;
    *(value + ((int) p)) = (char) i;
  }

  if (value[0] != 1)
    abort();
}

