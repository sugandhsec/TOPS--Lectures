#include <stdio.h>
void demo(int m)
{
    printf("address of m of function is %p", &m);
    int a = 50;
    // printf("%d %d\n", a, k);
}
int main()
{
    int m = 25;
    printf("address of m is %p", &m);
    demo(58);
    demo(m);
    return 0;
}