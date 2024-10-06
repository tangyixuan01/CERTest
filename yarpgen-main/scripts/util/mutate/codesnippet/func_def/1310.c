//
static int32_t safe_mul_func_int32_t_s_s(int32_t _si1, int32_t _si2)
{
  return ((((((((int32_t) _si1) > ((int32_t) 0)) && (((int32_t) _si2) > ((int32_t) 0))) && (((int32_t) _si1) > (INT32_MAX / ((int32_t) _si2)))) || (((((int32_t) _si1) > ((int32_t) 0)) && (((int32_t) _si2) <= ((int32_t) 0))) && (((int32_t) _si2) < (INT32_MIN / ((int32_t) _si1))))) || (((((int32_t) _si1) <= ((int32_t) 0)) && (((int32_t) _si2) > ((int32_t) 0))) && (((int32_t) _si1) < (INT32_MIN / ((int32_t) _si2))))) || ((((((int32_t) _si1) <= ((int32_t) 0)) && (((int32_t) _si2) <= ((int32_t) 0))) && (((int32_t) _si1) != ((int32_t) 0))) && (((int32_t) _si2) < (INT32_MAX / ((int32_t) _si1))))) ? ((int32_t) _si1) : (((int32_t) _si1) * ((int32_t) _si2));
}

