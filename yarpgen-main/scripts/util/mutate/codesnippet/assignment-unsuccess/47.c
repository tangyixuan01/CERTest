//a:union 
{
  uint64_t u[2];
  uint8_t c[16];
};b:union 
{
  uint64_t u[2];
  uint8_t c[16];
}
a.u[0] ^= b.u[0];
