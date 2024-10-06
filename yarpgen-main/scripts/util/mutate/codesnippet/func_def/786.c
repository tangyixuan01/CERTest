//g:func int64_t;d:union a
{
  int16_t b;
  uint64_t c;
}
int main()
{
  uint32_t j = 8;
  g(1, j, d);
  printf("%d\n", d.b);
  return 0;
}

