//l:long;c:char;s:short
int main()
{
  int i;
  cls *ptr;
  cls arr[64];
  for (i = 0; i < 64; i++)
  {
    arr[i].c = i;
    arr[i].l = i * i;
    arr[i].s = i;
  }

  ptr = arr + 7;
  if (ptr->l != 49)
  {
    return 1;
  }
  return 0;
}

