//b:int;d:int;fn1:func int;e:int;c:int [4][8];a:int
for (e = 0; e < 4; e++)
{
  c[d + 1][e + 1] = c[e][e];
  b = fn1(a ^ 1);
}
