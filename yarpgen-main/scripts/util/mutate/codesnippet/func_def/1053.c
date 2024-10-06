//walk:func void;malloc:func void *
int main()
{
  struct Node *node = malloc(sizeof(struct Node));
  node->child = 0;
  walk(node, 1);
}

