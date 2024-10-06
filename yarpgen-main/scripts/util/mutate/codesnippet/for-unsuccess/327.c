//b:int;c:int;a:int [4]
for (; b < 4; b++)
{
  short t = a[b];
  a[b] = (c = t % 3);
}
