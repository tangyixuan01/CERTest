//b:int [256];lrint:func long;i:int;c:unsigned short [256];a:double [256]
for (i = 0; i < 256; ++i)
{
  b[i] = lrint(a[i]);
  c[i] += c[i];
}
