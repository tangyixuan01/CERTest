//BF_current:struct 
{
  BF_word S[4][0x100];
  BF_key P;
}
int main(void)
{
  BF_word L;
  BF_word R;
  BF_word tmp1;
  BF_word tmp2;
  BF_word tmp3;
  BF_word tmp4;
  BF_word *ptr;
  BF_word i;
  BF_word j;
  for (i = 0; i < 4; i++)
    for (j = 0; j < 0x100; j++)
    BF_current.S[i][j] = (i + 0x12345678) * j;


  for (i = 0; i < (16 + 2); i++)
    BF_current.P[i] = i * 0x98765432;

  L = (R = 0);
  ptr = BF_current.P;
  do
  {
    ptr += 2;
    L ^= BF_current.P[0];
    {
      int i;
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

    }
    tmp4 = R;
    R = L;
    L = tmp4 ^ BF_current.P[16 + 1];
    ;
    *(ptr - 2) = L;
    *(ptr - 1) = R;
  }
  while (ptr < (&BF_current.P[16 + 2]));
  printf("%08x %08x\n", L, R);
  return 0;
}

