//b:char [10][7];d:int;e:int;c:short;a:char [7]
for (; d <= 4; d++)
{
  e = 0;
  for (; e <= 6; e++)
  {
    if (a[c])
      b[e + 3][d + 2] = 1;
    a[0] = 5;
    b[e][d + 2] = 0;
  }

}
