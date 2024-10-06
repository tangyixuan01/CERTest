#include <stdio.h>
struct s
{
    int a;
    int b;
};
int func_wPaXFVkH(struct s arg_0, struct s *arg_1, int arg_2[10], short arg_3) { return (arg_0.a + arg_1->b) + (arg_2[3] * arg_3); }

void func_1(void)
{
    struct s t = {1, 2};
    struct s *tt = &t;
    int arr[10] = {6};
    short x = 11;
    int res;
    printf("tt->b = %d\n", tt->b);
    t.b = (t.a + tt->b) + (arr[3] * x);
    printf("%d\n", t.b);
    printf("tt->b = %d\n", tt->b);
    t.b = func_wPaXFVkH(t, tt, arr, x);
    printf("%d\n", t.b);
}

int main()
{
    func_1();
    return 0;
}
