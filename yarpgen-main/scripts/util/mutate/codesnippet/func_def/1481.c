//p:struct s *
size_t g(struct s *p)
{
  return __builtin_object_size(p->c, 0);
}

