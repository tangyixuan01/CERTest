//
static int64_t safe_add_func_int64_t_s_s(int64_t _si1, int64_t _si2)
{
  return ((((((int64_t) _si1) > ((int64_t) 0)) && (((int64_t) _si2) > ((int64_t) 0))) && (((int64_t) _si1) > (INT64_MAX - ((int64_t) _si2)))) || (((((int64_t) _si1) < ((int64_t) 0)) && (((int64_t) _si2) < ((int64_t) 0))) && (((int64_t) _si1) < (INT64_MIN - ((int64_t) _si2))))) ? ((int64_t) _si1) : (((int64_t) _si1) + ((int64_t) _si2));
}

