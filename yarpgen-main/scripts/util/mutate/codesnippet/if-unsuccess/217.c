//
if (((si1 ^ si2) & (((si1 ^ ((si1 ^ si2) & (1 << (((sizeof(int8_t)) * 8) - 1)))) - si2) ^ si2)) < 0)
{
  return si1;
}
