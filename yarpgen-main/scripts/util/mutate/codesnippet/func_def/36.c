//
static int8_t safe_rshift_func_int8_t_s_u(int8_t _left, unsigned int _right)
{
  return ((((int8_t) _left) < ((int8_t) 0)) || (((unsigned int) _right) >= ((sizeof(int8_t)) * CHAR_BIT))) ? ((int8_t) _left) : (((int8_t) _left) >> ((unsigned int) _right));
}

