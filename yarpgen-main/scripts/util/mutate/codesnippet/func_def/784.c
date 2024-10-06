//f:func uint16_t;d:union a
{
  int16_t b;
  uint64_t c;
}
static int64_t g(int32_t aa, uint8_t h, union a bb)
{
  int16_t *i = &d.b;
  f(0, h, 0);
  *i = h;
  return 0;
}

