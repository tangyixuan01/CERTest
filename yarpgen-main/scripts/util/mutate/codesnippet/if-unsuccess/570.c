//nd:unsigned char
if (nd != 0x21)
{
  switch (nd)
  {
    case 0x95:
      *tl = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *tl = 0x00;
      break;

    default:
      *tl = 0x05;
      break;

  }

}
