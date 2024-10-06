//i:int;regs:volatile unsigned int *;x:int
for (i = 0xbad; i >= 0; i--)
{
  if (i == 1)
    regs[0x708 / 4] = 0xbeefdead;
  for (x = 1; x >= 0; x--)
  {
    regs[0x708 / 4] = 0xbadcab;
    regs[0x704 / 4] = x;
  }

}
