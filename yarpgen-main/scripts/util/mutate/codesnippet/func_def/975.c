//g_2823:uint16_t;safe_mul_func_uint16_t_u_u:func uint16_t;g_116:uint16_t
int main(int argc, char *argv[])
{
  uint16_t l_2815 = 65535UL;
  uint16_t *l_2821 = &g_116;
  uint16_t *l_2822 = &g_2823;
  printf("start g_2823 = %d\n", g_2823);
  lbl_2826:
  l_2815 &= 0x9DEF1EAEL;

  if (+safe_mul_func_uint16_t_u_u(*l_2821 = l_2815, --(*l_2822)))
  {
    goto lbl_2826;
  }
  printf("end g_2823 = %d\n", g_2823);
  return 0;
}

