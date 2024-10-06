//s:struct s
{
  int i;
  char c[];
}
size_t f(void)
{
  return __builtin_object_size(&s.c, 0);
}

