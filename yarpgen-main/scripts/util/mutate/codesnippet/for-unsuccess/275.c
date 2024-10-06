//k:struct 
{
  unsigned b;
};l:struct 
{
  int32_t h;
  int16_t j;
};m:struct 
{
  struct a c;
}
for (; m.c.e; {
  int16_t si1 = l.h;
  int16_t si2 = 1;
  (((((int16_t) si1) ^ ((int16_t) si2)) & (((((int16_t) si1) ^ ((((int16_t) si1) ^ ((int16_t) si2)) & (((int16_t) 1) << (((sizeof(int16_t)) * 8) - 1)))) - ((int16_t) si2)) ^ ((int16_t) si2))) < ((int16_t) 0)) ? ((int16_t) si1) : (((int16_t) si1) - ((int16_t) si2));
}
)
  if (k.b)
  goto u;
