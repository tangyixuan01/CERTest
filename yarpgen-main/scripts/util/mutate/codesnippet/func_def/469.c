//y:int;x:int;listtostack:func int;f:enum 
{
  LEAF = 0,
  NODE = 1
};tree:node *
int main(void)
{
  int stack[3];
  int i;
  int nb;
  tree = (node *) calloc(3, sizeof(node));
  tree[0].f = NODE;
  tree[0].x = 1;
  tree[0].y = 2;
  nb = listtostack(0, 1, stack, 3);
  printf("nb=%d\n", nb);
  for (i = 0; i < nb; i++)
    printf("%d: %d\n", i, stack[i]);

  return 0;
}

