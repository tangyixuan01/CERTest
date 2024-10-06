//modify:func void;value:int
void test(void)
{
  if (value)
    return;
  modify(42);
  value = 0;
}

