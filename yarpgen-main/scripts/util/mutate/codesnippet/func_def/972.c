//abort:func void
void check(struct s *sp)
{
  int i;
  for (i = 0; i < 256; i++)
    if (sp->a[i] != i)
    abort();

}

