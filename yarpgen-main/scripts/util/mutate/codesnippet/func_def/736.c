//t_dummy:func void
void t(struct T *t)
{
  bool flags[2];
  flags[0] = !t->a;
  flags[1] = !t->b;
  t_dummy(flags);
}

