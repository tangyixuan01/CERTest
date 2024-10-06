//r:uint64 *;pars:unsigned int
void alpha_ep_extbl_i_eq_0()
{
  unsigned int rb;
  unsigned int ra;
  unsigned int rc;
  rb = (((unsigned int) pars) >> 27) & 0x1fUL;
  ra = (((unsigned int) pars) >> 5) & 0x1fUL;
  rc = (((unsigned int) pars) >> 0) & 0x1fUL;
  {
    uint64 temp = (r[ra] >> ((r[rb] & 0x7) << 3)) & 0x00000000000000FFLL;
    if (rc != 31)
      r[rc] = temp;
  }
}

