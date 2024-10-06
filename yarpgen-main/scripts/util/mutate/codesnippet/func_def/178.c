//foo:func void
int main()
{
  static unsigned char utf8[] = {0xe4, 0xb8, 0x80, 0xe3, 0x82, 0xa1, 0xef, 0xbd, 0xa1};
  char srcBuffer[100];
  __builtin_memcpy(srcBuffer, utf8, sizeof(utf8));
  srcBuffer[sizeof(utf8)] = 0;
  foo(srcBuffer);
  return 0;
}

