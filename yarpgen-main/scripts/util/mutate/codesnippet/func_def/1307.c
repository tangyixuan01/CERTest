//
static int64_t safe_div_func_int64_t_s_s(int64_t _si1, int64_t _si2)
{
  if ((_si2 == 0) || ((_si1 == INT64_MIN) && (_si2 == (-1))))
    return _si1;
  return _si1 / _si2;
}

