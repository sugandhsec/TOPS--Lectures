#include <stdio.h>
int main()
{
    int m = 4, n = 1, f = 1, g = 4;
    for (int i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {

            for (int k = 1; k <= n; k++)
            {
                printf("* ");
            }
            m--;
            n++;
        }
        else
        {

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