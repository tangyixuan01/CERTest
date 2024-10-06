//register1:volatile unsigned;ptr:volatile unsigned *;register2:volatile unsigned;x:int
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
