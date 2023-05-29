#include <stdio.h>
// Pre Processor Directives
#define PI 3.14
int fact(int a)
{
    const int k = 450;
    printf("%d", k);
    // k = 890;
    if (a > 1)
    {
        return a * fact(a - 1);
    }
}
int main()
{
    // int x = fact(5);
    // printf("%d", x);
    float area = PI * 5 * 5;
    printf("%f", area);
    // PI = 9.8;
    area = PI * 5 * 5;
    printf("%f", area);
    return 0;
}