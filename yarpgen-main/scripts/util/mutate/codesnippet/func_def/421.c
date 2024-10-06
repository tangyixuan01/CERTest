//a:char [4]
int main(void)
{
  unsigned n0 = __builtin_strnlen(a, 1);
  unsigned n1 = __builtin_strlen(a);
  if ((n0 != 1) || (n1 != 3))
    __builtin_abort();
}

