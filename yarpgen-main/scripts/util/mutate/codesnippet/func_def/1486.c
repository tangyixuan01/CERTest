//
int main()
{
  int n;
  int z;
  n = 1;
  while ((z = sizeof(char [n])) && (n < 10))
  {
    printf("%d ", z);
    n++;
  }

  printf("\n");
  n = 1;
  while ((z = sizeof(struct 
  {
    char a[n];
  })) && (n < 10))
  {
    printf("%d ", z);
    n++;
  }

  printf("\n");
  n = 1;
  {
    loop:
    ;

    _Bool ctrl_expr = (z = sizeof(struct 
    {
      char a[n];
    })) && (n < 10);
    if (!ctrl_expr)
      goto after_loop;
    {
      printf("%d ", z);
      n++;
    }
    goto loop;
  }
  after_loop:
  printf("\n");

}

