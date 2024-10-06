//b:short;e:int;c:int;a:int [50]
for (; b <= 4; b++)
  for (; c <= 4; c++)
{
  *a |= 1;
  e = 0;
  for (; e <= 4; e++)
    a[e + 1] |= 3;

}

