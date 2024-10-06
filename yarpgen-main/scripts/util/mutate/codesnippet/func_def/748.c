//i:int;k:int;j:int;crc32_gentab_i:int;printf:func int;a:int [6];ga:char [8][30];crc32_context:int
int main()
{
  for (; crc32_gentab_i < 6; crc32_gentab_i++)
    a[0] = crc32_gentab_i;

  for (; i < 8; i++)
  {
    j = 0;
    for (; j < 5; j++)
    {
      k = 0;
      for (; k < 6; k++)
      {
        long long val = ga[i][j * 5];
        crc32_context = a[crc32_context ^ val];
      }

    }

    printf("%X\n", crc32_context);
  }

  return 0;
}

