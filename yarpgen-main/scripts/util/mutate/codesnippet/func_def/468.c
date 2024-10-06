//y:int;stack:int [3];f:enum 
{
  LEAF = 0,
  NODE = 1
};tree:node *
int listtostack(int n, int f, int *stack, int nbmax)
{
  int x;
  int i;
  int nb;
  if (n == (-1))
    return 0;
  for (x = n, i = 0; (tree[x].f == f) && (i < nbmax); x = tree[x].x, i++)
    ;

  if (i == nbmax)
    exit(1);
  nb = i + 1;
  for (x = n; i > 0; stack[i] = tree[x].y, x = tree[x].x, i--)
    ;

  stack[0] = x;
  return nb;
}

