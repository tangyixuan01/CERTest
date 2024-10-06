//cnv_print:func void
int main(void)
{
  fesetround(FE_TONEAREST);
  cnv_print(0x7fffffffffffffff);
  fesetround(FE_DOWNWARD);
  cnv_print(0x7fffffffffffffff);
  fesetround(FE_UPWARD);
  cnv_print(0x7fffffffffffffff);
  fesetround(FE_TOWARDZERO);
  cnv_print(0x7fffffffffffffff);
  return 0;
}

