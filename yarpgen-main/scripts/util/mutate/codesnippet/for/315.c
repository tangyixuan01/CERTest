//b:int;d:int;e:int;c:int;a:int
for (; d >= 0; d--)
{
  c = e;
  e = (a ^ (a && b)) && 1;
}
