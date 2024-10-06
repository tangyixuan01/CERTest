//
static uint64_t safe_rshift_func_uint64_t_u_s(uint64_t _left, int _right)
{
  return ((((int) _right) < ((uint64_t) 0)) || (((int) _right) >= ((sizeof(uint64_t)) * CHAR_BIT))) ? ((uint64_t) _left) : (((uint64_t) _left) >> ((int) _right));
}

