//BF_current:struct 
{
  BF_word S[4][0x100];
  BF_key P;
};tmp4:BF_word;L:BF_word
L = tmp4 ^ BF_current.P[16 + 1];
