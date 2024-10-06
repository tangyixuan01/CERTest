//
short string2int(const char *buf, unsigned len)
{
  return (len > 1) ? ((buf[len - 1] - '0') + (((short) 10) * string2int(buf, len - 1))) : ((*buf) - '0');
}

