//
inline static int8_t safe_sub_int8_t_s_s(int8_t si1, int8_t si2)
{
  if (((si1 ^ si2) & (((si1 ^ ((si1 ^ si2) & (1 << (((sizeof(int8_t)) * 8) - 1)))) - si2) ^ si2)) < 0)
  {
    return si1;
  }
  return si1 - si2;
}

