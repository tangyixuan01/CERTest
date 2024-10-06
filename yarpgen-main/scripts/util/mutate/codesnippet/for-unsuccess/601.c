//tmp3:BF_word;tmp1:BF_word;L:BF_word;BF_current:struct 
{
  BF_word S[4][0x100];
  BF_key P;
};tmp4:BF_word;R:BF_word;i:int;tmp2:BF_word
for (i = 0; i < 16; i += 2)
{
  tmp1 = L & 0xFF;
  tmp2 = L >> 8;
  tmp2 &= 0xFF;
  tmp3 = L >> 16;
  tmp3 &= 0xFF;
  tmp4 = L >> 24;
  tmp1 = BF_current.S[3][tmp1];
  tmp2 = BF_current.S[2][tmp2];
  tmp3 = BF_current.S[1][tmp3];
  tmp3 += BF_current.S[0][tmp4];
  tmp3 ^= tmp2;
  R ^= BF_current.P[i + 1];
  tmp3 += tmp1;
  R ^= tmp3;
  ;
  tmp1 = R & 0xFF;
  tmp2 = R >> 8;
  tmp2 &= 0xFF;
  tmp3 = R >> 16;
  tmp3 &= 0xFF;
  tmp4 = R >> 24;
  tmp1 = BF_current.S[3][tmp1];
  tmp2 = BF_current.S[2][tmp2];
  tmp3 = BF_current.S[1][tmp3];
  tmp3 += BF_current.S[0][tmp4];
  tmp3 ^= tmp2;
  L ^= BF_current.P[(i + 1) + 1];
  tmp3 += tmp1;
  L ^= tmp3;
  ;
}
