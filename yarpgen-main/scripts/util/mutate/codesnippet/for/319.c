//b:int *;e:int;d:int;c:int *
for (e = 0; e < 2; e++)
{
  d = *b;
  *c = d && e;
}
