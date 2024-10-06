//lane_adjust_shuf:const int
in = _mm256_permutevar8x32_epi32(in, lane_adjust_shuf);
