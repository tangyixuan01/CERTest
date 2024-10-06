//
static uint64_t safe_div_func_uint64_t_u_u(uint64_t _ui1, uint64_t _ui2)
{
  if (_ui2 == 0)
    return _ui1;
  return _ui1 / _ui2;
}

