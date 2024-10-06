//BF_current:struct 
{
  BF_word S[4][0x100];
  BF_key P;
};R:BF_word;i:int
R ^= BF_current.P[i + 1];
