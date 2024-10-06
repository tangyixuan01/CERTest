//q:int  printf:int  a:unsigned  am:volatile short  bl:Label  
if (q)
{
  printf("%d", q);
  a = q - am;
  goto bl;
}
