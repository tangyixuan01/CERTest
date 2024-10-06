//
int main(void)
{
  struct header *hdr = 0;
  unsigned long ofs;
  for (ofs = 0x20; ofs <= 0x20; ofs += 0x1000)
  {
    struct header *tmp;
    tmp = (struct header *) (0x555555558060 + ofs);
    printf("a: 0x%08x", tmp->a);
    if (tmp->a == 0)
    {
      hdr = tmp;
      break;
    }
  }

  if (hdr == 0)
    return 0;
  printf("found at %p %p %p\n", hdr, &hdr->b, &hdr->c);
  return 0;
}

