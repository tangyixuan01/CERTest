//pattern:unsigned short;attr:unsigned char;OAM3:oam [8]
int test2(unsigned c, int r)
{
  for (unsigned i = 0; i < c; ++i)
  {
    oam *s = &OAM3[i];
    if (s->attr & 0x40)
      r += s->pattern;
  }

  return r;
}

