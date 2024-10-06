//b:int;f:int;e:int *;c:volatile int
for (; b < 1; b++)
{
  e = p;
  if (c)
  {
    if (f)
      ;
    break;
  }
  if (c)
    break;
}
