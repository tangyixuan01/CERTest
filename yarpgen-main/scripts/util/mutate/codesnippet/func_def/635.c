//q:func struct a;f:struct a
{
  int8_t b;
  int32_t c;
  int32_t d;
  uint8_t e;
} [2]
void main()
{
  int i;
  q();
  for (i = 0; i < 2; i++)
    printf("%d\n", f[i].c);

}

