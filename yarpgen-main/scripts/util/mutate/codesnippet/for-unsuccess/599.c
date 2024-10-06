//BF_current:struct 
{
  BF_word S[4][0x100];
  BF_key P;
};i:int;j:BF_word
for (i = 0; i < 4; i++)
  for (j = 0; j < 0x100; j++)
  BF_current.S[i][j] = (i + 0x12345678) * j;

