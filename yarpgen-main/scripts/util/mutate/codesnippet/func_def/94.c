//b:int [256];a:double [256];c:unsigned short [256];lrint:func long
void bar(void)
{
  int i;
  for (i = 0; i < 256; ++i)
  {
    b[i] = lrint(a[i]);
    c[i] += c[i];
  }

}

