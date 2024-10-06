//a:int  b:int  c:int  
for (a = 0; a < 8; a++)
  for (b = 0; b < 2; b++)
  c[b][a] = c[b][b + 6] ^ 1;

//a:int  b:int  c:int  
for (a = 0; a < 8; a++)
  for (b = 0; b < 2; b++)
  c[b][a] = c[b][b + 6] ^ 1;

