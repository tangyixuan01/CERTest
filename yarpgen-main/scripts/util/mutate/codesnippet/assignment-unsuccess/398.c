//g:int;d:char;f:char;b:struct 
{
  unsigned a : 6;
};h:char
d = ~(((h ^ b.a) & 132) & ((~(f && g)) | (d && 1)));
