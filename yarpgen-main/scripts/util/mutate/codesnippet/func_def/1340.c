//plabel32_function:func void
int is_plabel32(void)
{
  return ((unsigned long) (&plabel32_function)) & 3;
}

