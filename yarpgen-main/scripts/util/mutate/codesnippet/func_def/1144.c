//
size_t strlen(const char *text)
{
  size_t len = 0;
  while (*text)
  {
    text++;
    len++;
  }

  return len;
}

