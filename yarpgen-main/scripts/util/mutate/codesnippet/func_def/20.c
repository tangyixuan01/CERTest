//zero_two_uint16:func void
void zero(uint16_t *ptr)
{
  for (int i = 0; i < 16; ++i)
  {
    zero_two_uint16(ptr);
    ptr += 2;
  }

}

