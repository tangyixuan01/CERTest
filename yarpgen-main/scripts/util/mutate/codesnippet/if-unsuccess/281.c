//r:int8_t [5][5][7];l:struct 
{
  int32_t h;
  int16_t j;
};m:struct 
{
  struct a c;
};k:struct 
{
  unsigned b;
};g:struct a
{
  int8_t b;
  int32_t c;
  int32_t d;
  uint8_t e;
};p:struct a;f:struct a
{
  int8_t b;
  int32_t c;
  int32_t d;
  uint8_t e;
} [2]
if (r[3][3][6] > f[0].d)
{
  int32_t v;
  for (; m.c.e;   {
    int16_t si1 = l.h;
    int16_t si2 = 1;
    (((((int16_t) si1) ^ ((int16_t) si2)) & (((((int16_t) si1) ^ ((((int16_t) si1) ^ ((int16_t) si2)) & (((int16_t) 1) << (((sizeof(int16_t)) * 8) - 1)))) - ((int16_t) si2)) ^ ((int16_t) si2))) < ((int16_t) 0)) ? ((int16_t) si1) : (((int16_t) si1) - ((int16_t) si2));
  }
)
    if (k.b)
    goto u;

  for (l.j = 5; 0;)
    ;

  if (p.b)
    goto aa;
}
else
  return g;
