//b:int *;d:int;e:int;c:int ** volatile;a:int
for (; a < 1; a = d)
{
  *c = &e;
  assert(b);
}
