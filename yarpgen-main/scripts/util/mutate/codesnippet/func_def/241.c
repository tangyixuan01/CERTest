//
void table_init(int *value)
{
  int i;
  int val = 0x03020100;
  for (i = 0; i < (256 / 4); i++)
  {
    value[i] = val;
    val += 0x04040404;
  }

}

