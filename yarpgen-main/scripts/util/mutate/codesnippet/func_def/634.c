//o:int32_t *;l:struct 
{
  int32_t h;
  int16_t j;
};k:struct 
{
  unsigned b;
};n:int8_t;m:struct 
{
  struct a c;
};g:struct a
{
  int8_t b;
  int32_t c;
  int32_t d;
  uint8_t e;
};f:struct a
{
  int8_t b;
  int32_t c;
  int32_t d;
  uint8_t e;
} [2];t:struct a
{
  int8_t b;
  int32_t c;
  int32_t d;
  uint8_t e;
};p:struct a
struct a q()
{
  int8_t r[5][5][7] = {0};
  int32_t **s[10];
  int32_t ***x = &s[2];
  int i;
  for (i = 0; i < 10; i++)
    s[i] = &o;

  u:
  if (r[3][3][6] > f[0].d)
  {
    int32_t v;
    for (; m.c.e;     {
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

  aa:
  for (; n < 4; n++)
    *(*(*x)) = 1;


  return t;
}

