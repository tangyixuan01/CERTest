//
int main(void)
{
  struct sun_disklabel label;
  __be16 csum;
  __be16 *ush;
  memset(&label, 0xff, sizeof(label));
  ush = ((__be16 *) ((&label) + 1)) - 1;
  for (csum = 0; ush >= ((__be16 *) (&label));)
    csum ^= *(ush--);

  printf("Test checksum is %x\n", csum);
  exit(0);
}

