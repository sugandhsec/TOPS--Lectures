#include <stdio.h>
int main()
{

    int a, i, j;
    a = 5;
    for (i = 1; i < 10; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d*%d=%d\n", a, i, a * i);
        }
    }

    return 0;
}