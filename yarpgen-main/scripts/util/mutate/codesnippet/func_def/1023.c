//b:uint32_t [8];a:uint32_t [8]
void func(uint32_t a[8], uint32_t b[8])
{
  uint32_t i;
  uint32_t c;
  int64_t d;
  for (i = 0; i <= 1; i++)
  {
    ((uint64_t *) b)[0] = ((uint64_t *) a)[0];
    ((uint64_t *) b)[1] = ((uint64_t *) a)[0];
    ((uint64_t *) b)[2] = ((uint64_t *) a)[0];
    ((uint64_t *) b)[3] = ((uint64_t *) a)[0];
    c = 1;
    d = b[0];
    d -= c;
    b[0] = d;
    c = b[0];
    d = b[1];
    d -= c << 1;
    b[1] = d;
  }

  return;
}

