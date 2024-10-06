//cx:struct cipher_context;bf_sbox:unsigned int [256 * 4];bf_pbox:unsigned int [16 + 2];blowfish_encrypt:func int
int blowfish_set_key(struct cipher_context *cx, unsigned char *key, int keybytes, int atomic)
{
  blow_key *key2 = (blow_key *) cx->keyinfo;
  short i;
  short j;
  short count;
  unsigned int data[2];
  unsigned int *P = key2->P;
  unsigned int *S = key2->S;
  for (i = 0, count = 0; i < 256; i++)
    for (j = 0; j < 4; j++, count++)
    S[count] = bf_sbox[count];


  for (i = 0; i < (16 + 2); i++)
    P[i] = bf_pbox[i];

  for (i = 0; i < (16 + 2); i += 2)
  {
    blowfish_encrypt(cx, (unsigned char *) data, (unsigned char *) data, 8, atomic);
    P[i] = data[0];
    P[i + 1] = data[1];
  }

  for (i = 0; i < 4; i++)
  {
    for (j = 0, count = i * 256; j < 256; j += 2, count += 2)
    {
      blowfish_encrypt(cx, (unsigned char *) data, (unsigned char *) data, 8, atomic);
      S[count] = data[0];
      S[count + 1] = data[1];
    }

  }

  return 0;
}

