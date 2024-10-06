//ptr:unsigned char  val:unsigned long int  
if (ptr[0] < 0xC0U)
{
  *val = ptr[0] + ptr[1];
  return;
}
