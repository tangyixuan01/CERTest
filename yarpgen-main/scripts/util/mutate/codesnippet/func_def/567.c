//g3:union U1;g2:uint32_t [][10][1];g1:int32_t [1]
static int32_t func_1()
{
  int32_t *l_1 = &g1[0];
  uint32_t l_2;
  for (g3.b.a = 27; g3.b.a != 45; g3.b.a = g3.b.a + 9)
  {
    for (l_2 = 0; l_2 <= 3; l_2 += 1)
    {
      uint32_t *l_3 = &g2[6][6][0];
      *l_1 = (*l_3 ^= (0 == 0) << 0);
    }

  }

  return 0;
}

