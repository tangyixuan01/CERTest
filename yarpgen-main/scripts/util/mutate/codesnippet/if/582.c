//b:volatile int;c:int;a:int
if (1 & (1 << b))
  for (;;)
{
  if (a)
    break;
  return 0;
}

else
  c = 0;
