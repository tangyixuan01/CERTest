//b:uint64 [32];alpha_ep_extbl_i_eq_0:func void;pars:unsigned int
int main(void)
{
  b[17] = 0x0000000000303882;
  b[2] = 0x534f4f4c494d000a;
  pars = 0x88000042;
  alpha_ep_extbl_i_eq_0();
  if (b[2] != 0x4d)
  {
    printf("Buggy compiler!\n");
  }
  else
  {
    printf("Correct result!\n");
  }
  printf("result %llx\n", b[2]);
}

