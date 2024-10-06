//base:const unsigned long
inline static void wreg(unsigned char val, unsigned long addr)
{
  *((volatile unsigned char *) (base + addr)) = val;
}

