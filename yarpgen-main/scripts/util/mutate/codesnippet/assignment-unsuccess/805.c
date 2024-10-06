//BF_current:struct 
{
  BF_word S[4][0x100];
  BF_key P;
};j:BF_word;i:int
BF_current.S[i][j] = (i + 0x12345678) * j;
