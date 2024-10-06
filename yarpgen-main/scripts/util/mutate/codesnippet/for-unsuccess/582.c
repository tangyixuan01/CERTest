//b:int [10];e:int;c:int
for (e = 8; e >= 0; e--)
{
  c = 2;
  for (; c < 8; c++)
    b[e] = b[c];

  b[7] = b[8];
  b[3] = 0;
}
