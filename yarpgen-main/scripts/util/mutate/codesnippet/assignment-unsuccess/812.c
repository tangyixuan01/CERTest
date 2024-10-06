//BF_current:struct 
{
  BF_word S[4][0x100];
  BF_key P;
};L:BF_word;i:int
L ^= BF_current.P[(i + 1) + 1];
