//
int main(void)
{
  int i = 0x12345678;
  short *s = (short *) (&i);
  printf("%x %x\n", s[0], s[1]);
  return 0;
}

