//nd:unsigned char;po:po_t *;gnda:func unsigned char;request:void (*)(int request, void *arg)
while ((nd = gnda(cd, 0)) != 0x21)
{
  int Req;
  po->request(57, &Req);
  if (!Req)
    break;
}
