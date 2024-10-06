#include <stdio.h>

int func(int arg_1, int arg_2) 
{ 
    return arg_1 + arg_2; 
}

int main()
{
    int x = 1;
    int y = 2;

    int *arr1[2] = {&x, &y};

    int res;
    res = *arr1[0] + *arr1[1];
    printf("%d\n", res);

    x = 3;
    res = func(*arr1[0], *arr1[1]);
    printf("%d\n", res);

    return 0;
}
