//h:int **;b:int;f:int *;c:int;a:int
for (; b < 4; b++)
{
  f = *h;
  if ((f != (&e)) && f)
    __builtin_abort();
  *h = &c;
  a = 0;
  for (; a < 4; a++)
    *h = 0;

}
