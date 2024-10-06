//
inline float hton(float x)
{
  const size_t nb32 = (sizeof(float)) / (sizeof(uint32_t));
  const size_t nb16 = ((sizeof(float)) / (sizeof(uint16_t))) % 2;
  uint32_t *p32 = (uint32_t *) (&x);
  uint16_t *p16 = 0;
  size_t i = 0;
  for (i = 0; i < nb32; ++i, ++p32)
    *p32 = htonl(*p32);

  p16 = (uint16_t *) p32;
  for (i = 0; i < nb16; ++i, ++p16)
    *p16 = htonl(*p16);

  return x;
}

