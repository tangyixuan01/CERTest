//s:struct s
{
  int i;
  char c[];
};f:func size_t;g:func size_t
int main(void)
{
  struct s *p;
  p = (struct s *) malloc((sizeof(*p)) + 6);
  printf("%zu %zu\n", f(), g(p));
  fflush(stdout);
  strncpy(p->c, "012", strlen(s.c));
  if (puts("###"))
    strncpy(s.c, "012", 4);
  strncpy(s.c, "012", strlen(s.c) + 1);
  return 0;
}

