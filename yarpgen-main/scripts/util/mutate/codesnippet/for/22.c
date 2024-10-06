//b:unsigned;c:int;a:int
for (; b < 3; b++)
{
  while (c < b)
    __builtin_abort();

  for (a = 0; a < 3; a++)
    c++;

}
