//blowfish_set_key:func int
int main(int argc, char *argv[])
{
  struct cipher_context cx;
  struct blow_key bk;
  cx.keyinfo = (unsigned int *) (&bk);
  blowfish_set_key(&cx, "1234567890123456", 16, 0);
  return 0;
}

