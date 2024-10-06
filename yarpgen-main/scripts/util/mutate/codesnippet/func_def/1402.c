//
static unsigned good(unsigned x, unsigned n)
{
  n &= 0x1F;
  return (n) ? (x + n) : (x);
}

