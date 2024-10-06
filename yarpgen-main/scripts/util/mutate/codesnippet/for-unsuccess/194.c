//f:enum 
{
  LEAF = 0,
  NODE = 1
};x:int;tree:node *;i:int
for (x = n, i = 0; (tree[x].f == f) && (i < nbmax); x = tree[x].x, i++)
  ;
