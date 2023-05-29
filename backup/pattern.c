#include <stdio.h>
int main()
{
    int n = 3;
    int m = 1;
    int f = 3;
    int o = 1;
    for (int i = 1; i <= 7; i++)
    {
        if (i <= 4)
        {
            for (int j = 1; j <= n; j++)
            {
                printf(" ");
            }
            n--;
            for (int k = 1; k <= m; k++)
            {
                printf("* ");
            }
            m++;
        }
        else
        {
            for (int j = 1; j <= o; j++)
            {
                printf(" ");
            }
            o++;
            for (int k = 1; k <= f; k++)
            {
                printf("* ");
            }
            f--;
        }
        printf("\n");
    }

    return 0;
}