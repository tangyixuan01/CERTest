//
static uint16_t safe_mod_func_uint16_t_u_u(uint16_t _ui1, uint16_t _ui2)
{
  return (((uint16_t) _ui2) == ((uint16_t) 0)) ? ((uint16_t) _ui1) : (((uint16_t) _ui1) % ((uint16_t) _ui2));
}

