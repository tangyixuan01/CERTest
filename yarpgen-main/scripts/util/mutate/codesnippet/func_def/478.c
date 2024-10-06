//c:uint16_t;transparent_crc:func void;crc32_gentab:func void;b:struct 
{
  int32_t a;
};crc32_context:uint32_t
void main()
{
  int d = 0;
  crc32_gentab();
  int32_t *e = &b.a;
  uint64_t f = 8;
  printf("%d\n", b.a);
  g:
  if (*e)
    for (c = 0; 0;)
    ;

  else
  {
    int8_t h = 0;
    i:
    for (; 0; f++)
      ;


    if (f)
      goto g;
    if (    {
      uint8_t ui1 =       {
        int64_t si1 = *e;
        int64_t si2 = 0;
        ((((int64_t) si2) == ((int64_t) 0)) || ((((int64_t) si1) == ((-9223372036854775807LL) - 1)) && (((int64_t) si2) == ((int64_t) (-1))))) ? ((int64_t) si1) : (((int64_t) si1) / ((int64_t) si2));
      }
;
      uint8_t ui2 = h;
      (((uint8_t) ui2) == ((uint8_t) 0)) ? ((uint8_t) ui1) : (((uint8_t) ui1) / ((uint8_t) ui2));
    }
)
      goto i;
  }

  transparent_crc(c);
  printf("checksum = %X\n", crc32_context);
}

