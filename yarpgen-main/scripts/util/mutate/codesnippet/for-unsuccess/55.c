//e:uint32_t;c:int8_t [10];a:uint32_t
for (; e;)
{
  int8_t *m = &c[2];
  *m = e;
  if (a)
    goto l;
}
