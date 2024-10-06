//c:short [18];a:int;b:char [60]
void e(int g, int h, short k[][19])
{
  for (signed i = 0; i < 3; i += 2)
    for (signed j = 1; j < (h + 14); j++)
  {
    b[(i * 14) + j] = 1;
    c[i + j] = k[2][j];
    a = (g) ? (k[i][j]) : (0);
  }


}

