//x:volatile double
void f(int p)
{
  if ((p < (-1)) || (0 < p))
    p = -1;
  char d[30];
  int n = __builtin_sprintf(d, "%.*a", p, x);
  const char *s = (n < 20) ? ("< 20") : (">= 20");
  __builtin_printf("%i %s\n%zu: \"%s\"\n", n, s, __builtin_strlen(d), d);
}

