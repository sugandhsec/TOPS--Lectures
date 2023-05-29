#include <stdio.h>
int main()
{
    int a = 108;
    int b = 89;
    printf("%d\n", a & b); //bitwise and
    printf("%d\n", a | b); //bitwise or
    printf("%d\n", 85<<2); //bitwise left shift
    printf("%d\n", 85>>2); //bitwise Right shift

    return 0;
}