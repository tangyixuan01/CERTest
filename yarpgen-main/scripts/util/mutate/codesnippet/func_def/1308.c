//
static int8_t safe_add_func_int8_t_s_s(int8_t _si1, int8_t _si2)
{
  return ((((((int8_t) _si1) > ((int8_t) 0)) && (((int8_t) _si2) > ((int8_t) 0))) && (((int8_t) _si1) > (INT8_MAX - ((int8_t) _si2)))) || (((((int8_t) _si1) < ((int8_t) 0)) && (((int8_t) _si2) < ((int8_t) 0))) && (((int8_t) _si1) < (INT8_MIN - ((int8_t) _si2))))) ? ((int8_t) _si1) : (((int8_t) _si1) + ((int8_t) _si2));
}

