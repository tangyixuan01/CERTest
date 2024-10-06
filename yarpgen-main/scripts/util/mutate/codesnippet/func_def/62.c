//
static int8_t safe_mod_int8_t(int8_t si1, int8_t si2)
{
  return ((si2 == 0) || ((si1 == INT8_MIN) && (si2 == (-1)))) ? (si1) : (si1 % si2);
}

