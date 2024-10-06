//x:long int;TagTypeNumber:const long int
if ((x & TagTypeNumber) == TagTypeNumber)
{
  unsigned y = (unsigned) x;
  __builtin_printf("v: %u\n", y);
  if (y != 1)
    __builtin_abort();
}
