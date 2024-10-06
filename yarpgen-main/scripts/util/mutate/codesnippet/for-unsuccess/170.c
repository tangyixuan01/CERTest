//b:short;c:int;a:int [8][10]
for (; b; b--)
{
  c = 0;
  for (; c <= 6; c++)
    a[c + 1][b + 2] = a[c][b + 1];

}
