//
int doubleshuff(int in)
{
  const int byteshuf = _mm256_setr_epi8(0, 1, 1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 10, 10, 11, 0, 1, 1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 10, 10, 11);
  const int lane_adjust_shuf = _mm256_setr_epi32(0, 1, 2, 2, 3, 4, 5, 5);
  in = _mm256_permutevar8x32_epi32(in, lane_adjust_shuf);
  return _mm256_shuffle_epi8(in, byteshuf);
}

