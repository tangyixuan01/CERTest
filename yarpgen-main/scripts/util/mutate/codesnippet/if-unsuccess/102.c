//x:union 
{
  struct 
  {
    long j;
    char c[];
  } s;
  char pad[32];
} [2]
if (x[1].s.c[0] != 'x')
  __builtin_abort();
