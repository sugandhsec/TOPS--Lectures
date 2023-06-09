#include <stdio.h>
int main()
{
    int k = 1;
    for (int i = 10; i >= 1; i--)
    {
        if (i >= 5)
        {
            for (int j = 1; j < i; j++)
            {
                // printf("%d ", k);
                // k++;
                printf(" ");
            }
            for (int j = 0; j <= 10 - i; j++)
            {
                // printf("%d ", k);
                // k++;
                printf("* ");
            }
        }
        else
        {
            for (int j = 1; j < i; j++)
            {
                // printf("%d ", k);
                // k++;
                printf(" ");
            }
            for (int j = 0; j <= 10 - i; j++)
            {
                // printf("%d ", k);
                // k++;
                printf("* ");
            }
        }

        printf("\n");
    }
    return 0;
}