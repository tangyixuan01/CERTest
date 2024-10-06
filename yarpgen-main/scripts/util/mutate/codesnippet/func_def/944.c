//arr_41:unsigned char [14][14][19][16][18];test:func void;arr_42:long long int [14][14][19][16][18]
int main()
{
  for (size_t i_0 = 0; i_0 < 14; ++i_0)
    for (size_t i_1 = 0; i_1 < 14; ++i_1)
    for (size_t i_2 = 0; i_2 < 19; ++i_2)
    for (size_t i_3 = 0; i_3 < 16; ++i_3)
    for (size_t i_4 = 0; i_4 < 18; ++i_4)
    arr_41[i_0][i_1][i_2][i_3][i_4] = (unsigned char) 226;





  for (size_t i_0 = 0; i_0 < 14; ++i_0)
    for (size_t i_1 = 0; i_1 < 14; ++i_1)
    for (size_t i_2 = 0; i_2 < 19; ++i_2)
    for (size_t i_3 = 0; i_3 < 16; ++i_3)
    for (size_t i_4 = 0; i_4 < 18; ++i_4)
    arr_42[i_0][i_1][i_2][i_3][i_4] = -5577957210778461327LL;





  test();
  printf("%lld\n", arr_42[0][0][0][0][0]);
}

