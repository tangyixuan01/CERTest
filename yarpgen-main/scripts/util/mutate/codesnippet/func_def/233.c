//x:union 
{
  struct 
  {
    long j;
    char c[];
  } s;
  char pad[32];
} [2]
int main(void)
{
  if ((sizeof(x[0])) != 32)
    __builtin_abort();
  if (x[1].s.c[0] != 'x')
    __builtin_abort();
  return 0;
}

