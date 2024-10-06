//AIC:AT91RM9200_AIC_t;SVR:u_int32_t [32];__IntTable:const u_int32_t [32]
int main()
{
  int c;
  AT91RM9200_AIC_t *aic = &((AT91RM9200_regs_t *) 0xFFF00000)->AIC;
  for (c = 0; c < 32; c++)
  {
    aic->SVR[c] = __IntTable[c];
  }

  return 0;
}

