//nd:unsigned char;ic:int *
switch (nd)
{
  case 0x95:
    *ic = nd - 0x91;
    break;

  case 0x80:

  case 0x81:

  case 0x82:
    *ic = nd - 0x80;
    break;

  default:
    *ic = 0;
    break;

}
