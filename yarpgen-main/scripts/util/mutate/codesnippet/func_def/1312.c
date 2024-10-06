//g_46:volatile uint8_t;safe_div_func_int64_t_s_s:func int64_t;func_35:func uint16_t;g_47:uint8_t;g_114:uint8_t *;g_126:uint8_t *;safe_add_func_int8_t_s_s:func int8_t;safe_div_func_uint64_t_u_u:func uint64_t;g_101:int8_t;g_133:uint8_t
int32_t func_19(int32_t p_20)
{
  if (1 != safe_div_func_uint64_t_u_u(safe_div_func_int64_t_s_s(p_20, 1), g_101))
  {
    func_35(0, ((1 <= safe_add_func_int8_t_s_s(g_47, g_46)) > p_20) < 1, 1);
    g_133 = 1;
    assert(g_114 == 0);
    assert(g_126 == 0);
  }
  return 1;
}

