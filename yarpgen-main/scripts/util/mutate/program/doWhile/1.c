//from:struct X  to:struct X  
do
{
  struct X temp = *from;
  *from = *to;
  *to = temp;
  from++;
  to--;
}
while (from < to);