//i:short  count:short  j:short  S:unsigned int  bf_sbox:unsigned int  
for (i = 0, count = 0; i < 256; i++)
  for (j = 0; j < 4; j++, count++)
  S[count] = bf_sbox[count];

//i:short  count:short  j:short  S:unsigned int  bf_sbox:unsigned int  
for (i = 0, count = 0; i < 256; i++)
  for (j = 0; j < 4; j++, count++)
  S[count] = bf_sbox[count];

