//e:unsigned;k:int;j:int;i:int
if (e)
{
  for (; j; --j)
    if (k)
    __builtin_printf("%d", 9);

  if (i)
    __builtin_printf("%d", j);
}
