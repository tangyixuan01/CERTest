//b:int;d:volatile int;f:int;e:int;c:volatile int;a:int
for (; a < 2; a++)
{
  b &= (8 ^ f) & 1;
  for (e = 0; e < 6; e++)
    if (c)
    f = d;

}
