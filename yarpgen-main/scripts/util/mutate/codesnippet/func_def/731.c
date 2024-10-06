//
static int64_t safe_add_func_int64_t_s_s(int64_t si1, int64_t si2)
{
  return ((((si1 > 0) && (si2 > 0)) && (si1 > (9223372036854775807L - si2))) || (((si1 < 0) && (si2 < 0)) && (si1 < (((-9223372036854775807L) - 1) - si2)))) ? (si1) : (si1 + si2);
}

