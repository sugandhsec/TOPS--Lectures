#include <stdio.h>

int main()
{
    int a = 72, b = 120, n1 = a, n2 = b;
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    printf("%d", (n1 * n2) / a);
    return 0;
}