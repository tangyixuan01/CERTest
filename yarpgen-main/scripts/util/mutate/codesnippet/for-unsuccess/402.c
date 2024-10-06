//S:unsigned int *;data:unsigned int [2];blowfish_encrypt:func int;cx:struct cipher_context;i:short;count:short;j:short
for (i = 0; i < 4; i++)
{
  for (j = 0, count = i * 256; j < 256; j += 2, count += 2)
  {
    blowfish_encrypt(cx, (unsigned char *) data, (unsigned char *) data, 8, atomic);
    S[count] = data[0];
    S[count + 1] = data[1];
  }

}
