//rnsm:func void;snod:func unsigned char;ta:unsigned char;dic:unsigned char;da:unsigned char;state:int;attach_mb_ptr:unsigned char *;ambp:func unsigned char *;lda:unsigned char
switch (state)
{
  case 0:
    attach_mb_ptr = ambp();
    da = snod(0x20, &ta, &dic);
    break;

  case 1:
    lda = da;
    if ((da = snod(lda, &ta, &dic)) != 0x21)
    if (reason == 1)
    rnsm();
    break;

}
