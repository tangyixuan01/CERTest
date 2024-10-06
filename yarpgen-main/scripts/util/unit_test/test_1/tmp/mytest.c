#include <stdio.h>
struct s
{
    int a;
    int b;
};

void func_1(void)
{
    struct s t = {1, 2};
    struct s *tt = &t;
    int arr[10] = {6};
    short x = 11;
    int res;
    x = x + x - x;
}

int main()
{
    func_1();
    return 0;
}
