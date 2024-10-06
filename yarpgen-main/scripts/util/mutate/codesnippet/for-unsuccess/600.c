//BF_current:struct 
{
  BF_word S[4][0x100];
  BF_key P;
};i:int
for (i = 0; i < (16 + 2); i++)
  BF_current.P[i] = i * 0x98765432;
