//register1:volatile unsigned;register2:volatile unsigned
void busy_wait_for_register(int x)
{
  volatile unsigned *ptr;
  switch (x)
  {
    case 0x1111:
      ptr = &register1;
      break;

    case 0x2222:
      ptr = &register2;
      break;

    default:
      return;

  }

  while (*ptr)
  {
  }

}

