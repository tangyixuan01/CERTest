#include <stdio.h>

int func(int *arr1[2])
{
    return *arr1[0] + *arr1[1];
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
    res = func(arr1);
    printf("%d\n", res);

    return 0;
}
