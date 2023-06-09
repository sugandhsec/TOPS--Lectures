#include <stdio.h>
int main()
{
    int m = 4, n = 1, f = 1, g = 4;
    for (int i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            for (int j = 1; j <= m; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= n; k++)
            {
                printf("* ");
            }
            m--;
            n++;
        }
        else
        {
            for (int j = 1; j <= f; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= g; k++)
            {
                printf("* ");
            }
            f++;
            g--;
        }
        printf("\n");
    }

    return 0;
}