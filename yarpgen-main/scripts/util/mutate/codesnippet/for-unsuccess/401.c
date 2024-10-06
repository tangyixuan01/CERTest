//data:unsigned int [2];blowfish_encrypt:func int;cx:struct cipher_context;P:unsigned int *;i:short
for (i = 0; i < (16 + 2); i += 2)
{
  blowfish_encrypt(cx, (unsigned char *) data, (unsigned char *) data, 8, atomic);
  P[i] = data[0];
  P[i + 1] = data[1];
}
