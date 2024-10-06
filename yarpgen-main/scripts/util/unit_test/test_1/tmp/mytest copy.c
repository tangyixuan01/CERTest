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
    printf("tt->b = %d\n", tt->b);
    t.b = t.a + tt->b + arr[3] * x;
    printf("%d\n", t.b);
    printf("tt->b = %d\n", tt->b);
    t.b = (t.a + tt->b) + (arr[3] * x);
    printf("%d\n", t.b);
    x = t.a + t.b * tt->a - x;
    x--;
}

int main()
{
    func_1();
    return 0;
}
