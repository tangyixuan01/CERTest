//request:void (*)(int request, void *arg);gnda:func unsigned char;po:po_t *
static unsigned char snod(unsigned char cd, unsigned char *tl, unsigned char *ic)
{
  unsigned char nd;
  while ((nd = gnda(cd, 0)) != 0x21)
  {
    int Req;
    po->request(57, &Req);
    if (!Req)
      break;
  }

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
  if (nd != 0x21)
  {
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

  }
  return nd;
}

