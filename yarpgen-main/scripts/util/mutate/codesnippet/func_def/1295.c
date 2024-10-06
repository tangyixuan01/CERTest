//
int put_field(unsigned int start, unsigned int len)
{
  int cur_bitshift = ((start + len) % 8) - 8;
  if (cur_bitshift > (-8))
    not_removed();
}

