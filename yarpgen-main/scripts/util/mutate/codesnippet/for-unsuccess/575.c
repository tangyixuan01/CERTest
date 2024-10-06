//b:int [8];d:int;c:int [8];a:int
for (; a < 8; a++)
{
  d = b[a] >> 1;
  c[a] = d != 0;
}
