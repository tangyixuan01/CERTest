//d:char [1]
int f(struct A *a)
{
  char *s = (a->i < 0) ? (a->a5) : ((0 < a->i) ? (a->a7) : ("12"));
  return __builtin_sprintf(d, "%-s", s);
}

