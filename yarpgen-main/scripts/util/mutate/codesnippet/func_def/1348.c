//state:int;ta:unsigned char;dic:unsigned char;lda:unsigned char;ambp:func unsigned char *;attach_mb_ptr:unsigned char *;rnsm:func void;da:unsigned char;snod:func unsigned char
void rosm3(unsigned char reason)
{
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

}

