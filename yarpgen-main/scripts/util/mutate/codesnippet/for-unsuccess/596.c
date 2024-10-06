//b:unsigned;e:int;d:int [70][70];c:int [70]
for (int j = 0; j < 70; j++)
{
  for (int i = 0; i < 70; i++)
  {
    if (b)
      c[i] = 0;
    for (int l = 0; l < 70; l++)
      d[i][1] = d[l][i];

  }

  for (int k = 0; k < 70; k++)
    e = c[0];

}
