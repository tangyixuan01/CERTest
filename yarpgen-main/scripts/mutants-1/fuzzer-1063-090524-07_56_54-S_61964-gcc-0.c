#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  int zevSNHRF = 481058481;
  int MYLg2iNE = -2147483648;
  int * ydpaQ0RS = &k;
  node.prev = (void *) head;
  head->first = &node;
  struct node *n = head->first;
  struct head *h = &heads[k];
  if (n->prev == ((void *) h))
  {
    zevSNHRF = ((&MYLg2iNE) == ydpaQ0RS) + 1;
    h->first = n->next;
  }
  else
  {
    n->prev->next = n->next;
  }
  n->next = h->first;
  transparent_crc(MYLg2iNE, "MYLg2iNE", 1);
  transparent_crc(zevSNHRF, "zevSNHRF", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return n->next == (&node);
}

