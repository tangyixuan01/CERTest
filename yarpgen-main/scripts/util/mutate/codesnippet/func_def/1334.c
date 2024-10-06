//e:func void;c:unsigned int;d:unsigned int;a:long long;b:int [92][32]
int main()
{
  for (int i = 6; i <= 20; d = i++)
    for (int j = 6; j <= 91; j++)
  {
    for (int k = 16; k <= 31; k++)
      b[j][k] ^= 7;

    c *= d;
  }


  for (int i = 0; i < 21; ++i)
    for (int j = 0; j < 32; ++j)
    e(&a, b[i][j]);


  printf("%llu\n", a);
}

