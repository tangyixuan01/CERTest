//aic:AT91RM9200_AIC_t *;__IntTable:const u_int32_t [32];SVR:u_int32_t [32];c:int
for (c = 0; c < 32; c++)
{
  aic->SVR[c] = __IntTable[c];
}
