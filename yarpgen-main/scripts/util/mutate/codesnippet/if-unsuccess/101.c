//x:union 
{
  struct 
  {
    long j;
    char c[];
  } s;
  char pad[32];
} [2]
if ((sizeof(x[0])) != 32)
  __builtin_abort();
