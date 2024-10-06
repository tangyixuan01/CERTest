//
static unsigned fail(unsigned x, unsigned n)
{
  return n &= (0x1F) ? (x + n) : (x);
}

