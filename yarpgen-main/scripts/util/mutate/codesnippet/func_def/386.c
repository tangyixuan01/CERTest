//foo:func void;TagTypeNumber:const long int;x:long int
int main(int argc, char **argv)
{
  if (argc > 0)
    foo();
  if ((x & TagTypeNumber) == TagTypeNumber)
  {
    unsigned y = (unsigned) x;
    __builtin_printf("v: %u\n", y);
    if (y != 1)
      __builtin_abort();
  }
  return 0;
}

