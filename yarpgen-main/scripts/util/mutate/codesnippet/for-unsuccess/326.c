//a:int [6];k:int;ga:char [8][30];crc32_context:int;i:int;printf:func int;j:int
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
