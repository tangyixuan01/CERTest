#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-if-snippet

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
  int ejs43zSy = -2147483648;
  long R61cuAws = 8052868000176547711LL;
  int Wwknp90b = 2147483647;
  int * eVk3ZLKE = &k;
  node.prev = (void *) head;
  head->first = &node;
  if (R61cuAws)
    eVk3ZLKE = &Wwknp90b;
  struct node *n = head->first;
  struct head *h = &heads[k];
  if (n->prev == ((void *) h))
  {
    if ((ejs43zSy != 2) == ejs43zSy)
      __builtin_abort();
    h->first = n->next;
  }
  else
  {
    n->prev->next = n->next;
  }
  n->next = h->first;
  transparent_crc(Wwknp90b, "Wwknp90b", 1);
  transparent_crc(R61cuAws, "R61cuAws", 1);
  transparent_crc(ejs43zSy, "ejs43zSy", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return n->next == (&node);
}

