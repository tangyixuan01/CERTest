//
unsigned f(unsigned char g)
{
  g = 1 | (g << 1);
  g = (g >> 4) | (g << 4);
  return g;
}

