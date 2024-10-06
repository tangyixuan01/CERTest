//b:char;e:char;a:int [35]
for (; b >= 0; b--)
{
  e = 3;
  for (; e >= 0; e--)
    a[(b * 5) + e] = a[((b * 5) + e) + 1];

}
