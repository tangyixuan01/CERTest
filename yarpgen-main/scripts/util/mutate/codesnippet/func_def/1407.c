//half:unsigned short [8];dword:unsigned long long [2]
void vrlh(vector_t *va, vector_t *vb, vector_t *vd)
{
  vector_t t;
  for (int i = 0; i < 8; i++)
  {
    int sh = vb->half[7 - i] & 0xf;
    t.half[7 - i] = (va->half[7 - i] << sh) | (va->half[7 - i] >> (16 - sh));
  }

  vd->dword[1] = t.dword[1];
  vd->dword[0] = t.dword[0];
}

