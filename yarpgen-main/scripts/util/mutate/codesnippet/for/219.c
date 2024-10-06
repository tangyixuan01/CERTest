//b:int;c:int * volatile;a:int
for (; a; a--)
{
  *c = 1;
  b |= 4;
}
