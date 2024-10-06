//b:int *;d:int *;c:int ** volatile;a:int
for (a = 0; a < 1; a++)
{
  *c = d;
  assert(b == (&a));
}
