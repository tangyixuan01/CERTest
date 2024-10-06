//half:unsigned short [8];t:vector_t
for (int i = 0; i < 8; i++)
{
  int sh = vb->half[7 - i] & 0xf;
  t.half[7 - i] = (va->half[7 - i] << sh) | (va->half[7 - i] >> (16 - sh));
}
