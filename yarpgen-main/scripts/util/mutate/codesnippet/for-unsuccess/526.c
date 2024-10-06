//b:int;d:int;f:unsigned;e:int;c:int;a:char [3]
for (; e < 2; e++)
  for (; c; c++)
{
  d = e / f;
  for (b = 0; b < 3; b++)
    a[b + d] = 0;

}

