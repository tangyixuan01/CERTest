//y:int;x:int;tree:node *;i:int;stack:int [3]
for (x = n; i > 0; stack[i] = tree[x].y, x = tree[x].x, i--)
  ;
