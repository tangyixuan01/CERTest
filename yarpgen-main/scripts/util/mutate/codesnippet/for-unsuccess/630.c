//g:short *;f:char;k:int [];l:unsigned char **;c:char
for (; c >= 0; c--)
{
  *(*l) = f;
  *g = k[c + 3];
  k[c + 1] = 0;
}
