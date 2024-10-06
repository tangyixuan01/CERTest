//f:struct a
{
  int8_t b;
  int32_t c;
  int32_t d;
  uint8_t e;
} [2];i:int
for (i = 0; i < 2; i++)
  printf("%d\n", f[i].c);
