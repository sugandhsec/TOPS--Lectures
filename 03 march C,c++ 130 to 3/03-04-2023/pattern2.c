#include <stdio.h>
int main()
{
    int m = 4, n = 1;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf(" ");
        }
        m--;
        for (int k = 1; k <= n; k++)
        {
            printf("* ");
        }
        n++;
        printf("\n");
    }
    return 0;
}