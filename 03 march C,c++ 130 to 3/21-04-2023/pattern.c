#include <stdio.h>
int main()
{
    int n = 21;
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for (int j = 0; j < n - i; j++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
