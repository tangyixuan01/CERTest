//e:int;d:int ** volatile;c:int * volatile;a:int
for (; a <= 0; a++)
{
  e = 0;
  *d = &e;
  if (*c)
    return 0;
}
