//b:int [92][32];d:unsigned int;c:unsigned int
for (int i = 6; i <= 20; d = i++)
  for (int j = 6; j <= 91; j++)
{
  for (int k = 16; k <= 31; k++)
    b[j][k] ^= 7;

  c *= d;
}

