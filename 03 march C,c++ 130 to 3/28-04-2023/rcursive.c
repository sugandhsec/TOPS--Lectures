#include <stdio.h>

void demo(int k)
{
    if (k < 5)
    {
        printf("hello");
        k++;
        demo(k);
    }
}
int main()
{
    int a = 1;
    demo(a);
    return 0;
}