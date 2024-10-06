//OAM3:oam [8];attr:unsigned char;pattern:unsigned short
for (unsigned i = 0; i < c; ++i)
{
  oam *s = &OAM3[i];
  if (s->attr & 0x40)
    r += s->pattern;
}
