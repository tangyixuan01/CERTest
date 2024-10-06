#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

struct node
{
  struct node *next;
  struct node *prev;
} node;
struct head
{
  struct node *first;
} heads[5];
int k = 2;
struct head *head = &heads[2];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * zauBjXJT = &k;
  unsigned char W2GjHA7y = (unsigned char)0;
  node.prev = (void *) head;
  head->first = &node;
  struct node *n = head->first;
  struct head *h = &heads[k];
  if (n->prev == ((void *) h))
  {
    h->first = n->next;
  }
  else
  {
    n->prev->next = n->next;
    switch (W2GjHA7y)
    {
      case 0x95:
        *zauBjXJT = W2GjHA7y - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *zauBjXJT = W2GjHA7y - 0x80;
        break;

      default:
        *zauBjXJT = 0;
        break;

    }

  }
  n->next = h->first;
  transparent_crc(W2GjHA7y, "W2GjHA7y", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return n->next == (&node);
}

