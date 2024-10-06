#include <stdio.h>

int func(int a, int *b, int **c)
{
    return a + *b + **c;
}

int main()
{
    int a = 10;
    int *b = &a;
    int **c = &b;

    int res;
    res = a + *b + **c;
    printf("%d\n", res);

    res = func(a, b, c);
    printf("%d\n", res);

    return 0;
}
