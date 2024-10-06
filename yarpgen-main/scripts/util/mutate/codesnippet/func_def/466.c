//
int imain(struct __sk_buff *skb)
{
  char foo[10] = {};
  int sfoo = 4;
  switch (skb->len)
  {
    case 5:
      sfoo = 1;
      break;

    case 6:
      sfoo = 2;
      break;

    case 7:
      sfoo = 3;
      break;

  }

  printt("foo1: (%d %d %d)\n", 1, 2, sfoo);
  skb_store_bytes(skb, 0, foo, sfoo, 0);
  return BPF_H_DEFAULT;
}

