//k:int;heads:struct head
{
  struct node *first;
} [5];node:struct node
{
  struct node *next;
  struct node *prev;
};head:struct head *
int main()
{
  node.prev = (void *) head;
  head->first = &node;
  struct node *n = head->first;
  struct head *h = &heads[k];
  if (n->prev == ((void *) h))
    h->first = n->next;
  else
    n->prev->next = n->next;
  n->next = h->first;
  return n->next == (&node);
}

