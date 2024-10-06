//BF_current:struct 
{
  BF_word S[4][0x100];
  BF_key P;
};L:BF_word
L ^= BF_current.P[0];
