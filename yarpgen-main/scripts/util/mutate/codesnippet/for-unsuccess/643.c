//i:int;j:int
for (j = 0; j < 16; j++)
{
  for (i = 0; i < 16; i++)
  {
    img->a[0][j][i] = s[i][0];
    img->a[1][j][i] = s[j][1];
    img->a[2][j][i] = s0;
  }

}
